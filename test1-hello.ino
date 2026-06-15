#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin(KeyboardLayout_fr_FR);
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('t');
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.println("echo 'Hello World'");

  Keyboard.end();
}

void loop() {}
