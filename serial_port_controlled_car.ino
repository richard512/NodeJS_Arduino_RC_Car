#include <DigitalPin.h>

DigitalPin forward(13, true);
DigitalPin backward(12, true);
DigitalPin right(7, true);
DigitalPin left(8, true);

void setup(){
  Serial.begin(9600);
}

void loop() {
   if (Serial.available()) {
    int val = int(Serial.read()) - int('0');
    if (val == 0) {
      backward.off();
      right.off();
      forward.on();
      left.on();
    } else if(val == 1){
      backward.off();
      right.off();
      left.off();
      forward.on();
    } else if(val == 2) {
      backward.off();
      left.off();
      right.on();
      forward.on();
    } else if (val == 3) {
      right.off();
      forward.off();
      backward.on();
      left.on();
    } else if(val == 4){
      right.off();
      left.off();
      forward.off();
      backward.on();
    } else if(val == 5) {
      left.off();
      forward.off();
      backward.on();
      right.on();
    } else if(val == 6) {
      left.off();
      forward.off();
      backward.off();
      right.off();
    }
    Serial.flush();
  }
}
