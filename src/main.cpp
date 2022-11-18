#include <Arduino.h>
#include "motor.h"
#include "sensors.h"

GYRO bno;

void setup() {
  bno.setup();
  Serial.begin(115200);
}

void loop() {
  bno.get();
  Serial.println(bno.dir);
}
