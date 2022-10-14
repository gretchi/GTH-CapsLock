#include <Arduino.h>
// #include "pio_usb.h"

const int PICO_LED = 25;

void setup()
{
  // put your setup code here, to run once:
  pinMode(PICO_LED, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(PICO_LED, HIGH);
  delay(1000);

  digitalWrite(PICO_LED, LOW);
  delay(1000);
}
