#include "myDisplay.h"
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>



Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

uint32_t initializeMyDisplay(){
  // ensure to use the correct overload function of begin() to specify the pins
  // uint32_t sdaPin = D68;
  // uint32_t sclPin = D69;
  // Wire.begin(sdaPin,sclPin);
   Wire.setSDA(D68);
   Wire.setSCL(D69);
   Wire.begin();
   if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  } // 3.3 V

  display.clearDisplay();


  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,32);
  display.println("Hi, Renzhong!");
  display.display();

  delay(2000);

  return 0;

}