#include <HIDKeyboard.h>
 
HIDKeyboard keyboard;

void setup() {
  keyboard.begin(); // Start communication
  delay(200);

keyboard.pressKey(GUI,'R'); // Press the GUI (Windows) key
  keyboard.releaseKey();
  delay(200);
  keyboard.println("E:\\Background Music\\CARTOON - Howling (Ft. Asena) [NCS Release].mp3");
  keyboard.pressSpecialKey(ENTER); 
  keyboard.releaseKey();
  delay(300);
  }
void loop(){

}
