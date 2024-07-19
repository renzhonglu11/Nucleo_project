
// #include <STM32FreeRTOS.h>
#include <Arduino.h>
#include <myDisplay.h>


#ifndef LED_BUILTIN
  #define LED_BUILTIN PC7
#endif


void setup()
{
  Serial.begin(9600);
  initializeMyDisplay();
}

void loop()
{ 

  // analogWrite(PA0, brightness);
  // brightness = brightness + fadeAmount;
  // if (brightness <= 0 || brightness >= 255) {
  //   fadeAmount = -fadeAmount ;
  // }
  // int sensorValue = analogRead(PA0);


  // Serial.print("sensorValue = ");
  // Serial.print(sensorValue,DEC);
  // Serial.print("test");

  // delay(1000);

}