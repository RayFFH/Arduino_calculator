#include <LiquidCrystal_I2C.h>

void setup() {
Serial.begin(9600)
lcd.init();
lcd.backlight();
pinMode(signalPin,OUTPUT);
}

void loop() {
  customKey+ customKeypad.getKey();
  switch(customKey)
  {
    case '0'....'9':
    first = first * 10 + (customkey - '0');
    
  }
}
