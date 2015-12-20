#include "font.h"

static uint8_t glyphsBase[] = {
// char:21 "!"
  2, // width
  13, // height
  0x02, // left
  0x0d, // top
  7, // advance
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0x00,  //   ..
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
// char:22 """
  5, // width
  3, // height
  0x01, // left
  0x0d, // top
  6, // advance
  0xd8,  //   XX.XX
  0xd8,  //   XX.XX
  0xd8,  //   XX.XX
// char:23 "#"
  10, // width
  13, // height
  0x00, // left
  0x0d, // top
  9, // advance
  0x08, 0x80,  //   ....X...X.
  0x08, 0x80,  //   ....X...X.
  0x11, 0x00,  //   ...X...X..
  0x11, 0x00,  //   ...X...X..
  0x7f, 0xc0,  //   .XXXXXXXXX
  0x22, 0x00,  //   ..X...X...
  0x22, 0x00,  //   ..X...X...
  0x22, 0x00,  //   ..X...X...
  0xff, 0x80,  //   XXXXXXXXX.
  0x44, 0x00,  //   .X...X....
  0x44, 0x00,  //   .X...X....
  0x88, 0x00,  //   X...X.....
  0x88, 0x00,  //   X...X.....
// char:24 "$"
  8, // width
  16, // height
  0x00, // left
  0x0e, // top
  9, // advance
  0x18,  //   ...XX...
  0x3e,  //   ..XXXXX.
  0x7e,  //   .XXXXXX.
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0x70,  //   .XXX....
  0x3c,  //   ..XXXX..
  0x06,  //   .....XX.
  0x03,  //   ......XX
  0x03,  //   ......XX
  0x07,  //   .....XXX
  0xfe,  //   XXXXXXX.
  0xfc,  //   XXXXXX..
  0x18,  //   ...XX...
  0x18,  //   ...XX...
// char:25 "%"
  9, // width
  13, // height
  0x01, // left
  0x0d, // top
  11, // advance
  0x71, 0x00,  //   .XXX...X.
  0x8a, 0x00,  //   X...X.X..
  0x8a, 0x00,  //   X...X.X..
  0x8c, 0x00,  //   X...XX...
  0x8c, 0x00,  //   X...XX...
  0x78, 0x00,  //   .XXXX....
  0x10, 0x00,  //   ...X.....
  0x17, 0x00,  //   ...X.XXX.
  0x28, 0x80,  //   ..X.X...X
  0x28, 0x80,  //   ..X.X...X
  0x48, 0x80,  //   .X..X...X
  0x48, 0x80,  //   .X..X...X
  0x87, 0x00,  //   X....XXX.
// char:26 "&"
  11, // width
  13, // height
  0x01, // left
  0x0d, // top
  13, // advance
  0x3c, 0x00,  //   ..XXXX.....
  0x7e, 0x00,  //   .XXXXXX....
  0xc0, 0x00,  //   XX.........
  0xc3, 0x00,  //   XX....XX...
  0xc3, 0x00,  //   XX....XX...
  0x7f, 0xc0,  //   .XXXXXXXXX.
  0xff, 0xc0,  //   XXXXXXXXXX.
  0xc3, 0x00,  //   XX....XX...
  0xc3, 0x00,  //   XX....XX...
  0xc3, 0x00,  //   XX....XX...
  0xe3, 0x40,  //   XXX...XX.X.
  0x7f, 0xe0,  //   .XXXXXXXXXX
  0x3c, 0xc0,  //   ..XXXX..XX.
// char:27 "'"
  2, // width
  3, // height
  0x01, // left
  0x0d, // top
  3, // advance
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
// char:28 "("
  4, // width
  17, // height
  0x02, // left
  0x0d, // top
  7, // advance
  0x10,  //   ...X
  0x30,  //   ..XX
  0x20,  //   ..X.
  0x60,  //   .XX.
  0x40,  //   .X..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0x40,  //   .X..
  0x60,  //   .XX.
  0x20,  //   ..X.
  0x30,  //   ..XX
  0x10,  //   ...X
// char:29 ")"
  4, // width
  17, // height
  0x02, // left
  0x0d, // top
  7, // advance
  0x80,  //   X...
  0xc0,  //   XX..
  0x40,  //   .X..
  0x60,  //   .XX.
  0x20,  //   ..X.
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x20,  //   ..X.
  0x60,  //   .XX.
  0x40,  //   .X..
  0xc0,  //   XX..
  0x80,  //   X...
// char:2a "*"
  6, // width
  5, // height
  0x00, // left
  0x0d, // top
  7, // advance
  0x30,  //   ..XX..
  0x30,  //   ..XX..
  0xfc,  //   XXXXXX
  0x78,  //   .XXXX.
  0x48,  //   .X..X.
// char:2b "+"
  8, // width
  8, // height
  0x01, // left
  0x0a, // top
  9, // advance
  0x18,  //   ...XX...
  0x18,  //   ...XX...
  0x18,  //   ...XX...
  0xff,  //   XXXXXXXX
  0xff,  //   XXXXXXXX
  0x18,  //   ...XX...
  0x18,  //   ...XX...
  0x18,  //   ...XX...
// char:2c ","
  4, // width
  6, // height
  0x01, // left
  0x03, // top
  7, // advance
  0x70,  //   .XXX
  0x70,  //   .XXX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x60,  //   .XX.
  0x80,  //   X...
// char:2d "-"
  4, // width
  2, // height
  0x01, // left
  0x06, // top
  7, // advance
  0xf0,  //   XXXX
  0xf0,  //   XXXX
// char:2e "."
  3, // width
  3, // height
  0x02, // left
  0x03, // top
  7, // advance
  0xe0,  //   XXX
  0xe0,  //   XXX
  0xe0,  //   XXX
// char:2f "/"
  7, // width
  13, // height
  0x02, // left
  0x0d, // top
  9, // advance
  0x06,  //   .....XX
  0x0c,  //   ....XX.
  0x0c,  //   ....XX.
  0x0c,  //   ....XX.
  0x18,  //   ...XX..
  0x18,  //   ...XX..
  0x38,  //   ..XXX..
  0x30,  //   ..XX...
  0x30,  //   ..XX...
  0x60,  //   .XX....
  0x60,  //   .XX....
  0x60,  //   .XX....
  0xc0,  //   XX.....
// char:30 "0"
  7, // width
  13, // height
  0x01, // left
  0x0d, // top
  9, // advance
  0x38,  //   ..XXX..
  0x7c,  //   .XXXXX.
  0x6e,  //   .XX.XXX
  0xc6,  //   XX...XX
  0xc6,  //   XX...XX
  0xc6,  //   XX...XX
  0xc6,  //   XX...XX
  0xc6,  //   XX...XX
  0xc6,  //   XX...XX
  0xc6,  //   XX...XX
  0xec,  //   XXX.XX.
  0x7c,  //   .XXXXX.
  0x38,  //   ..XXX..
// char:31 "1"
  5, // width
  13, // height
  0x01, // left
  0x0d, // top
  9, // advance
  0x08,  //   ....X
  0x38,  //   ..XXX
  0x78,  //   .XXXX
  0xf8,  //   XXXXX
  0x98,  //   X..XX
  0x18,  //   ...XX
  0x18,  //   ...XX
  0x18,  //   ...XX
  0x18,  //   ...XX
  0x18,  //   ...XX
  0x18,  //   ...XX
  0x18,  //   ...XX
  0x18,  //   ...XX
// char:32 "2"
  7, // width
  13, // height
  0x01, // left
  0x0d, // top
  9, // advance
  0x7c,  //   .XXXXX.
  0xfe,  //   XXXXXXX
  0x86,  //   X....XX
  0x06,  //   .....XX
  0x06,  //   .....XX
  0x04,  //   .....X.
  0x0c,  //   ....XX.
  0x18,  //   ...XX..
  0x18,  //   ...XX..
  0x30,  //   ..XX...
  0x60,  //   .XX....
  0x7e,  //   .XXXXXX
  0xfe,  //   XXXXXXX
// char:33 "3"
  7, // width
  13, // height
  0x01, // left
  0x0d, // top
  9, // advance
  0x78,  //   .XXXX..
  0xfc,  //   XXXXXX.
  0x46,  //   .X...XX
  0x06,  //   .....XX
  0x04,  //   .....X.
  0x18,  //   ...XX..
  0x1c,  //   ...XXX.
  0x0e,  //   ....XXX
  0x06,  //   .....XX
  0x06,  //   .....XX
  0x46,  //   .X...XX
  0xfc,  //   XXXXXX.
  0x78,  //   .XXXX..
// char:34 "4"
  9, // width
  13, // height
  0x00, // left
  0x0d, // top
  9, // advance
  0x01, 0x00,  //   .......X.
  0x03, 0x00,  //   ......XX.
  0x07, 0x00,  //   .....XXX.
  0x0f, 0x00,  //   ....XXXX.
  0x1b, 0x00,  //   ...XX.XX.
  0x33, 0x00,  //   ..XX..XX.
  0x63, 0x00,  //   .XX...XX.
  0xff, 0x80,  //   XXXXXXXXX
  0xff, 0x80,  //   XXXXXXXXX
  0x03, 0x00,  //   ......XX.
  0x03, 0x00,  //   ......XX.
  0x03, 0x00,  //   ......XX.
  0x03, 0x00,  //   ......XX.
// char:35 "5"
  7, // width
  13, // height
  0x01, // left
  0x0d, // top
  9, // advance
  0xfc,  //   XXXXXX.
  0xfc,  //   XXXXXX.
  0xc0,  //   XX.....
  0xc0,  //   XX.....
  0xf8,  //   XXXXX..
  0xfc,  //   XXXXXX.
  0x8e,  //   X...XXX
  0x06,  //   .....XX
  0x06,  //   .....XX
  0x06,  //   .....XX
  0x4e,  //   .X..XXX
  0xfc,  //   XXXXXX.
  0x78,  //   .XXXX..
// char:36 "6"
  8, // width
  13, // height
  0x00, // left
  0x0d, // top
  9, // advance
  0x0c,  //   ....XX..
  0x18,  //   ...XX...
  0x30,  //   ..XX....
  0x70,  //   .XXX....
  0x60,  //   .XX.....
  0xdc,  //   XX.XXX..
  0xfe,  //   XXXXXXX.
  0xc7,  //   XX...XXX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xe7,  //   XXX..XXX
  0x7e,  //   .XXXXXX.
  0x3c,  //   ..XXXX..
// char:37 "7"
  8, // width
  13, // height
  0x01, // left
  0x0d, // top
  9, // advance
  0xff,  //   XXXXXXXX
  0xff,  //   XXXXXXXX
  0x02,  //   ......X.
  0x06,  //   .....XX.
  0x04,  //   .....X..
  0x0c,  //   ....XX..
  0x08,  //   ....X...
  0x18,  //   ...XX...
  0x18,  //   ...XX...
  0x30,  //   ..XX....
  0x30,  //   ..XX....
  0x20,  //   ..X.....
  0x60,  //   .XX.....
// char:38 "8"
  7, // width
  13, // height
  0x01, // left
  0x0d, // top
  9, // advance
  0x7c,  //   .XXXXX.
  0xfe,  //   XXXXXXX
  0xc6,  //   XX...XX
  0xc6,  //   XX...XX
  0xc6,  //   XX...XX
  0x6c,  //   .XX.XX.
  0x7c,  //   .XXXXX.
  0xee,  //   XXX.XXX
  0xc6,  //   XX...XX
  0xc6,  //   XX...XX
  0xc6,  //   XX...XX
  0xfe,  //   XXXXXXX
  0x7c,  //   .XXXXX.
// char:39 "9"
  8, // width
  13, // height
  0x00, // left
  0x0d, // top
  9, // advance
  0x3c,  //   ..XXXX..
  0x7e,  //   .XXXXXX.
  0xe7,  //   XXX..XXX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xe3,  //   XXX...XX
  0x7f,  //   .XXXXXXX
  0x3b,  //   ..XXX.XX
  0x06,  //   .....XX.
  0x06,  //   .....XX.
  0x0c,  //   ....XX..
  0x18,  //   ...XX...
  0x30,  //   ..XX....
// char:3a ":"
  3, // width
  9, // height
  0x02, // left
  0x09, // top
  7, // advance
  0xe0,  //   XXX
  0xe0,  //   XXX
  0xe0,  //   XXX
  0x00,  //   ...
  0x00,  //   ...
  0x00,  //   ...
  0xe0,  //   XXX
  0xe0,  //   XXX
  0xe0,  //   XXX
// char:3b ";"
  4, // width
  12, // height
  0x01, // left
  0x09, // top
  7, // advance
  0x70,  //   .XXX
  0x70,  //   .XXX
  0x70,  //   .XXX
  0x00,  //   ....
  0x00,  //   ....
  0x00,  //   ....
  0x70,  //   .XXX
  0x70,  //   .XXX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x60,  //   .XX.
  0x80,  //   X...
// char:3c "<"
  6, // width
  7, // height
  0x01, // left
  0x09, // top
  9, // advance
  0x04,  //   .....X
  0x1c,  //   ...XXX
  0x78,  //   .XXXX.
  0xc0,  //   XX....
  0x78,  //   .XXXX.
  0x1c,  //   ...XXX
  0x04,  //   .....X
// char:3d "="
  7, // width
  6, // height
  0x01, // left
  0x09, // top
  9, // advance
  0xfe,  //   XXXXXXX
  0xfe,  //   XXXXXXX
  0x00,  //   .......
  0x00,  //   .......
  0xfe,  //   XXXXXXX
  0xfe,  //   XXXXXXX
// char:3e ">"
  6, // width
  7, // height
  0x01, // left
  0x09, // top
  9, // advance
  0x80,  //   X.....
  0xe0,  //   XXX...
  0x78,  //   .XXXX.
  0x0c,  //   ....XX
  0x78,  //   .XXXX.
  0xe0,  //   XXX...
  0x80,  //   X.....
// char:3f "?"
  6, // width
  13, // height
  0x01, // left
  0x0d, // top
  7, // advance
  0x78,  //   .XXXX.
  0xfc,  //   XXXXXX
  0x0c,  //   ....XX
  0x0c,  //   ....XX
  0x18,  //   ...XX.
  0x30,  //   ..XX..
  0x70,  //   .XXX..
  0x60,  //   .XX...
  0x60,  //   .XX...
  0x00,  //   ......
  0x60,  //   .XX...
  0x60,  //   .XX...
  0x60,  //   .XX...
// char:40 "@"
  11, // width
  13, // height
  0x01, // left
  0x0c, // top
  14, // advance
  0x1f, 0x00,  //   ...XXXXX...
  0x20, 0x80,  //   ..X.....X..
  0x40, 0x40,  //   .X.......X.
  0x8c, 0x40,  //   X...XX...X.
  0x8a, 0x20,  //   X...X.X...X
  0x8e, 0x20,  //   X...XXX...X
  0x92, 0x20,  //   X..X..X...X
  0x92, 0x20,  //   X..X..X...X
  0x92, 0x40,  //   X..X..X..X.
  0x8d, 0xc0,  //   X...XX.XXX.
  0x40, 0x00,  //   .X.........
  0x20, 0x00,  //   ..X........
  0x1f, 0xc0,  //   ...XXXXXXX.
// char:41 "A"
  11, // width
  13, // height
  0x00, // left
  0x0d, // top
  11, // advance
  0x04, 0x00,  //   .....X.....
  0x0e, 0x00,  //   ....XXX....
  0x0e, 0x00,  //   ....XXX....
  0x0a, 0x00,  //   ....X.X....
  0x1b, 0x00,  //   ...XX.XX...
  0x1b, 0x00,  //   ...XX.XX...
  0x31, 0x80,  //   ..XX...XX..
  0x31, 0x80,  //   ..XX...XX..
  0x3f, 0x80,  //   ..XXXXXXX..
  0x7f, 0xc0,  //   .XXXXXXXXX.
  0x60, 0xc0,  //   .XX.....XX.
  0x60, 0xc0,  //   .XX.....XX.
  0xc0, 0x60,  //   XX.......XX
// char:42 "B"
  8, // width
  13, // height
  0x01, // left
  0x0d, // top
  10, // advance
  0xfc,  //   XXXXXX..
  0xfe,  //   XXXXXXX.
  0xc6,  //   XX...XX.
  0xc6,  //   XX...XX.
  0xc6,  //   XX...XX.
  0xfc,  //   XXXXXX..
  0xfe,  //   XXXXXXX.
  0xc7,  //   XX...XXX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc7,  //   XX...XXX
  0xfe,  //   XXXXXXX.
  0xfc,  //   XXXXXX..
// char:43 "C"
  9, // width
  13, // height
  0x01, // left
  0x0d, // top
  11, // advance
  0x1f, 0x00,  //   ...XXXXX.
  0x3f, 0x80,  //   ..XXXXXXX
  0x70, 0x80,  //   .XXX....X
  0x60, 0x00,  //   .XX......
  0xc0, 0x00,  //   XX.......
  0xc0, 0x00,  //   XX.......
  0xc0, 0x00,  //   XX.......
  0xc0, 0x00,  //   XX.......
  0xc0, 0x00,  //   XX.......
  0xe0, 0x00,  //   XXX......
  0x71, 0x80,  //   .XXX...XX
  0x3f, 0x80,  //   ..XXXXXXX
  0x1e, 0x00,  //   ...XXXX..
// char:44 "D"
  9, // width
  13, // height
  0x01, // left
  0x0d, // top
  11, // advance
  0xfc, 0x00,  //   XXXXXX...
  0xfe, 0x00,  //   XXXXXXX..
  0xc7, 0x00,  //   XX...XXX.
  0xc3, 0x80,  //   XX....XXX
  0xc1, 0x80,  //   XX.....XX
  0xc1, 0x80,  //   XX.....XX
  0xc1, 0x80,  //   XX.....XX
  0xc1, 0x80,  //   XX.....XX
  0xc1, 0x80,  //   XX.....XX
  0xc3, 0x00,  //   XX....XX.
  0xc7, 0x00,  //   XX...XXX.
  0xfe, 0x00,  //   XXXXXXX..
  0xfc, 0x00,  //   XXXXXX...
// char:45 "E"
  8, // width
  13, // height
  0x01, // left
  0x0d, // top
  10, // advance
  0xff,  //   XXXXXXXX
  0xff,  //   XXXXXXXX
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xfe,  //   XXXXXXX.
  0xfe,  //   XXXXXXX.
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xff,  //   XXXXXXXX
  0xff,  //   XXXXXXXX
// char:46 "F"
  8, // width
  13, // height
  0x01, // left
  0x0d, // top
  9, // advance
  0xff,  //   XXXXXXXX
  0xff,  //   XXXXXXXX
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xfc,  //   XXXXXX..
  0xfc,  //   XXXXXX..
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
// char:47 "G"
  10, // width
  13, // height
  0x01, // left
  0x0d, // top
  12, // advance
  0x1f, 0x00,  //   ...XXXXX..
  0x3f, 0x80,  //   ..XXXXXXX.
  0x70, 0x00,  //   .XXX......
  0x60, 0x00,  //   .XX.......
  0xc0, 0x00,  //   XX........
  0xc0, 0x00,  //   XX........
  0xc3, 0xc0,  //   XX....XXXX
  0xc3, 0xc0,  //   XX....XXXX
  0xc0, 0xc0,  //   XX......XX
  0xe0, 0xc0,  //   XXX.....XX
  0x70, 0xc0,  //   .XXX....XX
  0x3f, 0xc0,  //   ..XXXXXXXX
  0x1f, 0x00,  //   ...XXXXX..
// char:48 "H"
  10, // width
  13, // height
  0x01, // left
  0x0d, // top
  12, // advance
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xff, 0xc0,  //   XXXXXXXXXX
  0xff, 0xc0,  //   XXXXXXXXXX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
// char:49 "I"
  2, // width
  13, // height
  0x01, // left
  0x0d, // top
  5, // advance
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
// char:4a "J"
  7, // width
  13, // height
  0x01, // left
  0x0d, // top
  9, // advance
  0x06,  //   .....XX
  0x06,  //   .....XX
  0x06,  //   .....XX
  0x06,  //   .....XX
  0x06,  //   .....XX
  0x06,  //   .....XX
  0x06,  //   .....XX
  0x06,  //   .....XX
  0x06,  //   .....XX
  0x06,  //   .....XX
  0xc6,  //   XX...XX
  0xfc,  //   XXXXXX.
  0x78,  //   .XXXX..
// char:4b "K"
  9, // width
  13, // height
  0x01, // left
  0x0d, // top
  10, // advance
  0xc3, 0x00,  //   XX....XX.
  0xc6, 0x00,  //   XX...XX..
  0xc4, 0x00,  //   XX...X...
  0xcc, 0x00,  //   XX..XX...
  0xd8, 0x00,  //   XX.XX....
  0xd8, 0x00,  //   XX.XX....
  0xf8, 0x00,  //   XXXXX....
  0xec, 0x00,  //   XXX.XX...
  0xec, 0x00,  //   XXX.XX...
  0xc6, 0x00,  //   XX...XX..
  0xc2, 0x00,  //   XX....X..
  0xc3, 0x00,  //   XX....XX.
  0xc1, 0x80,  //   XX.....XX
// char:4c "L"
  7, // width
  13, // height
  0x01, // left
  0x0d, // top
  9, // advance
  0xc0,  //   XX.....
  0xc0,  //   XX.....
  0xc0,  //   XX.....
  0xc0,  //   XX.....
  0xc0,  //   XX.....
  0xc0,  //   XX.....
  0xc0,  //   XX.....
  0xc0,  //   XX.....
  0xc0,  //   XX.....
  0xc0,  //   XX.....
  0xc0,  //   XX.....
  0xfe,  //   XXXXXXX
  0xfe,  //   XXXXXXX
// char:4d "M"
  13, // width
  13, // height
  0x00, // left
  0x0d, // top
  13, // advance
  0x20, 0x20,  //   ..X.......X..
  0x30, 0x60,  //   ..XX.....XX..
  0x30, 0x60,  //   ..XX.....XX..
  0x70, 0x70,  //   .XXX.....XXX.
  0x78, 0xf0,  //   .XXXX...XXXX.
  0x78, 0xf0,  //   .XXXX...XXXX.
  0x6d, 0xb0,  //   .XX.XX.XX.XX.
  0x6d, 0xb0,  //   .XX.XX.XX.XX.
  0x6d, 0xb0,  //   .XX.XX.XX.XX.
  0x47, 0x10,  //   .X...XXX...X.
  0xc7, 0x18,  //   XX...XXX...XX
  0xc7, 0x18,  //   XX...XXX...XX
  0xc2, 0x18,  //   XX....X....XX
// char:4e "N"
  9, // width
  13, // height
  0x01, // left
  0x0d, // top
  11, // advance
  0x81, 0x80,  //   X......XX
  0xc1, 0x80,  //   XX.....XX
  0xe1, 0x80,  //   XXX....XX
  0xe1, 0x80,  //   XXX....XX
  0xf1, 0x80,  //   XXXX...XX
  0xd9, 0x80,  //   XX.XX..XX
  0xc9, 0x80,  //   XX..X..XX
  0xcd, 0x80,  //   XX..XX.XX
  0xc7, 0x80,  //   XX...XXXX
  0xc3, 0x80,  //   XX....XXX
  0xc3, 0x80,  //   XX....XXX
  0xc1, 0x80,  //   XX.....XX
  0xc0, 0x80,  //   XX......X
// char:4f "O"
  11, // width
  13, // height
  0x00, // left
  0x0d, // top
  12, // advance
  0x1f, 0x00,  //   ...XXXXX...
  0x3f, 0x80,  //   ..XXXXXXX..
  0x71, 0xc0,  //   .XXX...XXX.
  0xe0, 0xe0,  //   XXX.....XXX
  0xc0, 0x60,  //   XX.......XX
  0xc0, 0x60,  //   XX.......XX
  0xc0, 0x60,  //   XX.......XX
  0xc0, 0x60,  //   XX.......XX
  0xc0, 0x60,  //   XX.......XX
  0x60, 0xe0,  //   .XX.....XXX
  0x71, 0xc0,  //   .XXX...XXX.
  0x3f, 0x80,  //   ..XXXXXXX..
  0x1f, 0x00,  //   ...XXXXX...
// char:50 "P"
  8, // width
  13, // height
  0x01, // left
  0x0d, // top
  10, // advance
  0xfc,  //   XXXXXX..
  0xfe,  //   XXXXXXX.
  0xc7,  //   XX...XXX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc7,  //   XX...XXX
  0xfe,  //   XXXXXXX.
  0xfc,  //   XXXXXX..
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
// char:51 "Q"
  12, // width
  15, // height
  0x00, // left
  0x0d, // top
  12, // advance
  0x1f, 0x00,  //   ...XXXXX....
  0x3f, 0x80,  //   ..XXXXXXX...
  0x71, 0xc0,  //   .XXX...XXX..
  0xe0, 0xe0,  //   XXX.....XXX.
  0xc0, 0x60,  //   XX.......XX.
  0xc0, 0x60,  //   XX.......XX.
  0xc0, 0x60,  //   XX.......XX.
  0xc0, 0x60,  //   XX.......XX.
  0xc0, 0x60,  //   XX.......XX.
  0x60, 0xe0,  //   .XX.....XXX.
  0x71, 0xc0,  //   .XXX...XXX..
  0x3f, 0x80,  //   ..XXXXXXX...
  0x1f, 0x00,  //   ...XXXXX....
  0x01, 0xf0,  //   .......XXXXX
  0x00, 0x70,  //   .........XXX
// char:52 "R"
  9, // width
  13, // height
  0x01, // left
  0x0d, // top
  10, // advance
  0xfc, 0x00,  //   XXXXXX...
  0xfe, 0x00,  //   XXXXXXX..
  0xc7, 0x00,  //   XX...XXX.
  0xc3, 0x00,  //   XX....XX.
  0xc3, 0x00,  //   XX....XX.
  0xc7, 0x00,  //   XX...XXX.
  0xfe, 0x00,  //   XXXXXXX..
  0xfc, 0x00,  //   XXXXXX...
  0xcc, 0x00,  //   XX..XX...
  0xc6, 0x00,  //   XX...XX..
  0xc6, 0x00,  //   XX...XX..
  0xc3, 0x00,  //   XX....XX.
  0xc1, 0x80,  //   XX.....XX
// char:53 "S"
  7, // width
  13, // height
  0x01, // left
  0x0d, // top
  9, // advance
  0x7c,  //   .XXXXX.
  0xfc,  //   XXXXXX.
  0xc0,  //   XX.....
  0xc0,  //   XX.....
  0xc0,  //   XX.....
  0x70,  //   .XXX...
  0x3c,  //   ..XXXX.
  0x0e,  //   ....XXX
  0x06,  //   .....XX
  0x06,  //   .....XX
  0x0e,  //   ....XXX
  0xfc,  //   XXXXXX.
  0xf8,  //   XXXXX..
// char:54 "T"
  10, // width
  13, // height
  0x00, // left
  0x0d, // top
  10, // advance
  0xff, 0xc0,  //   XXXXXXXXXX
  0xff, 0xc0,  //   XXXXXXXXXX
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
// char:55 "U"
  10, // width
  13, // height
  0x01, // left
  0x0d, // top
  12, // advance
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xc0, 0xc0,  //   XX......XX
  0xe1, 0xc0,  //   XXX....XXX
  0x7f, 0x80,  //   .XXXXXXXX.
  0x3f, 0x00,  //   ..XXXXXX..
// char:56 "V"
  11, // width
  13, // height
  0x00, // left
  0x0d, // top
  11, // advance
  0xc0, 0x60,  //   XX.......XX
  0x60, 0xc0,  //   .XX.....XX.
  0x60, 0xc0,  //   .XX.....XX.
  0x60, 0xc0,  //   .XX.....XX.
  0x31, 0x80,  //   ..XX...XX..
  0x31, 0x80,  //   ..XX...XX..
  0x3b, 0x80,  //   ..XXX.XXX..
  0x1b, 0x00,  //   ...XX.XX...
  0x1b, 0x00,  //   ...XX.XX...
  0x0e, 0x00,  //   ....XXX....
  0x0e, 0x00,  //   ....XXX....
  0x0e, 0x00,  //   ....XXX....
  0x04, 0x00,  //   .....X.....
// char:57 "W"
  15, // width
  13, // height
  0x00, // left
  0x0d, // top
  15, // advance
  0xc1, 0x06,  //   XX.....X.....XX
  0xc1, 0x06,  //   XX.....X.....XX
  0x63, 0x8c,  //   .XX...XXX...XX.
  0x63, 0x8c,  //   .XX...XXX...XX.
  0x62, 0x8c,  //   .XX...X.X...XX.
  0x36, 0xd8,  //   ..XX.XX.XX.XX..
  0x36, 0xd8,  //   ..XX.XX.XX.XX..
  0x36, 0xd8,  //   ..XX.XX.XX.XX..
  0x14, 0x50,  //   ...X.X...X.X...
  0x1c, 0x70,  //   ...XXX...XXX...
  0x1c, 0x70,  //   ...XXX...XXX...
  0x08, 0x20,  //   ....X.....X....
  0x08, 0x20,  //   ....X.....X....
// char:58 "X"
  10, // width
  13, // height
  0x00, // left
  0x0d, // top
  10, // advance
  0xc0, 0xc0,  //   XX......XX
  0x61, 0x80,  //   .XX....XX.
  0x33, 0x00,  //   ..XX..XX..
  0x33, 0x00,  //   ..XX..XX..
  0x1e, 0x00,  //   ...XXXX...
  0x1e, 0x00,  //   ...XXXX...
  0x0c, 0x00,  //   ....XX....
  0x1e, 0x00,  //   ...XXXX...
  0x1e, 0x00,  //   ...XXXX...
  0x33, 0x00,  //   ..XX..XX..
  0x33, 0x00,  //   ..XX..XX..
  0x61, 0x80,  //   .XX....XX.
  0xc0, 0xc0,  //   XX......XX
// char:59 "Y"
  10, // width
  13, // height
  0x00, // left
  0x0d, // top
  10, // advance
  0xc0, 0xc0,  //   XX......XX
  0x61, 0x80,  //   .XX....XX.
  0x61, 0x80,  //   .XX....XX.
  0x33, 0x00,  //   ..XX..XX..
  0x12, 0x00,  //   ...X..X...
  0x1e, 0x00,  //   ...XXXX...
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
  0x0c, 0x00,  //   ....XX....
// char:5a "Z"
  8, // width
  13, // height
  0x01, // left
  0x0d, // top
  10, // advance
  0xff,  //   XXXXXXXX
  0xfe,  //   XXXXXXX.
  0x06,  //   .....XX.
  0x04,  //   .....X..
  0x0c,  //   ....XX..
  0x08,  //   ....X...
  0x18,  //   ...XX...
  0x10,  //   ...X....
  0x30,  //   ..XX....
  0x20,  //   ..X.....
  0x60,  //   .XX.....
  0x7f,  //   .XXXXXXX
  0xff,  //   XXXXXXXX
// char:5b "["
  4, // width
  17, // height
  0x02, // left
  0x0d, // top
  7, // advance
  0xf0,  //   XXXX
  0xf0,  //   XXXX
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xf0,  //   XXXX
  0xf0,  //   XXXX
// char:5c "\"
  7, // width
  13, // height
  0xffffffff, // left
  0x0d, // top
  6, // advance
  0xc0,  //   XX.....
  0x60,  //   .XX....
  0x60,  //   .XX....
  0x60,  //   .XX....
  0x30,  //   ..XX...
  0x30,  //   ..XX...
  0x38,  //   ..XXX..
  0x18,  //   ...XX..
  0x18,  //   ...XX..
  0x0c,  //   ....XX.
  0x0c,  //   ....XX.
  0x0c,  //   ....XX.
  0x06,  //   .....XX
// char:5d "]"
  4, // width
  17, // height
  0x01, // left
  0x0d, // top
  7, // advance
  0xf0,  //   XXXX
  0xf0,  //   XXXX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0x30,  //   ..XX
  0xf0,  //   XXXX
  0xf0,  //   XXXX
// char:5e "^"
  7, // width
  5, // height
  0x01, // left
  0x0d, // top
  9, // advance
  0x10,  //   ...X...
  0x28,  //   ..X.X..
  0x6c,  //   .XX.XX.
  0x44,  //   .X...X.
  0x82,  //   X.....X
// char:5f "_"
  9, // width
  1, // height
  0x00, // left
  0xff, // top
  9, // advance
  0xff, 0x80,  //   XXXXXXXXX
// char:60 "`"
  3, // width
  3, // height
  0x03, // left
  0x0e, // top
  9, // advance
  0xc0,  //   XX.
  0x60,  //   .XX
  0x20,  //   ..X
// char:61 "a"
  7, // width
  9, // height
  0x01, // left
  0x09, // top
  9, // advance
  0x7c,  //   .XXXXX.
  0x7e,  //   .XXXXXX
  0x06,  //   .....XX
  0x3e,  //   ..XXXXX
  0x7e,  //   .XXXXXX
  0xc6,  //   XX...XX
  0xc6,  //   XX...XX
  0xfe,  //   XXXXXXX
  0x7e,  //   .XXXXXX
// char:62 "b"
  8, // width
  13, // height
  0x01, // left
  0x0d, // top
  10, // advance
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xfc,  //   XXXXXX..
  0xfe,  //   XXXXXXX.
  0xc7,  //   XX...XXX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc7,  //   XX...XXX
  0xfe,  //   XXXXXXX.
  0xbc,  //   X.XXXX..
// char:63 "c"
  7, // width
  9, // height
  0x01, // left
  0x09, // top
  9, // advance
  0x3c,  //   ..XXXX.
  0x7e,  //   .XXXXXX
  0xe4,  //   XXX..X.
  0xc0,  //   XX.....
  0xc0,  //   XX.....
  0xc0,  //   XX.....
  0xe4,  //   XXX..X.
  0x7e,  //   .XXXXXX
  0x3c,  //   ..XXXX.
// char:64 "d"
  8, // width
  13, // height
  0x01, // left
  0x0d, // top
  10, // advance
  0x03,  //   ......XX
  0x03,  //   ......XX
  0x03,  //   ......XX
  0x03,  //   ......XX
  0x3f,  //   ..XXXXXX
  0x7f,  //   .XXXXXXX
  0xe3,  //   XXX...XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xe3,  //   XXX...XX
  0x7f,  //   .XXXXXXX
  0x3f,  //   ..XXXXXX
// char:65 "e"
  8, // width
  9, // height
  0x01, // left
  0x09, // top
  10, // advance
  0x3c,  //   ..XXXX..
  0x7e,  //   .XXXXXX.
  0xc3,  //   XX....XX
  0xff,  //   XXXXXXXX
  0xff,  //   XXXXXXXX
  0xc0,  //   XX......
  0xe1,  //   XXX....X
  0x7f,  //   .XXXXXXX
  0x3e,  //   ..XXXXX.
// char:66 "f"
  6, // width
  13, // height
  0x01, // left
  0x0d, // top
  7, // advance
  0x1c,  //   ...XXX
  0x3c,  //   ..XXXX
  0x60,  //   .XX...
  0x60,  //   .XX...
  0xf8,  //   XXXXX.
  0xf8,  //   XXXXX.
  0x60,  //   .XX...
  0x60,  //   .XX...
  0x60,  //   .XX...
  0x60,  //   .XX...
  0x60,  //   .XX...
  0x60,  //   .XX...
  0x60,  //   .XX...
// char:67 "g"
  8, // width
  14, // height
  0x01, // left
  0x0a, // top
  9, // advance
  0x02,  //   ......X.
  0x7e,  //   .XXXXXX.
  0xfc,  //   XXXXXX..
  0xc6,  //   XX...XX.
  0xc6,  //   XX...XX.
  0xc6,  //   XX...XX.
  0x7c,  //   .XXXXX..
  0x78,  //   .XXXX...
  0xc0,  //   XX......
  0xfe,  //   XXXXXXX.
  0xff,  //   XXXXXXXX
  0x43,  //   .X....XX
  0xff,  //   XXXXXXXX
  0x7c,  //   .XXXXX..
// char:68 "h"
  8, // width
  13, // height
  0x01, // left
  0x0d, // top
  10, // advance
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xde,  //   XX.XXXX.
  0xff,  //   XXXXXXXX
  0xe7,  //   XXX..XXX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
// char:69 "i"
  3, // width
  13, // height
  0x01, // left
  0x0d, // top
  5, // advance
  0x60,  //   .XX
  0x60,  //   .XX
  0x00,  //   ...
  0x00,  //   ...
  0xe0,  //   XXX
  0xe0,  //   XXX
  0x60,  //   .XX
  0x60,  //   .XX
  0x60,  //   .XX
  0x60,  //   .XX
  0x60,  //   .XX
  0x60,  //   .XX
  0x60,  //   .XX
// char:6a "j"
  5, // width
  17, // height
  0x00, // left
  0x0d, // top
  7, // advance
  0x18,  //   ...XX
  0x18,  //   ...XX
  0x00,  //   .....
  0x00,  //   .....
  0x78,  //   .XXXX
  0x78,  //   .XXXX
  0x18,  //   ...XX
  0x18,  //   ...XX
  0x18,  //   ...XX
  0x18,  //   ...XX
  0x18,  //   ...XX
  0x18,  //   ...XX
  0x18,  //   ...XX
  0x18,  //   ...XX
  0x38,  //   ..XXX
  0xf0,  //   XXXX.
  0xe0,  //   XXX..
// char:6b "k"
  8, // width
  13, // height
  0x01, // left
  0x0d, // top
  9, // advance
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc6,  //   XX...XX.
  0xcc,  //   XX..XX..
  0xd8,  //   XX.XX...
  0xf0,  //   XXXX....
  0xf8,  //   XXXXX...
  0xcc,  //   XX..XX..
  0xc4,  //   XX...X..
  0xc6,  //   XX...XX.
  0xc3,  //   XX....XX
// char:6c "l"
  4, // width
  13, // height
  0x01, // left
  0x0d, // top
  5, // advance
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xc0,  //   XX..
  0xf0,  //   XXXX
  0x70,  //   .XXX
// char:6d "m"
  12, // width
  9, // height
  0x01, // left
  0x09, // top
  14, // advance
  0xbd, 0xe0,  //   X.XXXX.XXXX.
  0xff, 0xf0,  //   XXXXXXXXXXXX
  0xc6, 0x30,  //   XX...XX...XX
  0xc6, 0x30,  //   XX...XX...XX
  0xc6, 0x30,  //   XX...XX...XX
  0xc6, 0x30,  //   XX...XX...XX
  0xc6, 0x30,  //   XX...XX...XX
  0xc6, 0x30,  //   XX...XX...XX
  0xc6, 0x30,  //   XX...XX...XX
// char:6e "n"
  8, // width
  9, // height
  0x01, // left
  0x09, // top
  10, // advance
  0x9e,  //   X..XXXX.
  0xff,  //   XXXXXXXX
  0xe3,  //   XXX...XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
// char:6f "o"
  9, // width
  9, // height
  0x00, // left
  0x09, // top
  10, // advance
  0x3e, 0x00,  //   ..XXXXX..
  0x7f, 0x00,  //   .XXXXXXX.
  0xe3, 0x80,  //   XXX...XXX
  0xc1, 0x80,  //   XX.....XX
  0xc1, 0x80,  //   XX.....XX
  0xc1, 0x80,  //   XX.....XX
  0xe3, 0x80,  //   XXX...XXX
  0x7f, 0x00,  //   .XXXXXXX.
  0x3e, 0x00,  //   ..XXXXX..
// char:70 "p"
  8, // width
  13, // height
  0x01, // left
  0x09, // top
  10, // advance
  0xfc,  //   XXXXXX..
  0xfe,  //   XXXXXXX.
  0xc7,  //   XX...XXX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc7,  //   XX...XXX
  0xfe,  //   XXXXXXX.
  0xfc,  //   XXXXXX..
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
  0xc0,  //   XX......
// char:71 "q"
  8, // width
  13, // height
  0x01, // left
  0x09, // top
  10, // advance
  0x3f,  //   ..XXXXXX
  0x7f,  //   .XXXXXXX
  0xe3,  //   XXX...XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xe3,  //   XXX...XX
  0x7f,  //   .XXXXXXX
  0x3f,  //   ..XXXXXX
  0x03,  //   ......XX
  0x03,  //   ......XX
  0x03,  //   ......XX
  0x03,  //   ......XX
// char:72 "r"
  6, // width
  9, // height
  0x01, // left
  0x09, // top
  7, // advance
  0xdc,  //   XX.XXX
  0xfc,  //   XXXXXX
  0xe0,  //   XXX...
  0xc0,  //   XX....
  0xc0,  //   XX....
  0xc0,  //   XX....
  0xc0,  //   XX....
  0xc0,  //   XX....
  0xc0,  //   XX....
// char:73 "s"
  6, // width
  9, // height
  0x00, // left
  0x09, // top
  7, // advance
  0x7c,  //   .XXXXX
  0xfc,  //   XXXXXX
  0xc0,  //   XX....
  0xe0,  //   XXX...
  0x38,  //   ..XXX.
  0x0c,  //   ....XX
  0x0c,  //   ....XX
  0xfc,  //   XXXXXX
  0xf8,  //   XXXXX.
// char:74 "t"
  6, // width
  12, // height
  0x01, // left
  0x0c, // top
  7, // advance
  0x20,  //   ..X...
  0x60,  //   .XX...
  0x60,  //   .XX...
  0xf8,  //   XXXXX.
  0xf8,  //   XXXXX.
  0x60,  //   .XX...
  0x60,  //   .XX...
  0x60,  //   .XX...
  0x60,  //   .XX...
  0x60,  //   .XX...
  0x7c,  //   .XXXXX
  0x3c,  //   ..XXXX
// char:75 "u"
  8, // width
  9, // height
  0x01, // left
  0x09, // top
  10, // advance
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc3,  //   XX....XX
  0xc7,  //   XX...XXX
  0xff,  //   XXXXXXXX
  0x7b,  //   .XXXX.XX
// char:76 "v"
  9, // width
  9, // height
  0x00, // left
  0x09, // top
  9, // advance
  0xc1, 0x80,  //   XX.....XX
  0x63, 0x00,  //   .XX...XX.
  0x63, 0x00,  //   .XX...XX.
  0x22, 0x00,  //   ..X...X..
  0x36, 0x00,  //   ..XX.XX..
  0x36, 0x00,  //   ..XX.XX..
  0x1c, 0x00,  //   ...XXX...
  0x1c, 0x00,  //   ...XXX...
  0x08, 0x00,  //   ....X....
// char:77 "w"
  13, // width
  9, // height
  0x00, // left
  0x09, // top
  13, // advance
  0xc2, 0x18,  //   XX....X....XX
  0xc7, 0x18,  //   XX...XXX...XX
  0x67, 0x30,  //   .XX..XXX..XX.
  0x65, 0x30,  //   .XX..X.X..XX.
  0x6d, 0xb0,  //   .XX.XX.XX.XX.
  0x28, 0xa0,  //   ..X.X...X.X..
  0x38, 0xe0,  //   ..XXX...XXX..
  0x38, 0xe0,  //   ..XXX...XXX..
  0x10, 0x40,  //   ...X.....X...
// char:78 "x"
  9, // width
  9, // height
  0x00, // left
  0x09, // top
  9, // advance
  0xc1, 0x80,  //   XX.....XX
  0x63, 0x00,  //   .XX...XX.
  0x36, 0x00,  //   ..XX.XX..
  0x1c, 0x00,  //   ...XXX...
  0x1c, 0x00,  //   ...XXX...
  0x1c, 0x00,  //   ...XXX...
  0x36, 0x00,  //   ..XX.XX..
  0x63, 0x00,  //   .XX...XX.
  0xc1, 0x80,  //   XX.....XX
// char:79 "y"
  9, // width
  13, // height
  0x00, // left
  0x09, // top
  9, // advance
  0xc1, 0x80,  //   XX.....XX
  0x63, 0x00,  //   .XX...XX.
  0x63, 0x00,  //   .XX...XX.
  0x23, 0x00,  //   ..X...XX.
  0x36, 0x00,  //   ..XX.XX..
  0x16, 0x00,  //   ...X.XX..
  0x1e, 0x00,  //   ...XXXX..
  0x1c, 0x00,  //   ...XXX...
  0x0c, 0x00,  //   ....XX...
  0x08, 0x00,  //   ....X....
  0x18, 0x00,  //   ...XX....
  0x78, 0x00,  //   .XXXX....
  0x60, 0x00,  //   .XX......
// char:7a "z"
  8, // width
  9, // height
  0x00, // left
  0x09, // top
  9, // advance
  0xff,  //   XXXXXXXX
  0xfe,  //   XXXXXXX.
  0x06,  //   .....XX.
  0x0c,  //   ....XX..
  0x18,  //   ...XX...
  0x18,  //   ...XX...
  0x30,  //   ..XX....
  0x7f,  //   .XXXXXXX
  0xff,  //   XXXXXXXX
// char:7b "{"
  6, // width
  17, // height
  0x01, // left
  0x0d, // top
  7, // advance
  0x3c,  //   ..XXXX
  0x7c,  //   .XXXXX
  0x60,  //   .XX...
  0x60,  //   .XX...
  0x20,  //   ..X...
  0x30,  //   ..XX..
  0x30,  //   ..XX..
  0x60,  //   .XX...
  0xc0,  //   XX....
  0x70,  //   .XXX..
  0x30,  //   ..XX..
  0x30,  //   ..XX..
  0x20,  //   ..X...
  0x60,  //   .XX...
  0x70,  //   .XXX..
  0x7c,  //   .XXXXX
  0x3c,  //   ..XXXX
// char:7c "|"
  2, // width
  14, // height
  0x04, // left
  0x0c, // top
  9, // advance
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
  0xc0,  //   XX
// char:7d "}"
  6, // width
  17, // height
  0x00, // left
  0x0d, // top
  7, // advance
  0xf0,  //   XXXX..
  0xf8,  //   XXXXX.
  0x18,  //   ...XX.
  0x18,  //   ...XX.
  0x10,  //   ...X..
  0x30,  //   ..XX..
  0x30,  //   ..XX..
  0x18,  //   ...XX.
  0x0c,  //   ....XX
  0x38,  //   ..XXX.
  0x30,  //   ..XX..
  0x30,  //   ..XX..
  0x10,  //   ...X..
  0x18,  //   ...XX.
  0x38,  //   ..XXX.
  0xf8,  //   XXXXX.
  0xf0,  //   XXXX..
// char:7e "~"
  7, // width
  3, // height
  0x01, // left
  0x08, // top
  9, // advance
  0x72,  //   .XXX..X
  0xfe,  //   XXXXXXX
  0x9c,  //   X..XXX.
// char:7f ""
  7, // width
  7, // height
  0x01, // left
  0x0a, // top
  9, // advance
  0xfe,  //   XXXXXXX
  0x82,  //   X.....X
  0x82,  //   X.....X
  0x82,  //   X.....X
  0x82,  //   X.....X
  0x82,  //   X.....X
  0xfe,  //   XXXXXXX
//
};
static uint16_t glyphOffsets[] = {
  0x0000, // char 21 - ! offset
  0x0012, // char 22 - " offset
  0x001a, // char 23 - # offset
  0x0039, // char 24 - $ offset
  0x004e, // char 25 - % offset
  0x006d, // char 26 - & offset
  0x008c, // char 27 - ' offset
  0x0094, // char 28 - ( offset
  0x00aa, // char 29 - ) offset
  0x00c0, // char 2a - * offset
  0x00ca, // char 2b - + offset
  0x00d7, // char 2c - , offset
  0x00e2, // char 2d - - offset
  0x00e9, // char 2e - . offset
  0x00f1, // char 2f - / offset
  0x0103, // char 30 - 0 offset
  0x0115, // char 31 - 1 offset
  0x0127, // char 32 - 2 offset
  0x0139, // char 33 - 3 offset
  0x014b, // char 34 - 4 offset
  0x016a, // char 35 - 5 offset
  0x017c, // char 36 - 6 offset
  0x018e, // char 37 - 7 offset
  0x01a0, // char 38 - 8 offset
  0x01b2, // char 39 - 9 offset
  0x01c4, // char 3a - : offset
  0x01d2, // char 3b - ; offset
  0x01e3, // char 3c - < offset
  0x01ef, // char 3d - = offset
  0x01fa, // char 3e - > offset
  0x0206, // char 3f - ? offset
  0x0218, // char 40 - @ offset
  0x0237, // char 41 - A offset
  0x0256, // char 42 - B offset
  0x0268, // char 43 - C offset
  0x0287, // char 44 - D offset
  0x02a6, // char 45 - E offset
  0x02b8, // char 46 - F offset
  0x02ca, // char 47 - G offset
  0x02e9, // char 48 - H offset
  0x0308, // char 49 - I offset
  0x031a, // char 4a - J offset
  0x032c, // char 4b - K offset
  0x034b, // char 4c - L offset
  0x035d, // char 4d - M offset
  0x037c, // char 4e - N offset
  0x039b, // char 4f - O offset
  0x03ba, // char 50 - P offset
  0x03cc, // char 51 - Q offset
  0x03ef, // char 52 - R offset
  0x040e, // char 53 - S offset
  0x0420, // char 54 - T offset
  0x043f, // char 55 - U offset
  0x045e, // char 56 - V offset
  0x047d, // char 57 - W offset
  0x049c, // char 58 - X offset
  0x04bb, // char 59 - Y offset
  0x04da, // char 5a - Z offset
  0x04ec, // char 5b - [ offset
  0x0502, // char 5c - \ offset
  0x0514, // char 5d - ] offset
  0x052a, // char 5e - ^ offset
  0x0534, // char 5f - _ offset
  0x053b, // char 60 - ` offset
  0x0543, // char 61 - a offset
  0x0551, // char 62 - b offset
  0x0563, // char 63 - c offset
  0x0571, // char 64 - d offset
  0x0583, // char 65 - e offset
  0x0591, // char 66 - f offset
  0x05a3, // char 67 - g offset
  0x05b6, // char 68 - h offset
  0x05c8, // char 69 - i offset
  0x05da, // char 6a - j offset
  0x05f0, // char 6b - k offset
  0x0602, // char 6c - l offset
  0x0614, // char 6d - m offset
  0x062b, // char 6e - n offset
  0x0639, // char 6f - o offset
  0x0650, // char 70 - p offset
  0x0662, // char 71 - q offset
  0x0674, // char 72 - r offset
  0x0682, // char 73 - s offset
  0x0690, // char 74 - t offset
  0x06a1, // char 75 - u offset
  0x06af, // char 76 - v offset
  0x06c6, // char 77 - w offset
  0x06dd, // char 78 - x offset
  0x06f4, // char 79 - y offset
  0x0713, // char 7a - z offset
  0x0721, // char 7b - { offset
  0x0737, // char 7c - | offset
  0x074a, // char 7d - } offset
  0x0760, // char 7e - ~ offset
  0x0768, // char 7f -  offset
};
font_t font18 = {
  .fixedWidth     = 0,
  .height         = 18,
  .spaceWidth     = 4,
  .firstChar      = 0x21,
  .lastChar       = 0x7f,
  .glyphsBase     = glyphsBase,
  .glyphOffsets   = glyphOffsets
};
