{\rtf1\ansi\ansicpg1252\cocoartf2758
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Monaco;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue255;\red255\green255\blue254;\red0\green0\blue0;
\red15\green112\blue1;\red144\green1\blue18;\red19\green118\blue70;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c100000;\cssrgb\c100000\c100000\c99608;\cssrgb\c0\c0\c0;
\cssrgb\c0\c50196\c0;\cssrgb\c63922\c8235\c8235;\cssrgb\c3529\c52549\c34510;}
\paperw11900\paperh16840\margl1440\margr1440\vieww12200\viewh15320\viewkind1
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs34 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 #ifndef\cf0 \strokec4  __PXT_H\cb1 \
\cf2 \cb3 \strokec2 #define\cf0 \strokec4  __PXT_H\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf5 \cb3 \strokec5 //#define DEBUG_MEMLEAKS 1\cf0 \cb1 \strokec4 \
\
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 #pragma\cf0 \strokec4  GCC diagnostic ignored \cf6 \strokec6 "-Wunused-parameter"\cf0 \cb1 \strokec4 \
\
\cf2 \cb3 \strokec2 #include\cf0 \strokec4  \cf2 \strokec2 "\cf6 \strokec6 pxtbase.h\cf2 \strokec2 "\cf0 \cb1 \strokec4 \
\
\cf2 \cb3 \strokec2 namespace\cf0 \strokec4  pxt \{\cb1 \
\
\cf2 \cb3 \strokec2 class\cf0 \strokec4  RefMImage : \cf2 \strokec2 public\cf0 \strokec4  RefObject \{\cb1 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3   \cf2 \strokec2 public\cf0 \strokec4 :\cb1 \
\cb3     ImageData *img;\cb1 \
\
\cb3     RefMImage(ImageData *d);\cb1 \
\cb3     \cf2 \strokec2 void\cf0 \strokec4  makeWritable();\cb1 \
\cb3     \cf2 \strokec2 static\cf0 \strokec4  \cf2 \strokec2 void\cf0 \strokec4  destroy(RefMImage *map);\cb1 \
\cb3     \cf2 \strokec2 static\cf0 \strokec4  \cf2 \strokec2 void\cf0 \strokec4  print(RefMImage *map);\cb1 \
\cb3     \cf2 \strokec2 static\cf0 \strokec4  \cf2 \strokec2 void\cf0 \strokec4  scan(RefMImage *t);\cb1 \
\cb3     \cf2 \strokec2 static\cf0 \strokec4  \cf2 \strokec2 unsigned\cf0 \strokec4  gcsize(RefMImage *t);\cb1 \
\cb3 \};\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 #define\cf0 \strokec4  MSTR(s) ManagedString((s)->getUTF8Data(), (s)->getUTF8Size())\cb1 \
\
\cf2 \cb3 \strokec2 static\cf0 \strokec4  \cf2 \strokec2 inline\cf0 \strokec4  String PSTR(ManagedString s) \{\cb1 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf2 \strokec2 return\cf0 \strokec4  mkString(s.toCharArray(), s.length());\cb1 \
\cb3 \}\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 typedef\cf0 \strokec4  uint32_t ImageLiteral_;\cb1 \
\
\cf2 \cb3 \strokec2 static\cf0 \strokec4  \cf2 \strokec2 inline\cf0 \strokec4  ImageData *imageBytes(ImageLiteral_ lit) \{\cb1 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf2 \strokec2 return\cf0 \strokec4  (ImageData *)lit;\cb1 \
\cb3 \}\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 #if\cf0 \strokec4  MICROBIT_CODAL\cb1 \
\pard\pardeftab720\partightenfactor0
\cf5 \cb3 \strokec5 // avoid clashes with codal-defined classes\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 #define\cf0 \strokec4  Image MImage\cb1 \
\cf2 \cb3 \strokec2 #define\cf0 \strokec4  Button MButton\cb1 \
\cf2 \cb3 \strokec2 #endif\cf0 \cb1 \strokec4 \
\
\cf2 \cb3 \strokec2 typedef\cf0 \strokec4  MicroBitPin DevicePin;\cb1 \
\
\cf2 \cb3 \strokec2 typedef\cf0 \strokec4  RefMImage *Image;\cb1 \
\
\cf2 \cb3 \strokec2 extern\cf0 \strokec4  MicroBit uBit;\cb1 \
\cf2 \cb3 \strokec2 extern\cf0 \strokec4  MicroBitEvent lastEvent;\cb1 \
\cf2 \cb3 \strokec2 extern\cf0 \strokec4  \cf2 \strokec2 bool\cf0 \strokec4  serialLoggingDisabled;\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf0 \cb3 MicroBitPin *getPin(\cf2 \strokec2 int\cf0 \strokec4  id);\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 static\cf0 \strokec4  \cf2 \strokec2 inline\cf0 \strokec4  \cf2 \strokec2 int\cf0 \strokec4  min_(\cf2 \strokec2 int\cf0 \strokec4  a, \cf2 \strokec2 int\cf0 \strokec4  b) \{\cb1 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf2 \strokec2 if\cf0 \strokec4  (a < b)\cb1 \
\cb3         \cf2 \strokec2 return\cf0 \strokec4  a;\cb1 \
\cb3     \cf2 \strokec2 else\cf0 \cb1 \strokec4 \
\cb3         \cf2 \strokec2 return\cf0 \strokec4  b;\cb1 \
\cb3 \}\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 static\cf0 \strokec4  \cf2 \strokec2 inline\cf0 \strokec4  \cf2 \strokec2 int\cf0 \strokec4  max_(\cf2 \strokec2 int\cf0 \strokec4  a, \cf2 \strokec2 int\cf0 \strokec4  b) \{\cb1 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf2 \strokec2 if\cf0 \strokec4  (a > b)\cb1 \
\cb3         \cf2 \strokec2 return\cf0 \strokec4  a;\cb1 \
\cb3     \cf2 \strokec2 else\cf0 \cb1 \strokec4 \
\cb3         \cf2 \strokec2 return\cf0 \strokec4  b;\cb1 \
\cb3 \}\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 void\cf0 \strokec4  initMicrobitGC();\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf0 \cb3 \} \cf5 \strokec5 // namespace pxt\cf0 \cb1 \strokec4 \
\
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 using\cf0 \strokec4  \cf2 \strokec2 namespace\cf0 \strokec4  pxt;\cb1 \
\
\cf2 \cb3 \strokec2 #define\cf0 \strokec4  DEVICE_EVT_ANY \cf7 \strokec7 0\cf0 \cb1 \strokec4 \
\
\cf2 \cb3 \strokec2 #undef\cf0 \strokec4  PXT_MAIN\cb1 \
\cf2 \cb3 \strokec2 #define\cf0 \strokec4  PXT_MAIN                                                                                   \\\cb1 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf2 \strokec2 int\cf0 \strokec4  main() \{                                                                                   \\\cb1 \
\cb3         pxt::initMicrobitGC();                                                                     \\\cb1 \
\cb3         pxt::start();                                                                              \\\cb1 \
\cb3         \cf2 \strokec2 return\cf0 \strokec4  \cf7 \strokec7 0\cf0 \strokec4 ;                                                                                  \\\cb1 \
\cb3     \}\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 #endif\cf0 \cb1 \strokec4 \
\
\pard\pardeftab720\partightenfactor0
\cf5 \cb3 \strokec5 // vim: ts=2 sw=2 expandtab\cf0 \cb1 \strokec4 \
\
}