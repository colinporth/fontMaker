// freetypeFontMaker.cpp
//{{{  includes
#include "stdafx.h"

#include <ft2build.h>
#include FT_FREETYPE_H

#pragma comment(lib,"freetype255")
//}}}
#include "freeSansBold.c"

#define WRITEFILE

bool full = true;
bool display = false;

FT_Library library;

//{{{
void makeFont (char* font, int height, BYTE firstChar, BYTE lastChar) {

  WORD byteOffsets [256];
  WORD frameBuf [400*320];

  FT_Face face;
  //FT_Error error = FT_New_Face (library, font, 0, &face);
  FT_Error error = FT_New_Memory_Face( library, (FT_Byte*)freeSansBold, freeSansBold_len, 0, &face );


  printf ("num_faces %d\n", face->num_faces);
  printf ("face_flags %4x\n", face->face_flags);
  printf ("units_per_EM %d\n", face->units_per_EM);
  printf ("num_glyphs %d\n", face->num_glyphs);
  printf ("num_fixed_sizes %d\n", face->num_fixed_sizes);

  FT_GlyphSlot slot;
  slot = face->glyph;

  #ifdef WRITEFILE
  char str[40];
  sprintf (str, "font%d.c", height);
  FILE* fp = fopen(str, "w");
  if (!fp)
    printf("WRITEFILE error\n");
  #endif

  error = FT_Set_Pixel_Sizes(face, 0, height);

  if (full) {
    //{{{
    printf ("Height %d\n", height);
    printf ("FirstChar %2x\n", firstChar);
    printf ("LastChar %2x\n", lastChar);
    }
    //}}}

  #ifdef WRITEFILE
  fprintf (fp, "#include \"font.h\"\n");
  fprintf (fp, "\n");
  fprintf (fp, "static uint8_t glyphsBase[] = {\n");
  #endif

  int byteOffset = 0;
  int totalBytes = 0;
  int totalCounts = 0;
  int totalHighestCount = 0;

  for (int ch = firstChar; ch <= lastChar; ch++) {
    error = FT_Load_Char (face, ch, FT_LOAD_RENDER | FT_LOAD_TARGET_MONO);

    if (full) {
      //{{{
      printf ("Width %d\n", slot->bitmap.width);
      printf ("height %d\n", slot->bitmap.rows);
      printf ("Pitch %d\n", slot->bitmap.pitch);
      printf ("Left %d\n", slot->bitmap_left);
      printf ("Top %d\n", slot->bitmap_top);
      printf ("Advance %d\n", slot->advance.x/64);
      }
      //}}}

    byteOffsets[ch] = byteOffset;
    #ifdef WRITEFILE
    fprintf (fp, "// char:%02x \"%c\"\n", ch, ch);
    fprintf (fp, "  %d, // width\n", slot->bitmap.width);
    byteOffset++;
    fprintf (fp, "  %d, // height\n", slot->bitmap.rows);
    byteOffset++;
    fprintf (fp, "  0x%02x, // left\n", slot->bitmap_left);
    byteOffset++;
    fprintf (fp, "  0x%02x, // top\n", slot->bitmap_top & 0xFF);
    byteOffset++;
    fprintf (fp, "  %d, // advance\n", slot->advance.x / 64);
    byteOffset++;
    #endif

    int buf = 0;
    bool countingOn = false;
    int highestCount = 0;
    int counts = 0;
    int count = 0;
    for (int ypix = 0; ypix < slot->bitmap.rows; ypix++) {
      #ifdef WRITEFILE
      fprintf(fp, "  ");
      for (int x = 0; x < (slot->bitmap.width+7)/8; x++) {
        fprintf (fp, "0x%02x, ", slot->bitmap.buffer[(ypix * slot->bitmap.pitch) + x]);
        byteOffset++;
        }
      fprintf(fp, " //   ");
      #endif

      for (int xpix = 0; xpix < slot->bitmap.width; xpix++) {
        //{{{
        BYTE xMask = 0x80 >> (xpix & 7);
        bool on = slot->bitmap.buffer[(ypix * slot->bitmap.pitch) + (xpix/8)] & xMask;
        frameBuf[buf++] = on ? 0xFFFF : 0;

        if (on == countingOn)
          count++;
        else {
          counts++;
          if (count > highestCount) highestCount = count;
          countingOn = on;
          count = 0;
          }

        #ifdef WRITEFILE
        if (on)
          fprintf (fp, "X");
        else
          fprintf (fp, ".");
        #endif

        if (full) {
          if (on)
            printf ("X");
          else
            printf (".");
          }

        //uint8 grey = slot->bitmap.buffer[(ypix * slot->bitmap.pitch) + xpix];
        //frameBuf[buf++] = ((grey >> 5) & 0x0006)  | // g 7:5
        //                  ((grey << 11) & 0x0000) | // g 4:2
        //                  ((grey << 5) & 0x1F00)  | // b 7:3
        //                  ((grey >> 0) & 0x00C0);   // r 7:3
        }
        //}}}

      #ifdef WRITEFILE
      fprintf(fp, "\n");
      #endif

      if (full) {
        //{{{  print line totals
        printf(" - counts:%03d bytes:%03d high:%03d - ", counts, slot->bitmap.rows*slot->bitmap.pitch, highestCount);
        for (int x = 0; x < slot->bitmap.pitch; x++)
          printf("%02x", slot->bitmap.buffer[(ypix * slot->bitmap.pitch) + x]);
        printf("\n");
        }
        //}}}
      }

    totalBytes += slot->bitmap.pitch * slot->bitmap.rows;
    totalCounts += counts+1;
    if (highestCount > totalHighestCount)
      totalHighestCount = highestCount;
    }

  #ifdef WRITEFILE
  fprintf(fp, "//\n");
  fprintf(fp, "};\n");

  fprintf(fp, "static uint16_t glyphOffsets[] = {\n");
  for (int ch = firstChar; ch <= lastChar; ch++)
    fprintf(fp, "  0x%04x, // char %02x - %c offset\n", byteOffsets[ch], ch, ch);
  fprintf(fp, "};\n");

  fprintf(fp, "font_t font%d = {\n", height);
  fprintf(fp, "  .fixedWidth     = 0,\n");
  fprintf(fp, "  .height         = %d,\n", height);
  fprintf(fp, "  .spaceWidth     = %d,\n", height/4);
  fprintf(fp, "  .firstChar      = 0x%02x,\n", firstChar);
  fprintf(fp, "  .lastChar       = 0x%02x,\n", lastChar);
  fprintf(fp, "  .glyphsBase     = glyphsBase,\n");
  fprintf(fp, "  .glyphOffsets   = glyphOffsets\n");
  fprintf(fp, "};\n");
  fclose(fp);
  #endif

  printf ("height:%d counts:%d highestCount:%d bytes:%d\n",
          height, totalCounts, totalHighestCount, totalBytes);

  FT_Done_Face(face);
  }
//}}}

int _tmain (int argc, _TCHAR* argv[]) {

  FT_Error error = FT_Init_FreeType (&library);

  makeFont ("FreeSansBold.ttf", 18, 0x21, 0x7f);
  makeFont ("FreeSansBold.ttf", 36, 0x21, 0x7f);
  makeFont ("FreeSansBold.ttf", 72, 0x21, 0x7f);
  makeFont ("FreeSansBold.ttf", 120, 0x21, 0x7f);

  FT_Done_FreeType (library);


  return 0;
  }
