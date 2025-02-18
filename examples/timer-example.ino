#include "src/MsTimer/Timer.h"

Timer timer(1000);

void setup() {
  Serial.begin(9600);
  delay(500);

  timer.setNumRepeats(5);
  timer.start();
}

void loop() {
  static uint8_t count = 0;
  if(timer.tick())
    Serial.println(++count);
}
