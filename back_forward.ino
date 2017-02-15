#include <DigitalPin.h> // from BasicLibrary

DigitalPin forward(13);
DigitalPin backward(12);

void setup(){
}

void loop() {
 backward.off();
 forward.on();
 delay(1000); 
 forward.off();
 backward.on();
 delay(1000);
}
