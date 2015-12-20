#include "font.h"

static uint8_t glyphsBase[] = {
// char:21 "!"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:22 """
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  39, // advance
// char:23 "#"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:24 "$"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:25 "%"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  72, // advance
// char:26 "&"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  85, // advance
// char:27 "'"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  19, // advance
// char:28 "("
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:29 ")"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:2a "*"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:2b "+"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:2c ","
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:2d "-"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:2e "."
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:2f "/"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:30 "0"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:31 "1"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:32 "2"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:33 "3"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:34 "4"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:35 "5"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:36 "6"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:37 "7"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:38 "8"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:39 "9"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:3a ":"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:3b ";"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:3c "<"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:3d "="
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:3e ">"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:3f "?"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:40 "@"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  92, // advance
// char:41 "A"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  71, // advance
// char:42 "B"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  68, // advance
// char:43 "C"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  72, // advance
// char:44 "D"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  74, // advance
// char:45 "E"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  64, // advance
// char:46 "F"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:47 "G"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  81, // advance
// char:48 "H"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  79, // advance
// char:49 "I"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  33, // advance
// char:4a "J"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  57, // advance
// char:4b "K"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  69, // advance
// char:4c "L"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  61, // advance
// char:4d "M"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  85, // advance
// char:4e "N"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  77, // advance
// char:4f "O"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  81, // advance
// char:50 "P"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  67, // advance
// char:51 "Q"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  81, // advance
// char:52 "R"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  70, // advance
// char:53 "S"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  58, // advance
// char:54 "T"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  70, // advance
// char:55 "U"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  78, // advance
// char:56 "V"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  70, // advance
// char:57 "W"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  102, // advance
// char:58 "X"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  67, // advance
// char:59 "Y"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  68, // advance
// char:5a "Z"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  66, // advance
// char:5b "["
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:5c "\"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  43, // advance
// char:5d "]"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:5e "^"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:5f "_"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:60 "`"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:61 "a"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:62 "b"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  67, // advance
// char:63 "c"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  59, // advance
// char:64 "d"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  67, // advance
// char:65 "e"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  65, // advance
// char:66 "f"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:67 "g"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  60, // advance
// char:68 "h"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  66, // advance
// char:69 "i"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  34, // advance
// char:6a "j"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:6b "k"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  61, // advance
// char:6c "l"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  35, // advance
// char:6d "m"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  100, // advance
// char:6e "n"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  66, // advance
// char:6f "o"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  64, // advance
// char:70 "p"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  67, // advance
// char:71 "q"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  67, // advance
// char:72 "r"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  47, // advance
// char:73 "s"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  49, // advance
// char:74 "t"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  48, // advance
// char:75 "u"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  66, // advance
// char:76 "v"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  59, // advance
// char:77 "w"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  89, // advance
// char:78 "x"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  60, // advance
// char:79 "y"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  59, // advance
// char:7a "z"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  57, // advance
// char:7b "{"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:7c "|"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:7d "}"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  44, // advance
// char:7e "~"
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  63, // advance
// char:7f ""
  0, // width
  0, // height
  0x00, // left
  0x00, // top
  60, // advance
//
};
static uint16_t glyphOffsets[] = {
  0x0000, // char 21 - ! offset
  0x0005, // char 22 - " offset
  0x000a, // char 23 - # offset
  0x000f, // char 24 - $ offset
  0x0014, // char 25 - % offset
  0x0019, // char 26 - & offset
  0x001e, // char 27 - ' offset
  0x0023, // char 28 - ( offset
  0x0028, // char 29 - ) offset
  0x002d, // char 2a - * offset
  0x0032, // char 2b - + offset
  0x0037, // char 2c - , offset
  0x003c, // char 2d - - offset
  0x0041, // char 2e - . offset
  0x0046, // char 2f - / offset
  0x004b, // char 30 - 0 offset
  0x0050, // char 31 - 1 offset
  0x0055, // char 32 - 2 offset
  0x005a, // char 33 - 3 offset
  0x005f, // char 34 - 4 offset
  0x0064, // char 35 - 5 offset
  0x0069, // char 36 - 6 offset
  0x006e, // char 37 - 7 offset
  0x0073, // char 38 - 8 offset
  0x0078, // char 39 - 9 offset
  0x007d, // char 3a - : offset
  0x0082, // char 3b - ; offset
  0x0087, // char 3c - < offset
  0x008c, // char 3d - = offset
  0x0091, // char 3e - > offset
  0x0096, // char 3f - ? offset
  0x009b, // char 40 - @ offset
  0x00a0, // char 41 - A offset
  0x00a5, // char 42 - B offset
  0x00aa, // char 43 - C offset
  0x00af, // char 44 - D offset
  0x00b4, // char 45 - E offset
  0x00b9, // char 46 - F offset
  0x00be, // char 47 - G offset
  0x00c3, // char 48 - H offset
  0x00c8, // char 49 - I offset
  0x00cd, // char 4a - J offset
  0x00d2, // char 4b - K offset
  0x00d7, // char 4c - L offset
  0x00dc, // char 4d - M offset
  0x00e1, // char 4e - N offset
  0x00e6, // char 4f - O offset
  0x00eb, // char 50 - P offset
  0x00f0, // char 51 - Q offset
  0x00f5, // char 52 - R offset
  0x00fa, // char 53 - S offset
  0x00ff, // char 54 - T offset
  0x0104, // char 55 - U offset
  0x0109, // char 56 - V offset
  0x010e, // char 57 - W offset
  0x0113, // char 58 - X offset
  0x0118, // char 59 - Y offset
  0x011d, // char 5a - Z offset
  0x0122, // char 5b - [ offset
  0x0127, // char 5c - \ offset
  0x012c, // char 5d - ] offset
  0x0131, // char 5e - ^ offset
  0x0136, // char 5f - _ offset
  0x013b, // char 60 - ` offset
  0x0140, // char 61 - a offset
  0x0145, // char 62 - b offset
  0x014a, // char 63 - c offset
  0x014f, // char 64 - d offset
  0x0154, // char 65 - e offset
  0x0159, // char 66 - f offset
  0x015e, // char 67 - g offset
  0x0163, // char 68 - h offset
  0x0168, // char 69 - i offset
  0x016d, // char 6a - j offset
  0x0172, // char 6b - k offset
  0x0177, // char 6c - l offset
  0x017c, // char 6d - m offset
  0x0181, // char 6e - n offset
  0x0186, // char 6f - o offset
  0x018b, // char 70 - p offset
  0x0190, // char 71 - q offset
  0x0195, // char 72 - r offset
  0x019a, // char 73 - s offset
  0x019f, // char 74 - t offset
  0x01a4, // char 75 - u offset
  0x01a9, // char 76 - v offset
  0x01ae, // char 77 - w offset
  0x01b3, // char 78 - x offset
  0x01b8, // char 79 - y offset
  0x01bd, // char 7a - z offset
  0x01c2, // char 7b - { offset
  0x01c7, // char 7c - | offset
  0x01cc, // char 7d - } offset
  0x01d1, // char 7e - ~ offset
  0x01d6, // char 7f -  offset
};
font_t font120 = {
  .fixedWidth     = 0,
  .height         = 120,
  .spaceWidth     = 30,
  .firstChar      = 0x21,
  .lastChar       = 0x7f,
  .glyphsBase     = glyphsBase,
  .glyphOffsets   = glyphOffsets
};
