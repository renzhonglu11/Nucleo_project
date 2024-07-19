
#ifndef MY_DISPLAY_H
#define MY_DISPLAY_H

#include <stdint.h>


#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     -1

#define SCREEN_ADDRESS 0x3C


uint32_t initializeMyDisplay();


#endif /* MY_DISPLAY_H */