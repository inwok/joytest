{\rtf1\ansi\ansicpg1252\cocoartf2758
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Monaco;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue255;\red255\green255\blue254;\red0\green0\blue0;
\red144\green1\blue18;\red15\green112\blue1;\red19\green118\blue70;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c100000;\cssrgb\c100000\c100000\c99608;\cssrgb\c0\c0\c0;
\cssrgb\c63922\c8235\c8235;\cssrgb\c0\c50196\c0;\cssrgb\c3529\c52549\c34510;}
\paperw11900\paperh16840\margl1440\margr1440\vieww12200\viewh15320\viewkind1
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs34 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 #include\cf0 \strokec4  \cf2 \strokec2 "\cf5 \strokec5 pxt.h\cf2 \strokec2 "\cf0 \cb1 \strokec4 \
\
\cf2 \cb3 \strokec2 enum\cf0 \strokec4  \cf2 \strokec2 class\cf0 \strokec4  Button \{\cb1 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     A = MICROBIT_ID_BUTTON_A,\cb1 \
\cb3     B = MICROBIT_ID_BUTTON_B,\cb1 \
\cb3     \cf6 \strokec6 //% block="A+B"\cf0 \cb1 \strokec4 \
\cb3     AB = MICROBIT_ID_BUTTON_AB,\cb1 \
\cb3 \};\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 enum\cf0 \strokec4  \cf2 \strokec2 class\cf0 \strokec4  Dimension \{\cb1 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block=x\cf0 \cb1 \strokec4 \
\cb3     X = \cf7 \strokec7 0\cf0 \strokec4 ,\cb1 \
\cb3     \cf6 \strokec6 //% block=y\cf0 \cb1 \strokec4 \
\cb3     Y = \cf7 \strokec7 1\cf0 \strokec4 ,\cb1 \
\cb3     \cf6 \strokec6 //% block=z\cf0 \cb1 \strokec4 \
\cb3     Z = \cf7 \strokec7 2\cf0 \strokec4 ,\cb1 \
\cb3     \cf6 \strokec6 //% block=strength\cf0 \cb1 \strokec4 \
\cb3     Strength = \cf7 \strokec7 3\cf0 \strokec4 ,\cb1 \
\cb3 \};\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 enum\cf0 \strokec4  \cf2 \strokec2 class\cf0 \strokec4  Rotation \{\cb1 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block=pitch\cf0 \cb1 \strokec4 \
\cb3     Pitch = \cf7 \strokec7 0\cf0 \strokec4 ,\cb1 \
\cb3     \cf6 \strokec6 //% block=roll\cf0 \cb1 \strokec4 \
\cb3     Roll = \cf7 \strokec7 1\cf0 \strokec4 ,\cb1 \
\cb3 \};\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 enum\cf0 \strokec4  \cf2 \strokec2 class\cf0 \strokec4  TouchPin \{\cb1 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     P0 = MICROBIT_ID_IO_P0,\cb1 \
\cb3     P1 = MICROBIT_ID_IO_P1,\cb1 \
\cb3     P2 = MICROBIT_ID_IO_P2,\cb1 \
\cb3 \};\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 enum\cf0 \strokec4  \cf2 \strokec2 class\cf0 \strokec4  AcceleratorRange \{\cb1 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * The accelerator measures forces up to 1 gravity\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //%  block="1g"\cf0 \cb1 \strokec4 \
\cb3     OneG = \cf7 \strokec7 1\cf0 \strokec4 ,\cb1 \
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * The accelerator measures forces up to 2 gravity\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //%  block="2g"\cf0 \cb1 \strokec4 \
\cb3     TwoG = \cf7 \strokec7 2\cf0 \strokec4 ,\cb1 \
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * The accelerator measures forces up to 4 gravity\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block="4g"\cf0 \cb1 \strokec4 \
\cb3     FourG = \cf7 \strokec7 4\cf0 \strokec4 ,\cb1 \
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * The accelerator measures forces up to 8 gravity\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block="8g"\cf0 \cb1 \strokec4 \
\cb3     EightG = \cf7 \strokec7 8\cf0 \cb1 \strokec4 \
\cb3 \};\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 enum\cf0 \strokec4  \cf2 \strokec2 class\cf0 \strokec4  Gesture \{\cb1 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Raised when shaken\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block=shake\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% jres=gestures.shake\cf0 \cb1 \strokec4 \
\cb3     Shake = MICROBIT_ACCELEROMETER_EVT_SHAKE,\cb1 \
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Raised when the logo is upward and the screen is vertical\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block="logo up"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% jres=gestures.tiltforward\cf0 \cb1 \strokec4 \
\cb3     LogoUp = MICROBIT_ACCELEROMETER_EVT_TILT_UP,\cb1 \
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Raised when the logo is downward and the screen is vertical\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block="logo down"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% jres=gestures.tiltbackwards\cf0 \cb1 \strokec4 \
\cb3     LogoDown = MICROBIT_ACCELEROMETER_EVT_TILT_DOWN,\cb1 \
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Raised when the screen is pointing up and the board is horizontal\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block="screen up"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% jres=gestures.frontsideup\cf0 \cb1 \strokec4 \
\cb3     ScreenUp = MICROBIT_ACCELEROMETER_EVT_FACE_UP,\cb1 \
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Raised when the screen is pointing down and the board is horizontal\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block="screen down"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% jres=gestures.backsideup\cf0 \cb1 \strokec4 \
\cb3     ScreenDown = MICROBIT_ACCELEROMETER_EVT_FACE_DOWN,\cb1 \
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Raised when the screen is pointing left\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block="tilt left"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% jres=gestures.tiltleft\cf0 \cb1 \strokec4 \
\cb3     TiltLeft = MICROBIT_ACCELEROMETER_EVT_TILT_LEFT,\cb1 \
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Raised when the screen is pointing right\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block="tilt right"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% jres=gestures.tiltright\cf0 \cb1 \strokec4 \
\cb3     TiltRight = MICROBIT_ACCELEROMETER_EVT_TILT_RIGHT,\cb1 \
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Raised when the board is falling!\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block="free fall"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% jres=gestures.freefall\cf0 \cb1 \strokec4 \
\cb3     FreeFall = MICROBIT_ACCELEROMETER_EVT_FREEFALL,\cb1 \
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6     * Raised when a 3G shock is detected\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6     */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block="3g"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% jres=gestures.impact3g\cf0 \cb1 \strokec4 \
\cb3     ThreeG = MICROBIT_ACCELEROMETER_EVT_3G,\cb1 \
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6     * Raised when a 6G shock is detected\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6     */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block="6g"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% jres=gestures.impact6g\cf0 \cb1 \strokec4 \
\cb3     SixG = MICROBIT_ACCELEROMETER_EVT_6G,\cb1 \
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6     * Raised when a 8G shock is detected\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6     */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block="8g"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% jres=gestures.impact8g\cf0 \cb1 \strokec4 \
\cb3     EightG = MICROBIT_ACCELEROMETER_EVT_8G\cb1 \
\cb3 \};\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 enum\cf0 \strokec4  \cf2 \strokec2 class\cf0 \strokec4  MesDpadButtonInfo \{\cb1 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% block="A down"\cf0 \cb1 \strokec4 \
\cb3     ADown = MES_DPAD_BUTTON_A_DOWN,\cb1 \
\cb3     \cf6 \strokec6 //% block="A up"\cf0 \cb1 \strokec4 \
\cb3     AUp = MES_DPAD_BUTTON_A_UP,\cb1 \
\cb3     \cf6 \strokec6 //% block="B down"\cf0 \cb1 \strokec4 \
\cb3     BDown = MES_DPAD_BUTTON_B_DOWN,\cb1 \
\cb3     \cf6 \strokec6 //% block="B up"\cf0 \cb1 \strokec4 \
\cb3     BUp = MES_DPAD_BUTTON_B_UP,\cb1 \
\cb3     \cf6 \strokec6 //% block="C down"\cf0 \cb1 \strokec4 \
\cb3     CDown = MES_DPAD_BUTTON_C_DOWN,\cb1 \
\cb3     \cf6 \strokec6 //% block="C up"\cf0 \cb1 \strokec4 \
\cb3     CUp = MES_DPAD_BUTTON_C_UP,\cb1 \
\cb3     \cf6 \strokec6 //% block="D down"\cf0 \cb1 \strokec4 \
\cb3     DDown = MES_DPAD_BUTTON_D_DOWN,\cb1 \
\cb3     \cf6 \strokec6 //% block="D up"\cf0 \cb1 \strokec4 \
\cb3     DUp = MES_DPAD_BUTTON_D_UP,\cb1 \
\cb3     \cf6 \strokec6 //% block="1 down"\cf0 \cb1 \strokec4 \
\cb3     _1Down = MES_DPAD_BUTTON_1_DOWN,\cb1 \
\cb3     \cf6 \strokec6 //% block="1 up"\cf0 \cb1 \strokec4 \
\cb3     _1Up = MES_DPAD_BUTTON_1_UP,\cb1 \
\cb3     \cf6 \strokec6 //% block="2 down"\cf0 \cb1 \strokec4 \
\cb3     _2Down = MES_DPAD_BUTTON_2_DOWN,\cb1 \
\cb3     \cf6 \strokec6 //% block="2 up"\cf0 \cb1 \strokec4 \
\cb3     _2Up = MES_DPAD_BUTTON_2_UP,\cb1 \
\cb3     \cf6 \strokec6 //% block="3 down"\cf0 \cb1 \strokec4 \
\cb3     _3Down = MES_DPAD_BUTTON_3_DOWN,\cb1 \
\cb3     \cf6 \strokec6 //% block="3 up"\cf0 \cb1 \strokec4 \
\cb3     _3Up = MES_DPAD_BUTTON_3_UP,\cb1 \
\cb3     \cf6 \strokec6 //% block="4 down"\cf0 \cb1 \strokec4 \
\cb3     _4Down = MES_DPAD_BUTTON_4_DOWN,\cb1 \
\cb3     \cf6 \strokec6 //% block="4 up"\cf0 \cb1 \strokec4 \
\cb3     _4Up = MES_DPAD_BUTTON_4_UP,\cb1 \
\cb3 \};\cb1 \
\
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6 //% color=#D400D4 weight=111 icon="\\uf192"\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec2 namespace\cf0 \strokec4  input \{\cb1 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Do something when a button (A, B or both A+B) is pushed down and released again.\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      * @param button the button that needs to be pressed\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      * @param body code to run when event is raised\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% help=input/on-button-pressed weight=85 blockGap=16\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockId=device_button_event block="on button|%NAME|pressed"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% parts="buttonpair"\cf0 \cb1 \strokec4 \
\cb3     \cf2 \strokec2 void\cf0 \strokec4  onButtonPressed(Button button, Action body) \{\cb1 \
\cb3         registerWithDal((\cf2 \strokec2 int\cf0 \strokec4 )button, MICROBIT_BUTTON_EVT_CLICK, body);\cb1 \
\cb3     \}\cb1 \
\
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Do something when when a gesture is done (like shaking the micro:bit).\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      * @param gesture the type of gesture to track, eg: Gesture.Shake\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      * @param body code to run when gesture is raised\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% help=input/on-gesture weight=84 blockGap=16\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockId=device_gesture_event block="on |%NAME"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% parts="accelerometer"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% NAME.fieldEditor="gestures" NAME.fieldOptions.columns=4\cf0 \cb1 \strokec4 \
\cb3     \cf2 \strokec2 void\cf0 \strokec4  onGesture(Gesture gesture, Action body) \{\cb1 \
\cb3         \cf2 \strokec2 int\cf0 \strokec4  gi = (\cf2 \strokec2 int\cf0 \strokec4 )gesture;\cb1 \
\cb3         \cf2 \strokec2 if\cf0 \strokec4  (gi == MICROBIT_ACCELEROMETER_EVT_3G && uBit.accelerometer.getRange() < \cf7 \strokec7 3\cf0 \strokec4 )\cb1 \
\cb3             uBit.accelerometer.setRange(\cf7 \strokec7 4\cf0 \strokec4 );\cb1 \
\cb3         \cf2 \strokec2 else\cf0 \strokec4  \cf2 \strokec2 if\cf0 \strokec4  ((gi == MICROBIT_ACCELEROMETER_EVT_6G || gi == MICROBIT_ACCELEROMETER_EVT_8G) && uBit.accelerometer.getRange() < \cf7 \strokec7 6\cf0 \strokec4 )\cb1 \
\cb3             uBit.accelerometer.setRange(\cf7 \strokec7 8\cf0 \strokec4 );\cb1 \
\cb3         registerWithDal(MICROBIT_ID_GESTURE, gi, body);\cb1 \
\cb3     \}\cb1 \
\
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6     * Tests if a gesture is currently detected.\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      * @param gesture the type of gesture to detect, eg: Gesture.Shake\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6     */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% help=input/is-gesture weight=10 blockGap=8\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockId=deviceisgesture block="is %gesture gesture"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% parts="accelerometer"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% gesture.fieldEditor="gestures" gesture.fieldOptions.columns=4\cf0 \cb1 \strokec4 \
\cb3     \cf2 \strokec2 bool\cf0 \strokec4  isGesture(Gesture gesture) \{\cb1 \
\cb3         \cf6 \strokec6 // turn on acceleration\cf0 \cb1 \strokec4 \
\cb3         uBit.accelerometer.getX();\cb1 \
\cb3         \cf2 \strokec2 int\cf0 \strokec4  gi = (\cf2 \strokec2 int\cf0 \strokec4 )gesture;\cb1 \
\cb3         \cf2 \strokec2 return\cf0 \strokec4  uBit.accelerometer.getGesture() == gi;\cb1 \
\cb3     \}\cb1 \
\
\cb3      \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Do something when a pin is touched and released again (while also touching the GND pin).\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      * @param name the pin that needs to be pressed, eg: TouchPin.P0\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      * @param body the code to run when the pin is pressed\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% help=input/on-pin-pressed weight=83 blockGap=32\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockId=device_pin_event block="on pin %name|pressed"\cf0 \cb1 \strokec4 \
\cb3     \cf2 \strokec2 void\cf0 \strokec4  onPinPressed(TouchPin name, Action body) \{\cb1 \
\cb3         \cf2 \strokec2 auto\cf0 \strokec4  pin = getPin((\cf2 \strokec2 int\cf0 \strokec4 )name);\cb1 \
\cb3         \cf2 \strokec2 if\cf0 \strokec4  (!pin) \cf2 \strokec2 return\cf0 \strokec4 ;\cb1 \
\
\cb3         \cf6 \strokec6 // Forces the PIN to switch to makey-makey style detection.\cf0 \cb1 \strokec4 \
\cb3         pin->isTouched();\cb1 \
\cb3         registerWithDal((\cf2 \strokec2 int\cf0 \strokec4 )name, MICROBIT_BUTTON_EVT_CLICK, body);\cb1 \
\cb3     \}\cb1 \
\
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Do something when a pin is released.\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      * @param name the pin that needs to be released, eg: TouchPin.P0\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      * @param body the code to run when the pin is released\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% help=input/on-pin-released weight=6 blockGap=16\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockId=device_pin_released block="on pin %NAME|released"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% advanced=true\cf0 \cb1 \strokec4 \
\cb3     \cf2 \strokec2 void\cf0 \strokec4  onPinReleased(TouchPin name, Action body) \{\cb1 \
\cb3         \cf2 \strokec2 auto\cf0 \strokec4  pin = getPin((\cf2 \strokec2 int\cf0 \strokec4 )name);\cb1 \
\cb3         \cf2 \strokec2 if\cf0 \strokec4  (!pin) \cf2 \strokec2 return\cf0 \strokec4 ;\cb1 \
\
\cb3         \cf6 \strokec6 // Forces the PIN to switch to makey-makey style detection.\cf0 \cb1 \strokec4 \
\cb3         pin->isTouched();\cb1 \
\cb3         registerWithDal((\cf2 \strokec2 int\cf0 \strokec4 )name, MICROBIT_BUTTON_EVT_UP, body);\cb1 \
\cb3     \}\cb1 \
\
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Get the button state (pressed or not) for ``A`` and ``B``.\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      * @param button the button to query the request, eg: Button.A\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% help=input/button-is-pressed weight=60\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% block="button|%NAME|is pressed"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockId=device_get_button2\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% icon="\\uf192" blockGap=8\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% parts="buttonpair"\cf0 \cb1 \strokec4 \
\cb3     \cf2 \strokec2 bool\cf0 \strokec4  buttonIsPressed(Button button) \{\cb1 \
\cb3       \cf2 \strokec2 if\cf0 \strokec4  (button == Button::A)\cb1 \
\cb3         \cf2 \strokec2 return\cf0 \strokec4  uBit.buttonA.isPressed();\cb1 \
\cb3       \cf2 \strokec2 else\cf0 \strokec4  \cf2 \strokec2 if\cf0 \strokec4  (button == Button::B)\cb1 \
\cb3         \cf2 \strokec2 return\cf0 \strokec4  uBit.buttonB.isPressed();\cb1 \
\cb3       \cf2 \strokec2 else\cf0 \strokec4  \cf2 \strokec2 if\cf0 \strokec4  (button == Button::AB)\cb1 \
\cb3         \cf2 \strokec2 return\cf0 \strokec4  uBit.buttonAB.isPressed();\cb1 \
\cb3       \cf2 \strokec2 return\cf0 \strokec4  \cf2 \strokec2 false\cf0 \strokec4 ;\cb1 \
\cb3     \}\cb1 \
\
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Get the pin state (pressed or not). Requires to hold the ground to close the circuit.\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      * @param name pin used to detect the touch, eg: TouchPin.P0\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% help=input/pin-is-pressed weight=58\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockId="device_pin_is_pressed" block="pin %NAME|is pressed"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockGap=8\cf0 \cb1 \strokec4 \
\cb3     \cf2 \strokec2 bool\cf0 \strokec4  pinIsPressed(TouchPin name) \{\cb1 \
\cb3         \cf2 \strokec2 auto\cf0 \strokec4  pin = getPin((\cf2 \strokec2 int\cf0 \strokec4 )name);\cb1 \
\cb3         \cf2 \strokec2 return\cf0 \strokec4  pin && pin->isTouched();\cb1 \
\cb3     \}\cb1 \
\
\cb3     \cf2 \strokec2 int\cf0 \strokec4  getAccelerationStrength() \{\cb1 \
\cb3         \cf2 \strokec2 double\cf0 \strokec4  x = uBit.accelerometer.getX();\cb1 \
\cb3         \cf2 \strokec2 double\cf0 \strokec4  y = uBit.accelerometer.getY();\cb1 \
\cb3         \cf2 \strokec2 double\cf0 \strokec4  z = uBit.accelerometer.getZ();\cb1 \
\cb3         \cf2 \strokec2 return\cf0 \strokec4  (\cf2 \strokec2 int\cf0 \strokec4 )sqrt(x*x+y*y+z*z);\cb1 \
\cb3     \}\cb1 \
\
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Get the acceleration value in milli-gravitys (when the board is laying flat with the screen up, x=0, y=0 and z=-1024)\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      * @param dimension x, y, or z dimension, eg: Dimension.X\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% help=input/acceleration weight=58\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockId=device_acceleration block="acceleration (mg)|%NAME" blockGap=8\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% parts="accelerometer"\cf0 \cb1 \strokec4 \
\cb3     \cf2 \strokec2 int\cf0 \strokec4  acceleration(Dimension dimension) \{\cb1 \
\cb3       \cf2 \strokec2 switch\cf0 \strokec4  (dimension) \{\cb1 \
\cb3       \cf2 \strokec2 case\cf0 \strokec4  Dimension::X: \cf2 \strokec2 return\cf0 \strokec4  uBit.accelerometer.getX();\cb1 \
\cb3       \cf2 \strokec2 case\cf0 \strokec4  Dimension::Y: \cf2 \strokec2 return\cf0 \strokec4  uBit.accelerometer.getY();\cb1 \
\cb3       \cf2 \strokec2 case\cf0 \strokec4  Dimension::Z: \cf2 \strokec2 return\cf0 \strokec4  uBit.accelerometer.getZ();\cb1 \
\cb3       \cf2 \strokec2 case\cf0 \strokec4  Dimension::Strength: \cf2 \strokec2 return\cf0 \strokec4  getAccelerationStrength();\cb1 \
\cb3       \}\cb1 \
\cb3       \cf2 \strokec2 return\cf0 \strokec4  \cf7 \strokec7 0\cf0 \strokec4 ;\cb1 \
\cb3     \}\cb1 \
\
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Reads the light level applied to the LED screen in a range from ``0`` (dark) to ``255`` bright.\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% help=input/light-level weight=57\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockId=device_get_light_level block="light level" blockGap=8\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% parts="ledmatrix"\cf0 \cb1 \strokec4 \
\cb3     \cf2 \strokec2 int\cf0 \strokec4  lightLevel() \{\cb1 \
\cb3         \cf2 \strokec2 return\cf0 \strokec4  uBit.display.readLightLevel();\cb1 \
\cb3     \}\cb1 \
\
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Get the current compass heading in degrees.\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% help=input/compass-heading\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% weight=56\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockId=device_heading block="compass heading (\'b0)" blockGap=8\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% parts="compass"\cf0 \cb1 \strokec4 \
\cb3     \cf2 \strokec2 int\cf0 \strokec4  compassHeading() \{\cb1 \
\cb3         \cf2 \strokec2 return\cf0 \strokec4  uBit.compass.heading();\cb1 \
\cb3     \}\cb1 \
\
\
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Gets the temperature in Celsius degrees (\'b0C).\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% weight=55\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% help=input/temperature\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockId=device_temperature block="temperature (\'b0C)" blockGap=8\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% parts="thermometer"\cf0 \cb1 \strokec4 \
\cb3     \cf2 \strokec2 int\cf0 \strokec4  temperature() \{\cb1 \
\cb3         \cf2 \strokec2 return\cf0 \strokec4  uBit.thermometer.getTemperature();\cb1 \
\cb3     \}\cb1 \
\
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * The pitch or roll of the device, rotation along the ``x-axis`` or ``y-axis``, in degrees.\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      * @param kind pitch or roll\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% help=input/rotation weight=52\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockId=device_get_rotation block="rotation (\'b0)|%NAME" blockGap=8\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% parts="accelerometer" advanced=true\cf0 \cb1 \strokec4 \
\cb3     \cf2 \strokec2 int\cf0 \strokec4  rotation(Rotation kind) \{\cb1 \
\cb3       \cf2 \strokec2 switch\cf0 \strokec4  (kind) \{\cb1 \
\cb3       \cf2 \strokec2 case\cf0 \strokec4  Rotation::Pitch: \cf2 \strokec2 return\cf0 \strokec4  uBit.accelerometer.getPitch();\cb1 \
\cb3       \cf2 \strokec2 case\cf0 \strokec4  Rotation::Roll: \cf2 \strokec2 return\cf0 \strokec4  uBit.accelerometer.getRoll();\cb1 \
\cb3       \}\cb1 \
\cb3       \cf2 \strokec2 return\cf0 \strokec4  \cf7 \strokec7 0\cf0 \strokec4 ;\cb1 \
\cb3     \}\cb1 \
\
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Get the magnetic force value in ``micro-Teslas`` (``\'b5T``). This function is not supported in the simulator.\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      * @param dimension the x, y, or z dimension, eg: Dimension.X\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% help=input/magnetic-force weight=54\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockId=device_get_magnetic_force block="magnetic force (\'b5T)|%NAME" blockGap=8\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% parts="compass"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% advanced=true\cf0 \cb1 \strokec4 \
\cb3     TNumber magneticForce(Dimension dimension) \{\cb1 \
\cb3         \cf6 \strokec6 /* https://github.com/microsoft/pxt-microbit/issues/4995\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6         if (!uBit.compass.isCalibrated())\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6             uBit.compass.calibrate();\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6         */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3         \cf2 \strokec2 double\cf0 \strokec4  d = \cf7 \strokec7 0\cf0 \strokec4 ;        \cb1 \
\cb3         \cf2 \strokec2 switch\cf0 \strokec4  (dimension) \{\cb1 \
\cb3             \cf2 \strokec2 case\cf0 \strokec4  Dimension::X: d = uBit.compass.getX(); \cf2 \strokec2 break\cf0 \strokec4 ;\cb1 \
\cb3             \cf2 \strokec2 case\cf0 \strokec4  Dimension::Y: d = uBit.compass.getY(); \cf2 \strokec2 break\cf0 \strokec4 ;\cb1 \
\cb3             \cf2 \strokec2 case\cf0 \strokec4  Dimension::Z: d = uBit.compass.getZ(); \cf2 \strokec2 break\cf0 \strokec4 ;\cb1 \
\cb3             \cf2 \strokec2 case\cf0 \strokec4  Dimension::Strength: d = uBit.compass.getFieldStrength() ; \cf2 \strokec2 break\cf0 \strokec4 ;\cb1 \
\cb3         \}\cb1 \
\cb3         \cf2 \strokec2 return\cf0 \strokec4  fromDouble(d / \cf7 \strokec7 1000.0\cf0 \strokec4 );\cb1 \
\cb3     \}\cb1 \
\
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Obsolete, compass calibration is automatic.\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% help=input/calibrate-compass advanced=true\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockId="input_compass_calibrate" block="calibrate compass"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% weight=55\cf0 \cb1 \strokec4 \
\cb3     \cf2 \strokec2 void\cf0 \strokec4  calibrateCompass() \{\cb1 \
\cb3         uBit.compass.calibrate();\cb1 \
\cb3     \}\cb1 \
\
\cb3     \cf6 \strokec6 /**\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf6 \cb3 \strokec6      * Sets the accelerometer sample range in gravities.\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      * @param range a value describe the maximum strengh of acceleration measured\cf0 \cb1 \strokec4 \
\cf6 \cb3 \strokec6      */\cf0 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf0 \cb3     \cf6 \strokec6 //% help=input/set-accelerometer-range\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% blockId=device_set_accelerometer_range block="set accelerometer|range %range"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% weight=5\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% parts="accelerometer"\cf0 \cb1 \strokec4 \
\cb3     \cf6 \strokec6 //% advanced=true\cf0 \cb1 \strokec4 \
\cb3     \cf2 \strokec2 void\cf0 \strokec4  setAccelerometerRange(AcceleratorRange range) \{\cb1 \
\cb3         uBit.accelerometer.setRange((\cf2 \strokec2 int\cf0 \strokec4 )range);\cb1 \
\cb3     \}\cb1 \
\cb3 \}\cb1 \
\
}