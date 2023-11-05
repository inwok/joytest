//Project Microbit Link plus LCD (show pin) แยกกลุ่ม
//----------------------------------
// บล็อกคำสั่งสำหรับควบคุมมอเตอร์
enum MotorChannel {
    //% block="E (P15,P16)"
    E,
    //% block="F (P13,P14)""
    F,
    //% block="G (P12,P2)""
    G,
    //% block="H (P1,P8)""
    H,
}
enum MotorShaftDirection {
    //% block="Left"
    LOW,
    //% block="Right"
    HIGH,

}
let motorSpeedPins: { [key: number]: AnalogPin } = {
    [MotorChannel.E]: AnalogPin.P16,
    [MotorChannel.F]: AnalogPin.P14,
    [MotorChannel.G]: AnalogPin.P2,
    [MotorChannel.H]: AnalogPin.P8,
}
let motorChannels: { [key: number]: DigitalPin } = {
    [MotorChannel.E]: DigitalPin.P15,
    [MotorChannel.F]: DigitalPin.P13,
    [MotorChannel.G]: DigitalPin.P12,
    [MotorChannel.H]: DigitalPin.P1,
}

//----------------------------------
//led
enum LEDChannel {
    //% block="A (P19)"
    A,
    //% block="B (P14)"
    B,
    //% block="C (P2)"
    C,
    //% block="D (P8)"
    D,
    //% block="E (P15)"
    E,
    //% block="F (P13)"
    F,
    //% block="G (P12)"
    G,
    //% block="H (P1)"
    H,
}
let LEDChannels: { [key: number]: DigitalPin } = {
    [LEDChannel.A]: DigitalPin.P19,
    [LEDChannel.B]: DigitalPin.P14,
    [LEDChannel.C]: DigitalPin.P2,
    [LEDChannel.D]: DigitalPin.P8,
    [LEDChannel.E]: DigitalPin.P15,
    [LEDChannel.F]: DigitalPin.P13,
    [LEDChannel.G]: DigitalPin.P12,
    [LEDChannel.H]: DigitalPin.P1,
}
enum LEDShaftonoff {
    //% block="off"
    LOW,
    //% block="on"
    HIGH,

}
//----------------------------------
//button
enum buttonChannel {
    //% block="A (P20)"
    A,
    //% block="E (P16)"
    E,
    //% block="F (P14)"
    F,
    //% block="G (P2)"
    G,
    //% block="H (P8)"
    H,
}
let buttonChannels: { [key: number]: DigitalPin } = {
    [buttonChannel.A]: DigitalPin.P20,
    [buttonChannel.E]: DigitalPin.P16,
    [buttonChannel.F]: DigitalPin.P14,
    [buttonChannel.G]: DigitalPin.P2,
    [buttonChannel.H]: DigitalPin.P8,

}
//----------------------------------

//อ่านค่าเซ็นเซอร์
enum sensorChannel {
    //% block="P1"
    P1,
    //% block="P8"
    P8,
    //% block="P12"
    P12,
    //% block="P2"
    P2,
    //% block="P13"
    P13,
    //% block="P14"
    P14,
    //% block="P15"
    P15,
    //% block="P16"
    P16,
}
let sensorChannels: { [key: number]: DigitalPin } = {
    [sensorChannel.P1]: DigitalPin.P1,
    [sensorChannel.P8]: DigitalPin.P8,
    [sensorChannel.P12]: DigitalPin.P12,
    [sensorChannel.P2]: DigitalPin.P2,
    [sensorChannel.P13]: DigitalPin.P13,
    [sensorChannel.P14]: DigitalPin.P14,
    [sensorChannel.P15]: DigitalPin.P15,
    [sensorChannel.P16]: DigitalPin.P16,
}
//----------------------------------

//อ่านค่าเซ็นเซอร์
enum blackChannel {
    //% block="P1"
    P1,
    //% block="P8"
    P8,
    //% block="P12"
    P12,
    //% block="P2"
    P2,
    //% block="P13"
    P13,
    //% block="P14"
    P14,
    //% block="P15"
    P15,
    //% block="P16"
    P16,
}
let blackChannels: { [key: number]: DigitalPin } = {
    [blackChannel.P1]: DigitalPin.P1,
    [blackChannel.P8]: DigitalPin.P8,
    [blackChannel.P12]: DigitalPin.P12,
    [blackChannel.P2]: DigitalPin.P2,
    [blackChannel.P13]: DigitalPin.P13,
    [blackChannel.P14]: DigitalPin.P14,
    [blackChannel.P15]: DigitalPin.P15,
    [blackChannel.P16]: DigitalPin.P16,
}
//----------------------------------
//servo180
enum servoChannel {
    //% block="P1"
    P1,
    //% block="P8"
    P8,
    //% block="P12"
    P12,
    //% block="P2"
    P2,
    //% block="P13"
    P13,
    //% block="P14"
    P14,
    //% block="P15"
    P15,
    //% block="P16"
    P16,
}
let servoChannels: { [key: number]: AnalogPin } = {
    [servoChannel.P1]: AnalogPin.P1,
    [servoChannel.P8]: AnalogPin.P8,
    [servoChannel.P12]: AnalogPin.P12,
    [servoChannel.P2]: AnalogPin.P2,
    [servoChannel.P13]: AnalogPin.P13,
    [servoChannel.P14]: AnalogPin.P14,
    [servoChannel.P15]: AnalogPin.P15,
    [servoChannel.P16]: AnalogPin.P16,
}
//----------------------------------
//servoCon
enum servoconChannel {
    //% block="P1"
    P1,
    //% block="P8"
    P8,
    //% block="P12"
    P12,
    //% block="P2"
    P2,
    //% block="P13"
    P13,
    //% block="P14"
    P14,
    //% block="P15"
    P15,
    //% block="P16"
    P16,
}
let servoconChannels: { [key: number]: AnalogPin } = {
    [servoconChannel.P1]: AnalogPin.P1,
    [servoconChannel.P8]: AnalogPin.P8,
    [servoconChannel.P12]: AnalogPin.P12,
    [servoconChannel.P2]: AnalogPin.P2,
    [servoconChannel.P13]: AnalogPin.P13,
    [servoconChannel.P14]: AnalogPin.P14,
    [servoconChannel.P15]: AnalogPin.P15,
    [servoconChannel.P16]: AnalogPin.P16,
}
enum svconShaft {
    //% block="Right"
    Right = 0,
    //% block="Left"
    Left = 180,
    //% block="Stop"
    Stop = 90,

}
let degreesCon: { [key: number]: number } = {
    [svconShaft.Right]: 0,
    [svconShaft.Left]: 180,
    [svconShaft.Stop]: 90,

}
//----------------------------------
//sonar
enum PingUnit {
    //% block="μs"
    MicroSeconds,
    //% block="cm"
    Centimeters,
    //% block="inches"
    Inches
}
enum sonarPort {
    //% block="E [ trig(P16) echo(P15) ]"
    E,
    //% block="F [ trig(P14) echo(P13) ]"
    F,
    //% block="G [ trig(P2) echo(P12) ]"
    G,
    //% block="H [ trig(P8) echo(P1) ]"
    H,
}
let trigChanel: { [key: number]: DigitalPin } = {
    [sonarPort.E]: DigitalPin.P16,
    [sonarPort.F]: DigitalPin.P14,
    [sonarPort.G]: DigitalPin.P2,
    [sonarPort.H]: DigitalPin.P8,
}
let echoChanel: { [key: number]: DigitalPin } = {
    [sonarPort.E]: DigitalPin.P15,
    [sonarPort.F]: DigitalPin.P13,
    [sonarPort.G]: DigitalPin.P12,
    [sonarPort.H]: DigitalPin.P1,
}
//MLX90614 IR thermometer

enum MLX90614_TEMPERATURE_ORIGIN {
    //% block="object"
    OBJECT = 0x07,
    //% block="ambient"
    AMBIENT = 0x06,
}
//----------------------------------
//% color=#E7734B icon="\uf021" 
namespace Command {
    
    //% block color=#007ACC
    export function True(): boolean {
        return true;
    }
    
     //% block color=#007ACC
    export function False(): boolean {
        return false;
    }
    
    //% block="reset Microbit" color=#007ACC
    export function reset(): void {
        control.reset();
    }
    
   
    export let NEW_LINE = "\r\n";
    export let NEW_LINE_DELIMITER: Delimiters = Delimiters.NewLine;
    let writeLinePadding = 32;

  
    //% weight=90
    //% help=serial/write-line blockGap=8
    //% blockId=serial_writeline block="send %text to computer" color=#007ACC
    //% text.shadowOptions.toString=true
    export function writeLine(text: string): void {
        if (!text) text = "";
        serial.writeString(text);
        // pad data to the 32 byte boundary
        // to ensure apps receive the packet
        if (writeLinePadding > 0) {
            let r = (writeLinePadding - (text.length + NEW_LINE.length) % writeLinePadding) % writeLinePadding;
            for (let i = 0; i < r; ++i)
                serial.writeString(" ");
        }
        serial.writeString(NEW_LINE);
    }
}    
//% color=#E7734B icon="\uf2db"
namespace Sensor {

    //% color=#000000
    //% block="Read button $pin (0-1)"
    //% group="Read Sensor"
    export function Readbutton(pin: buttonChannel): number {
        let read = buttonChannels[pin];
        pins.setPull(buttonChannels[pin], PinPullMode.PullUp);
        let reading = pins.digitalReadPin(read);
        return (reading);
    }
    //% color=#000000    
    //สำหรับ sensor
    //% block="Analog Sensor $pin (0-1023) "
    //% group="Read Sensor"
    export function lightSensor(pin: sensorChannel): number {
        let read = servoconChannels[pin];
        let reading = pins.analogReadPin(read);
        //let mappin = pins.map(reading, 0, 1023, 0, 10); // แปลงค่าจาก 0-1023 เป็น 0-10
        return Math.round(reading);
    }

    //% color=#000000    
    //สำหรับ sensor
    //% block="Digital Sensor $pin (0-1)"
    //% group="Read Sensor"
    export function Sensor(pin: sensorChannel): number {
        let read = sensorChannels[pin];
        let reading = pins.digitalReadPin(read);
        return (reading);
    }


        function signal_dht11(pin: DigitalPin): void {
        pins.digitalWritePin(pin, 0);
        basic.pause(18);
        let i = pins.digitalReadPin(pin);
        pins.setPull(pin, PinPullMode.PullUp);
    }

    
    //% color=#383838
    //สำหรับ Track Line
    //% block="Track Line $pin Black Color"
    //% group="Logic Sensor"
    export function isblack(pin: blackChannel): boolean {
        let read = blackChannels[pin];
        return pins.digitalReadPin(read) == 1;
    }
    //% color=#636262
    //สำหรับ Track Line
    //% block="Track Line $pin Not Black"
    //% group="Logic Sensor"
    export function notblack(pin: blackChannel): boolean {
        let read = blackChannels[pin];
        return pins.digitalReadPin(read) == 0;
    }
   

    //% color=#3D3430    
    //สำหรับ buttonpress
    //% block="On button $pin pressed"
    //% group="Logic Sensor"
    export function isButtonPressed(pin: buttonChannel): boolean {
        pins.setPull(buttonChannels[pin], PinPullMode.PullUp);
        let read = buttonChannels[pin];
        return pins.digitalReadPin(read) == 0;
    }


   


    

    function dht11_read(pin: DigitalPin): number {
        signal_dht11(pin);

        // Wait for response header to finish
        while (pins.digitalReadPin(pin) == 1);
        while (pins.digitalReadPin(pin) == 0);
        while (pins.digitalReadPin(pin) == 1);

        let value = 0;
        let counter = 0;

        for (let i = 0; i <= 32 - 1; i++) {
            while (pins.digitalReadPin(pin) == 0);
            counter = 0
            while (pins.digitalReadPin(pin) == 1) {
                counter += 1;
            }
            if (counter > 4) {
                value = value + (1 << (31 - i));
            }
        }
        return value;
    }

    export enum Dht11Result {
        //% block="Celsius"
        Celsius,
        //% block="Fahrenheit"
        Fahrenheit,
        //% block="humidity"
        humidity
    }

    //% group="thermometer"
    //% color=#76dbb1
    //% blockId=get_DHT11_value block="DHT11 set pin %pin_arg|get %dhtResult" blockExternalInputs=true
    //% pin_arg.fieldEditor="gridpicker" pin_arg.fieldOptions.columns=4
    //% pin_arg.fieldOptions.tooltips="false" pin_arg.fieldOptions.width="300"
    export function get_DHT11_value(pin_arg: DigitalPin, dhtResult: Dht11Result): number {
        switch (dhtResult) {
            case Dht11Result.Celsius: return (dht11_read(pin_arg) & 0x0000ff00) >> 8;
            case Dht11Result.Fahrenheit: return ((dht11_read(pin_arg) & 0x0000ff00) >> 8) * 9 / 5 + 32;
            case Dht11Result.humidity: return dht11_read(pin_arg) >> 24;
            default: return 0;
        }
    }



    //MLX90614_TEMPERATURE
    let MLX90614_I2C_ADDR = 0x5A

    function read_reg_uint16(reg: number): number {
        pins.i2cWriteNumber(MLX90614_I2C_ADDR, reg, NumberFormat.UInt8LE, true);
        return pins.i2cReadNumber(MLX90614_I2C_ADDR, NumberFormat.UInt16LE);
    }

    /**
     * temperature
     */
    //% color=#76dbb1
    //% blockId="MLX90614_TEMPERATURE" block="%temperature_origin temperature (°C)"
    //% weight=80 blockGap=8
    //% group="MLX90614 IR thermometer"
    export function temperature(temperature_origin: MLX90614_TEMPERATURE_ORIGIN): number {
        let t = read_reg_uint16(temperature_origin);
        return t * 0.02 - 273.15;
    }

    //% color=#76dbb1
    //sonar
    //% block="sonar %channel unit %unit"
    //% group="ect"
    //% unit.defl=PingUnit.Centimeters
    export function ping(channel: sonarPort, unit: PingUnit, maxCmDistance = 500): number {
        let trig = trigChanel[channel];
        let echo = echoChanel[channel];
        // send pulse
        pins.setPull(trig, PinPullMode.PullNone);
        pins.digitalWritePin(trig, 0);
        control.waitMicros(2);
        pins.digitalWritePin(trig, 1);
        control.waitMicros(10);
        pins.digitalWritePin(trig, 0);

        // read pulse
        const d = pins.pulseIn(echo, PulseValue.High, maxCmDistance * 58);

        switch (unit) {
            case PingUnit.Centimeters: return Math.idiv(d, 58);
            case PingUnit.Inches: return Math.idiv(d, 148);
            default: return d;
        }
    }
    export enum PingUnit {
        //% block="cm"
        Centimeters,
        //% block="inches"
        Inches,
        //% block="μs"
        MicroSeconds
    }
    //% color=#76dbb1
    //% group="ect"
    //% blockId=sensor_ping block="ultrasonic trig %trig|echo %echo|get distance %unit"
    //% trig.fieldEditor="gridpicker" trig.fieldOptions.columns=4
    //% trig.fieldOptions.tooltips="false" trig.fieldOptions.width="300"
    //% echo.fieldEditor="gridpicker" echo.fieldOptions.columns=4
    //% echo.fieldOptions.tooltips="false" echo.fieldOptions.width="300"
    export function sensor_ping(trig: DigitalPin, echo: DigitalPin, unit: PingUnit, maxCmDistance = 500): number {
        // send pulse
        pins.setPull(trig, PinPullMode.PullNone);
        pins.digitalWritePin(trig, 0);
        control.waitMicros(2);
        pins.digitalWritePin(trig, 1);
        control.waitMicros(10);
        pins.digitalWritePin(trig, 0);

        // read pulse
        const d = pins.pulseIn(echo, PulseValue.High, maxCmDistance * 58);

        switch (unit) {
            case PingUnit.Centimeters: return d / 58;
            case PingUnit.Inches: return d / 148;
            default: return d;
        }
    }
    //% group="ect"
    //สำหรับ motion PIR3pin
    //% color=#76dbb1
    //% blockId=octopus_pir weight=80 blockGap=30
    //% block="motion detector at pin %p"    
    
    export function PIR(p: sensorChannel): boolean {
        let b = sensorChannels[p];
        let a: number = pins.digitalReadPin(b);
        if (a == 1) {
            return true;
        } else return false;
    }

}



//% color=#E7734B icon="\uf48b"
//% groups="['Motor','Servo','Led', 'Read Sensor','MLX90614 IR thermometer','Logic Sensor','I2C LCD 1602']"
namespace Motor {

        //สำหรับ motor

    //% color=#E7734B
    //% direction.defl=MotorShaftDirection.HIGH
    //% block="Stop Motor $channel"
    //% group="Motor"
    export function motorStop(channel: MotorChannel): void {
        let dirPin = motorChannels[channel];
        let speedPin = motorSpeedPins[channel];

        pins.digitalWritePin(dirPin, 0);
        pins.analogWritePin(speedPin, 0);
    }

    //% color=#E7734B
    //% block="Motor $channel direction $direction speed $speed"
    //% speed.min=0 speed.max=255
    //% speed.defl=100
    //% direction.min=0 direction.max=1
    //% group="Motor"
    //% color=#E7734B
    export function motorControltest(channel: MotorChannel, direction: number, speed: number): void {
        let dirPin = motorChannels[channel];
        let speedPin = motorSpeedPins[channel];

        pins.digitalWritePin(dirPin, direction);
        pins.analogWritePin(speedPin, pins.map(speed, 0, 255, 0, 1023));
    }

    //% color=#E7734B
    //% block="Motor $channel direction $direction speed $speed"
    //% speed.min=0 speed.max=255
    //% speed.defl=100
    //% direction.defl=MotorShaftDirection.HIGH
    //% group="Motor"
    //% color=#E7734B
    export function motorControl(channel: MotorChannel, direction: MotorShaftDirection, speed: number): void {
        let dirPin = motorChannels[channel];
        let speedPin = motorSpeedPins[channel];

        pins.digitalWritePin(dirPin, direction);
        pins.analogWritePin(speedPin, pins.map(speed, 0, 255, 0, 1023));
    }
    //% color=#E84E19
    //สำหรับ servo180
    //% block"servo180 $pinSmini degrees $degrees"
    //% degrees.min=20 degrees.max=160
    //% degrees.defl=90
    //% group="Servo"
    export function MiniServo(pinSmini: servoChannel, degrees: number): void {
        let pinsmini= servoChannels[pinSmini];
        pins.servoWritePin(pinsmini, degrees);

    }
    //% color=#E84E19
    //สำหรับ servocon
    //% block"ContinuousServo $pinSV direction $direction"
    //% direction.defl=90
    //% group="Servo"
    export function ContinuousServo(pinSV: servoChannel, direction: svconShaft): void {
        let pinservo = servoChannels[pinSV];
        pins.servoWritePin(pinservo, direction);

    }
}
//% weight=5 color=#E7734B icon="\uf110"
namespace GigoLED {
    //% color=#FACB09
    //สำหรับ Led
    //% block="LED $leds Status $Status"
    //% Status.min=0 Status.max=1
    //% leds.defl=LEDChannel.D
    //% group="Led"
    export function ledtest(leds: LEDChannel, Status: number): void {
        let ledg = LEDChannels[leds];

        pins.digitalWritePin(ledg, Status);

    }

    //% color=#FACB09
    //สำหรับ Led
    //% block="LED $leds Status $Status"
    //% Status.defl=LEDShaftonoff.HIGH*
    //% leds.defl=LEDChannel.D
    //% group="Led"
    export function led(leds: LEDChannel, Status: LEDShaftonoff): void {
        let ledg = LEDChannels[leds];

        pins.digitalWritePin(ledg, Status);

    }
    //% color=#FACB09
    //toggle led
    //% blockId=LED block="LED %pin $ledstate"
    //% ledstate.shadow="toggleOnOff"
    //% expandableArgumentMode="toggle"
    //% pin.defl=LEDChannel.D
    //% group="Led"
    export function ledBrightness(pin: LEDChannel, ledstate: boolean): void {
        if (ledstate) {
            let pinled = LEDChannels[pin];
            pins.digitalWritePin(pinled, 1);
           
        }
        else {
            let pinled = LEDChannels[pin];
            pins.digitalWritePin(pinled, 0);
           
        }
    }
}

//% color=#E7734B icon="\uf26c"
namespace LCD1602 {
    //LCD i2c
    
    
    let i2cAddr: number // 0x3F: PCF8574A, 0x27: PCF8574
    let BK: number      // backlight control
    let RS: number      // command/data

    // set LCD reg
    function setreg(d: number) {
        pins.i2cWriteNumber(i2cAddr, d, NumberFormat.Int8LE)
        basic.pause(1)
    }

    // send data to I2C bus
    function set(d: number) {
        d = d & 0xF0
        d = d + BK + RS
        setreg(d)
        setreg(d + 4)
        setreg(d)
    }

    // send command
    function cmd(d: number) {
        RS = 0
        set(d)
        set(d << 4)
    }

    // send data
    function dat(d: number) {
        RS = 1
        set(d)
        set(d << 4)
    }

    // auto get LCD address
    function AutoAddr() {
        let k = true
        let addr = 0x20
        let d1 = 0, d2 = 0
        while (k && (addr < 0x28)) {
            pins.i2cWriteNumber(addr, -1, NumberFormat.Int32LE)
            d1 = pins.i2cReadNumber(addr, NumberFormat.Int8LE) % 16
            pins.i2cWriteNumber(addr, 0, NumberFormat.Int16LE)
            d2 = pins.i2cReadNumber(addr, NumberFormat.Int8LE)
            if ((d1 == 7) && (d2 == 0)) k = false
            else addr += 1
        }
        if (!k) return addr

        addr = 0x38
        while (k && (addr < 0x40)) {
            pins.i2cWriteNumber(addr, -1, NumberFormat.Int32LE)
            d1 = pins.i2cReadNumber(addr, NumberFormat.Int8LE) % 16
            pins.i2cWriteNumber(addr, 0, NumberFormat.Int16LE)
            d2 = pins.i2cReadNumber(addr, NumberFormat.Int8LE)
            if ((d1 == 7) && (d2 == 0)) k = false
            else addr += 1
        }
        if (!k) return addr
        else return 0

    }
    
    
    //% color=#045F14
    //% blockId="I2C_LCD1620_SET_ADDRESS" block="LCD (A) Address %addr"
    //% weight=100 blockGap=8
    //% parts=LCD1602_I2C trackArgs=0
    //% group="LCD i2c"
    export function LcdInit(Addr: number) {
        if (Addr == 0) i2cAddr = AutoAddr()
        else i2cAddr = Addr
        BK = 8
        RS = 0
        cmd(0x33)       // set 4bit mode
        basic.pause(5)
        set(0x30)
        basic.pause(5)
        set(0x20)
        basic.pause(5)
        cmd(0x28)       // set mode
        cmd(0x0C)
        cmd(0x06)
        cmd(0x01)       // clear
    }

    //% color=#045F14
    //% blockId="I2C_LCD1620_SHOW_NUMBER" block="show number %n|at x %x|y %y"
    //% weight=90 blockGap=8
    //% x.min=0 x.max=15
    //% y.min=0 y.max=1
    //% parts=LCD1602_I2C trackArgs=0
    //% group="LCD i2c"
    export function ShowNumber(n: number, x: number, y: number): void {
        let s = n.toString()
        ShowString(s, x, y)
    }

    //% color=#045F14
    //% blockId="I2C_LCD1620_SHOW_STRING" block="show string %s|at x %x|y %y"
    //% weight=90 blockGap=8
    //% x.min=0 x.max=15
    //% y.min=0 y.max=1
    //% parts=LCD1602_I2C trackArgs=0
    //% group="LCD i2c"
    export function ShowString(s: string, x: number, y: number): void {
        let a: number

        if (y > 0)
            a = 0xC0
        else
            a = 0x80
        a += x
        cmd(a)

        for (let i = 0; i < s.length; i++) {
            dat(s.charCodeAt(i))
        }
    }

    //% color=#045F14
    //% blockId="I2C_LCD1620_ON" block="LCD on"
    //% weight=81 blockGap=8
    //% parts=LCD1602_I2C trackArgs=0
    //% group="LCD i2c"
    export function on(): void {
        cmd(0x0C)
    }

    //% color=#045F14
    //% blockId="I2C_LCD1620_OFF" block="LCD off"
    //% weight=80 blockGap=8
    //% parts=LCD1602_I2C trackArgs=0
    //% group="LCD i2c"
    export function off(): void {
        cmd(0x08)
    }

    //% color=#045F14
    //% blockId="I2C_LCD1620_CLEAR" block="clear"
    //% weight=85 blockGap=8
    //% parts=LCD1602_I2C trackArgs=0
    //% group="LCD i2c"
    export function clear(): void {
        cmd(0x01)
    }

    //% color=#045F14
    //% blockId="I2C_LCD1620_BACKLIGHT_ON" block="light on"
    //% weight=71 blockGap=8
    //% parts=LCD1602_I2C trackArgs=0
    //% group="LCD i2c"
    export function BacklightOn(): void {
        BK = 8
        cmd(0)
    }

    //% color=#045F14
    //% blockId="I2C_LCD1620_BACKLIGHT_OFF" block="light off "
    //% weight=70 blockGap=8
    //% parts=LCD1602_I2C trackArgs=0
    //% group="LCD i2c"
    export function BacklightOff(): void {
        BK = 0
        cmd(0)
    }



}




//-----------------------------------



