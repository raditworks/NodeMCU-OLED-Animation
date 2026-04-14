#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "frame.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


const int numFrames = 201; // Jumlah frame

void setup() {
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Alamat I2C: 0x3C or 0x3D
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  display.clearDisplay();
  display.display();
}

void loop() {
  for(int i=0; i<numFrames; i++){
    display.clearDisplay();
    // Menggambar frame ke-i
    display.drawBitmap(0, 0, animation[i], 128, 64, WHITE);
    display.display();
    delay(25); // Kecepatan animasi
  }
}
