//% color="#AA278D"
namespace joy {
    
    //% block="P11 pressed"
    export function onButtonPressed(body: () => void) {
        //pins.setPull(DigitalPin.P11, PinPullMode.Up); 
        if (pins.digitalReadPin(DigitalPin.P11) == 0) {
            body();
        }
    }
}
