#include "myfunctions.h"

void setup() {
    pinMode(13, OUTPUT);
}

void loop() {
    blinkLED(13, 500);
}