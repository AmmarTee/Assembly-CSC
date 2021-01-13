#include "DigiKeyboard.h"
#define KEY_UP_ARROW 0x52
#define KEY_DOWN_ARROW 0x51
#define KEY_LEFT_ARROW 0x50
#define KEY_RIGHT_ARROW 0x4F

void setup(){
  
  
}

void loop() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("clear");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("python /home/pi/Desktop/blink.py &");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.delay(100);
  DigiKeyboard.print("python /home/pi/Desktop/blink1.py &");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.delay(100);
  DigiKeyboard.print("python /home/pi/Desktop/blink2.py &");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  while (true){
    DigiKeyboard.sendKeyStroke(KEY_UP_ARROW);
    DigiKeyboard.sendKeyStroke(KEY_UP_ARROW);
    DigiKeyboard.sendKeyStroke(KEY_UP_ARROW);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(100);
  
  }
 }
