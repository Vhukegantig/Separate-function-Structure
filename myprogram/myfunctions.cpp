#include "myfunctions.h"
#include <Arduino.h>

void blinkLED(int pin, int delayTime) {
    digitalWrite(pin, HIGH);
    delay(delayTime);
    digitalWrite(pin, LOW);
    delay(delayTime);
}