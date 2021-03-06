#include "font.h"

static uint8_t glyphsBase[] = {
// char:21 "!"
  11, // width
  53, // height
  0x08, // left
  0x34, // top
  26, // advance
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x7f, 0x80,  //   .XXXXXXXX..
  0x3f, 0x00,  //   ..XXXXXX...
  0x3f, 0x00,  //   ..XXXXXX...
  0x3f, 0x00,  //   ..XXXXXX...
  0x3f, 0x00,  //   ..XXXXXX...
  0x3f, 0x00,  //   ..XXXXXX...
  0x3f, 0x00,  //   ..XXXXXX...
  0x3f, 0x00,  //   ..XXXXXX...
  0x3f, 0x00,  //   ..XXXXXX...
  0x1e, 0x00,  //   ...XXXX....
  0x1e, 0x00,  //   ...XXXX....
  0x1e, 0x00,  //   ...XXXX....
  0x1e, 0x00,  //   ...XXXX....
  0x1e, 0x00,  //   ...XXXX....
  0x1e, 0x00,  //   ...XXXX....
  0x0c, 0x00,  //   ....XX.....
  0x0c, 0x00,  //   ....XX.....
  0x0c, 0x00,  //   ....XX.....
  0x00, 0x00,  //   ...........
  0x00, 0x00,  //   ...........
  0x00, 0x00,  //   ...........
  0x00, 0x00,  //   ...........
  0x1f, 0x00,  //   ...XXXXX...
  0x3f, 0x80,  //   ..XXXXXXX..
  0x7f, 0xc0,  //   .XXXXXXXXX.
  0xff, 0xe0,  //   XXXXXXXXXXX
  0xff, 0xe0,  //   XXXXXXXXXXX
  0xff, 0xe0,  //   XXXXXXXXXXX
  0xff, 0xe0,  //   XXXXXXXXXXX
  0xff, 0xe0,  //   XXXXXXXXXXX
  0x7f, 0xc0,  //   .XXXXXXXXX.
  0x3f, 0x80,  //   ..XXXXXXX..
  0x1f, 0x00,  //   ...XXXXX...
// char:22 """
  17, // width
  13, // height
  0x03, // left
  0x34, // top
  23, // advance
  0xfc, 0x1f, 0x80,  //   XXXXXX.....XXXXXX
  0xfc, 0x1f, 0x80,  //   XXXXXX.....XXXXXX
  0xfc, 0x1f, 0x80,  //   XXXXXX.....XXXXXX
  0xfc, 0x1f, 0x80,  //   XXXXXX.....XXXXXX
  0xfc, 0x1f, 0x80,  //   XXXXXX.....XXXXXX
  0xfc, 0x1f, 0x80,  //   XXXXXX.....XXXXXX
  0x7c, 0x0f, 0x80,  //   .XXXXX......XXXXX
  0x78, 0x0f, 0x00,  //   .XXXX.......XXXX.
  0x78, 0x0f, 0x00,  //   .XXXX.......XXXX.
  0x78, 0x0f, 0x00,  //   .XXXX.......XXXX.
  0x78, 0x0f, 0x00,  //   .XXXX.......XXXX.
  0x78, 0x0f, 0x00,  //   .XXXX.......XXXX.
  0x78, 0x0f, 0x00,  //   .XXXX.......XXXX.
// char:23 "#"
  37, // width
  53, // height
  0x01, // left
  0x34, // top
  38, // advance
  0x00, 0x03, 0xe0, 0x03, 0xc0,  //   ..............XXXXX...........XXXX...
  0x00, 0x03, 0xe0, 0x03, 0xc0,  //   ..............XXXXX...........XXXX...
  0x00, 0x07, 0xc0, 0x07, 0x80,  //   .............XXXXX...........XXXX....
  0x00, 0x07, 0xc0, 0x07, 0x80,  //   .............XXXXX...........XXXX....
  0x00, 0x07, 0xc0, 0x07, 0x80,  //   .............XXXXX...........XXXX....
  0x00, 0x07, 0xc0, 0x07, 0x80,  //   .............XXXXX...........XXXX....
  0x00, 0x0f, 0x80, 0x0f, 0x00,  //   ............XXXXX...........XXXX.....
  0x00, 0x0f, 0x80, 0x0f, 0x00,  //   ............XXXXX...........XXXX.....
  0x00, 0x0f, 0x80, 0x0f, 0x00,  //   ............XXXXX...........XXXX.....
  0x00, 0x0f, 0x80, 0x1e, 0x00,  //   ............XXXXX..........XXXX......
  0x00, 0x1f, 0x00, 0x1e, 0x00,  //   ...........XXXXX...........XXXX......
  0x00, 0x1f, 0x00, 0x1e, 0x00,  //   ...........XXXXX...........XXXX......
  0x00, 0x1f, 0x00, 0x1e, 0x00,  //   ...........XXXXX...........XXXX......
  0x00, 0x1f, 0x00, 0x3c, 0x00,  //   ...........XXXXX..........XXXX.......
  0x0f, 0xff, 0xff, 0xff, 0xf8,  //   ....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  0x0f, 0xff, 0xff, 0xff, 0xf8,  //   ....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  0x0f, 0xff, 0xff, 0xff, 0xf8,  //   ....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  0x0f, 0xff, 0xff, 0xff, 0xf8,  //   ....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  0x0f, 0xff, 0xff, 0xff, 0xf8,  //   ....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  0x00, 0x7c, 0x00, 0x78, 0x00,  //   .........XXXXX...........XXXX........
  0x00, 0x7c, 0x00, 0x78, 0x00,  //   .........XXXXX...........XXXX........
  0x00, 0x7c, 0x00, 0xf0, 0x00,  //   .........XXXXX..........XXXX.........
  0x00, 0xf8, 0x00, 0xf0, 0x00,  //   ........XXXXX...........XXXX.........
  0x00, 0xf8, 0x00, 0xf0, 0x00,  //   ........XXXXX...........XXXX.........
  0x00, 0xf8, 0x00, 0xe0, 0x00,  //   ........XXXXX...........XXX..........
  0x00, 0xf8, 0x01, 0xe0, 0x00,  //   ........XXXXX..........XXXX..........
  0x01, 0xf0, 0x01, 0xe0, 0x00,  //   .......XXXXX...........XXXX..........
  0x01, 0xf0, 0x01, 0xe0, 0x00,  //   .......XXXXX...........XXXX..........
  0x01, 0xf0, 0x03, 0xc0, 0x00,  //   .......XXXXX..........XXXX...........
  0x01, 0xf0, 0x03, 0xc0, 0x00,  //   .......XXXXX..........XXXX...........
  0x01, 0xe0, 0x03, 0xc0, 0x00,  //   .......XXXX...........XXXX...........
  0x03, 0xe0, 0x03, 0x80, 0x00,  //   ......XXXXX...........XXX............
  0xff, 0xff, 0xff, 0xff, 0x00,  //   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.....
  0xff, 0xff, 0xff, 0xff, 0x00,  //   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.....
  0xff, 0xff, 0xff, 0xff, 0x00,  //   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.....
  0xff, 0xff, 0xff, 0xff, 0x00,  //   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.....
  0xff, 0xff, 0xff, 0xff, 0x00,  //   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.....
  0x07, 0xc0, 0x0f, 0x00, 0x00,  //   .....XXXXX..........XXXX.............
  0x07, 0xc0, 0x0f, 0x00, 0x00,  //   .....XXXXX..........XXXX.............
  0x0f, 0x80, 0x0f, 0x00, 0x00,  //   ....XXXXX...........XXXX.............
  0x0f, 0x80, 0x1e, 0x00, 0x00,  //   ....XXXXX..........XXXX..............
  0x0f, 0x80, 0x1e, 0x00, 0x00,  //   ....XXXXX..........XXXX..............
  0x0f, 0x80, 0x1e, 0x00, 0x00,  //   ....XXXXX..........XXXX..............
  0x1f, 0x00, 0x3c, 0x00, 0x00,  //   ...XXXXX..........XXXX...............
  0x1f, 0x00, 0x3c, 0x00, 0x00,  //   ...XXXXX..........XXXX...............
  0x1f, 0x00, 0x3c, 0x00, 0x00,  //   ...XXXXX..........XXXX...............
  0x1f, 0x00, 0x3c, 0x00, 0x00,  //   ...XXXXX..........XXXX...............
  0x3e, 0x00, 0x78, 0x00, 0x00,  //   ..XXXXX..........XXXX................
  0x3e, 0x00, 0x78, 0x00, 0x00,  //   ..XXXXX..........XXXX................
  0x3e, 0x00, 0x78, 0x00, 0x00,  //   ..XXXXX..........XXXX................
  0x3e, 0x00, 0x78, 0x00, 0x00,  //   ..XXXXX..........XXXX................
  0x7c, 0x00, 0xf0, 0x00, 0x00,  //   .XXXXX..........XXXX.................
  0x7c, 0x00, 0xf0, 0x00, 0x00,  //   .XXXXX..........XXXX.................
// char:24 "$"
  29, // width
  66, // height
  0x05, // left
  0x39, // top
  38, // advance
  0x00, 0x1f, 0x00, 0x00,  //   ...........XXXXX.............
  0x00, 0x1f, 0x00, 0x00,  //   ...........XXXXX.............
  0x00, 0x1f, 0x00, 0x00,  //   ...........XXXXX.............
  0x00, 0x1f, 0x00, 0x00,  //   ...........XXXXX.............
  0x00, 0x1f, 0x00, 0x00,  //   ...........XXXXX.............
  0x00, 0x7f, 0xf0, 0x00,  //   .........XXXXXXXXXXX.........
  0x01, 0xff, 0xff, 0x00,  //   .......XXXXXXXXXXXXXXXXX.....
  0x07, 0xff, 0xff, 0xc0,  //   .....XXXXXXXXXXXXXXXXXXXXX...
  0x0f, 0xff, 0xff, 0xc0,  //   ....XXXXXXXXXXXXXXXXXXXXXX...
  0x1f, 0xff, 0xff, 0x80,  //   ...XXXXXXXXXXXXXXXXXXXXXX....
  0x3f, 0xff, 0xff, 0x80,  //   ..XXXXXXXXXXXXXXXXXXXXXXX....
  0x3f, 0xe0, 0x3f, 0x80,  //   ..XXXXXXXXX.......XXXXXXX....
  0x7f, 0xc0, 0x07, 0x00,  //   .XXXXXXXXX...........XXX.....
  0x7f, 0x80, 0x01, 0x00,  //   .XXXXXXXX..............X.....
  0xff, 0x00, 0x00, 0x00,  //   XXXXXXXX.....................
  0xfe, 0x00, 0x00, 0x00,  //   XXXXXXX......................
  0xfe, 0x00, 0x00, 0x00,  //   XXXXXXX......................
  0xfe, 0x00, 0x00, 0x00,  //   XXXXXXX......................
  0xfe, 0x00, 0x00, 0x00,  //   XXXXXXX......................
  0xfe, 0x00, 0x00, 0x00,  //   XXXXXXX......................
  0xfe, 0x00, 0x00, 0x00,  //   XXXXXXX......................
  0xff, 0x00, 0x00, 0x00,  //   XXXXXXXX.....................
  0xff, 0x00, 0x00, 0x00,  //   XXXXXXXX.....................
  0x7f, 0x80, 0x00, 0x00,  //   .XXXXXXXX....................
  0x7f, 0xc0, 0x00, 0x00,  //   .XXXXXXXXX...................
  0x3f, 0xe0, 0x00, 0x00,  //   ..XXXXXXXXX..................
  0x3f, 0xf8, 0x00, 0x00,  //   ..XXXXXXXXXXX................
  0x1f, 0xfe, 0x00, 0x00,  //   ...XXXXXXXXXXXX..............
  0x0f, 0xff, 0x80, 0x00,  //   ....XXXXXXXXXXXXX............
  0x07, 0xff, 0xe0, 0x00,  //   .....XXXXXXXXXXXXXX..........
  0x03, 0xff, 0xf8, 0x00,  //   ......XXXXXXXXXXXXXXX........
  0x00, 0xff, 0xfc, 0x00,  //   ........XXXXXXXXXXXXXX.......
  0x00, 0x3f, 0xff, 0x00,  //   ..........XXXXXXXXXXXXXX.....
  0x00, 0x0f, 0xff, 0x80,  //   ............XXXXXXXXXXXXX....
  0x00, 0x03, 0xff, 0xc0,  //   ..............XXXXXXXXXXXX...
  0x00, 0x00, 0xff, 0xc0,  //   ................XXXXXXXXXX...
  0x00, 0x00, 0x3f, 0xe0,  //   ..................XXXXXXXXX..
  0x00, 0x00, 0x1f, 0xf0,  //   ...................XXXXXXXXX.
  0x00, 0x00, 0x0f, 0xf0,  //   ....................XXXXXXXX.
  0x00, 0x00, 0x07, 0xf0,  //   .....................XXXXXXX.
  0x00, 0x00, 0x07, 0xf8,  //   .....................XXXXXXXX
  0x00, 0x00, 0x03, 0xf8,  //   ......................XXXXXXX
  0x00, 0x00, 0x03, 0xf8,  //   ......................XXXXXXX
  0x00, 0x00, 0x03, 0xf8,  //   ......................XXXXXXX
  0x00, 0x00, 0x03, 0xf8,  //   ......................XXXXXXX
  0x00, 0x00, 0x03, 0xf8,  //   ......................XXXXXXX
  0x00, 0x00, 0x03, 0xf8,  //   ......................XXXXXXX
  0x00, 0x00, 0x07, 0xf8,  //   .....................XXXXXXXX
  0x20, 0x00, 0x07, 0xf0,  //   ..X..................XXXXXXX.
  0x38, 0x00, 0x0f, 0xf0,  //   ..XXX...............XXXXXXXX.
  0x3e, 0x00, 0x3f, 0xf0,  //   ..XXXXX...........XXXXXXXXXX.
  0x7f, 0x80, 0xff, 0xe0,  //   .XXXXXXXX.......XXXXXXXXXXX..
  0x7f, 0xff, 0xff, 0xc0,  //   .XXXXXXXXXXXXXXXXXXXXXXXXX...
  0xff, 0xff, 0xff, 0x80,  //   XXXXXXXXXXXXXXXXXXXXXXXXX....
  0xff, 0xff, 0xff, 0x00,  //   XXXXXXXXXXXXXXXXXXXXXXXX.....
  0x3f, 0xff, 0xfe, 0x00,  //   ..XXXXXXXXXXXXXXXXXXXXX......
  0x0f, 0xff, 0xf8, 0x00,  //   ....XXXXXXXXXXXXXXXXX........
  0x00, 0xff, 0xc0, 0x00,  //   ........XXXXXXXXXX...........
  0x00, 0x1f, 0x00, 0x00,  //   ...........XXXXX.............
  0x00, 0x1f, 0x00, 0x00,  //   ...........XXXXX.............
  0x00, 0x1f, 0x00, 0x00,  //   ...........XXXXX.............
  0x00, 0x1f, 0x00, 0x00,  //   ...........XXXXX.............
  0x00, 0x1f, 0x00, 0x00,  //   ...........XXXXX.............
  0x00, 0x1f, 0x00, 0x00,  //   ...........XXXXX.............
  0x00, 0x1f, 0x00, 0x00,  //   ...........XXXXX.............
  0x00, 0x1f, 0x00, 0x00,  //   ...........XXXXX.............
// char:25 "%"
  38, // width
  53, // height
  0x02, // left
  0x34, // top
  43, // advance
  0x01, 0xf8, 0x00, 0x00, 0xf0,  //   .......XXXXXX...................XXXX..
  0x07, 0xfe, 0x00, 0x01, 0xe0,  //   .....XXXXXXXXXX................XXXX...
  0x0f, 0xff, 0x00, 0x01, 0xe0,  //   ....XXXXXXXXXXXX...............XXXX...
  0x1f, 0xff, 0x80, 0x03, 0xc0,  //   ...XXXXXXXXXXXXXX.............XXXX....
  0x3f, 0x0f, 0x80, 0x07, 0x80,  //   ..XXXXXX....XXXXX............XXXX.....
  0x7c, 0x07, 0xc0, 0x07, 0x80,  //   .XXXXX.......XXXXX...........XXXX.....
  0x78, 0x03, 0xc0, 0x0f, 0x00,  //   .XXXX.........XXXX..........XXXX......
  0x78, 0x03, 0xc0, 0x0f, 0x00,  //   .XXXX.........XXXX..........XXXX......
  0xf0, 0x01, 0xe0, 0x1e, 0x00,  //   XXXX...........XXXX........XXXX.......
  0xf0, 0x01, 0xe0, 0x3c, 0x00,  //   XXXX...........XXXX.......XXXX........
  0xf0, 0x01, 0xe0, 0x3c, 0x00,  //   XXXX...........XXXX.......XXXX........
  0xf0, 0x01, 0xe0, 0x78, 0x00,  //   XXXX...........XXXX......XXXX.........
  0xf0, 0x01, 0xe0, 0x78, 0x00,  //   XXXX...........XXXX......XXXX.........
  0xf0, 0x01, 0xe0, 0xf0, 0x00,  //   XXXX...........XXXX.....XXXX..........
  0xf0, 0x01, 0xe0, 0xf0, 0x00,  //   XXXX...........XXXX.....XXXX..........
  0xf0, 0x01, 0xe1, 0xe0, 0x00,  //   XXXX...........XXXX....XXXX...........
  0xf0, 0x01, 0xe3, 0xc0, 0x00,  //   XXXX...........XXXX...XXXX............
  0x78, 0x03, 0xc3, 0xc0, 0x00,  //   .XXXX.........XXXX....XXXX............
  0x78, 0x03, 0xc7, 0x80, 0x00,  //   .XXXX.........XXXX...XXXX.............
  0x7c, 0x07, 0xc7, 0x80, 0x00,  //   .XXXXX.......XXXXX...XXXX.............
  0x3e, 0x0f, 0x8f, 0x00, 0x00,  //   ..XXXXX.....XXXXX...XXXX..............
  0x3f, 0xff, 0x1e, 0x00, 0x00,  //   ..XXXXXXXXXXXXXX...XXXX...............
  0x1f, 0xff, 0x1e, 0x00, 0x00,  //   ...XXXXXXXXXXXXX...XXXX...............
  0x0f, 0xfc, 0x3c, 0x00, 0x00,  //   ....XXXXXXXXXX....XXXX................
  0x03, 0xf8, 0x3c, 0x00, 0x00,  //   ......XXXXXXX.....XXXX................
  0x00, 0x00, 0x78, 0x00, 0x00,  //   .................XXXX.................
  0x00, 0x00, 0xf8, 0x00, 0x00,  //   ................XXXXX.................
  0x00, 0x00, 0xf0, 0x00, 0x00,  //   ................XXXX..................
  0x00, 0x01, 0xe0, 0x3f, 0x00,  //   ...............XXXX.......XXXXXX......
  0x00, 0x01, 0xe0, 0xff, 0xc0,  //   ...............XXXX.....XXXXXXXXXX....
  0x00, 0x03, 0xc1, 0xff, 0xe0,  //   ..............XXXX.....XXXXXXXXXXXX...
  0x00, 0x03, 0xc3, 0xff, 0xf0,  //   ..............XXXX....XXXXXXXXXXXXXX..
  0x00, 0x07, 0x87, 0xe1, 0xf0,  //   .............XXXX....XXXXXX....XXXXX..
  0x00, 0x0f, 0x0f, 0x80, 0xf8,  //   ............XXXX....XXXXX.......XXXXX.
  0x00, 0x0f, 0x0f, 0x00, 0x78,  //   ............XXXX....XXXX.........XXXX.
  0x00, 0x1e, 0x0f, 0x00, 0x78,  //   ...........XXXX.....XXXX.........XXXX.
  0x00, 0x1e, 0x1e, 0x00, 0x3c,  //   ...........XXXX....XXXX...........XXXX
  0x00, 0x3c, 0x1e, 0x00, 0x3c,  //   ..........XXXX.....XXXX...........XXXX
  0x00, 0x78, 0x1e, 0x00, 0x3c,  //   .........XXXX......XXXX...........XXXX
  0x00, 0x78, 0x1e, 0x00, 0x3c,  //   .........XXXX......XXXX...........XXXX
  0x00, 0xf0, 0x1e, 0x00, 0x3c,  //   ........XXXX.......XXXX...........XXXX
  0x00, 0xf0, 0x1e, 0x00, 0x3c,  //   ........XXXX.......XXXX...........XXXX
  0x01, 0xe0, 0x1e, 0x00, 0x3c,  //   .......XXXX........XXXX...........XXXX
  0x01, 0xe0, 0x1e, 0x00, 0x3c,  //   .......XXXX........XXXX...........XXXX
  0x03, 0xc0, 0x1e, 0x00, 0x3c,  //   ......XXXX.........XXXX...........XXXX
  0x07, 0x80, 0x0f, 0x00, 0x78,  //   .....XXXX...........XXXX.........XXXX.
  0x07, 0x80, 0x0f, 0x00, 0x78,  //   .....XXXX...........XXXX.........XXXX.
  0x0f, 0x00, 0x0f, 0x80, 0xf8,  //   ....XXXX............XXXXX.......XXXXX.
  0x0f, 0x00, 0x07, 0xc1, 0xf0,  //   ....XXXX.............XXXXX.....XXXXX..
  0x1e, 0x00, 0x07, 0xff, 0xe0,  //   ...XXXX..............XXXXXXXXXXXXXX...
  0x3c, 0x00, 0x03, 0xff, 0xe0,  //   ..XXXX................XXXXXXXXXXXXX...
  0x3c, 0x00, 0x01, 0xff, 0x80,  //   ..XXXX.................XXXXXXXXXX.....
  0x78, 0x00, 0x00, 0x7e, 0x00,  //   .XXXX....................XXXXXX.......
// char:26 "&"
  42, // width
  53, // height
  0x05, // left
  0x34, // top
  51, // advance
  0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00,  //   ...........XXXXXXXXXX.....................
  0x00, 0xff, 0xff, 0x00, 0x00, 0x00,  //   ........XXXXXXXXXXXXXXXX..................
  0x01, 0xff, 0xff, 0xc0, 0x00, 0x00,  //   .......XXXXXXXXXXXXXXXXXXX................
  0x07, 0xff, 0xff, 0xe0, 0x00, 0x00,  //   .....XXXXXXXXXXXXXXXXXXXXXX...............
  0x0f, 0xff, 0xff, 0xc0, 0x00, 0x00,  //   ....XXXXXXXXXXXXXXXXXXXXXX................
  0x1f, 0xf8, 0x0f, 0xc0, 0x00, 0x00,  //   ...XXXXXXXXXX.......XXXXXX................
  0x1f, 0xe0, 0x03, 0x80, 0x00, 0x00,  //   ...XXXXXXXX...........XXX.................
  0x3f, 0xc0, 0x01, 0x00, 0x00, 0x00,  //   ..XXXXXXXX.............X..................
  0x3f, 0x80, 0x00, 0x00, 0x00, 0x00,  //   ..XXXXXXX.................................
  0x7f, 0x80, 0x00, 0x00, 0x00, 0x00,  //   .XXXXXXXX.................................
  0x7f, 0x00, 0x00, 0x00, 0x00, 0x00,  //   .XXXXXXX..................................
  0x7f, 0x00, 0x00, 0x00, 0x00, 0x00,  //   .XXXXXXX..................................
  0x7f, 0x00, 0x00, 0x02, 0x00, 0x00,  //   .XXXXXXX......................X...........
  0x7f, 0x00, 0x00, 0x1e, 0x00, 0x00,  //   .XXXXXXX...................XXXX...........
  0x7f, 0x00, 0x00, 0xfe, 0x00, 0x00,  //   .XXXXXXX................XXXXXXX.......