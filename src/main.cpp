#include <Arduino.h>
#include "motor.h"
#include "sensors.h"
#include "functions.h"

GYRO bno;


void setup() {
  bno.setup();
  Serial.begin(115200);
  buzzer.windowsXP();
  bno.reset();
}

void loop() {
  bno.get();
  Serial.println(bno.dir);
}
