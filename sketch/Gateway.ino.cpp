#include <Arduino.h>
#line 1 "d:\\Cuong_103\\Arduino\\Gateway\\Gateway.ino"
// %H:%M:%S.%L:     


#include <SPI.h>              // include libraries
#include <LoRa.h>
#include <LiquidCrystal_I2C.h>

// set the LCD number of columns and rows
int lcdColumns = 20;
int lcdRows = 4;

// set LCD address, number of columns and rows
// if you don't know your display address, run an I2C scanner sketch
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);  

#line 16 "d:\\Cuong_103\\Arduino\\Gateway\\Gateway.ino"
void setup();
#line 23 "d:\\Cuong_103\\Arduino\\Gateway\\Gateway.ino"
void loop();
#line 16 "d:\\Cuong_103\\Arduino\\Gateway\\Gateway.ino"
void setup(){
  // initialize LCD
  lcd.init();
  // turn on LCD backlight                      
  lcd.backlight();
}

void loop(){
  // set cursor to first column, first row
  lcd.setCursor(0, 0);
  // print message
  lcd.print("Hello, World!");
  delay(1000);
  // clears the display to print new message
  lcd.clear();
  // set cursor to first column, second row
  lcd.setCursor(0,1);
  lcd.print("Hello, World!");
  delay(1000);
  lcd.clear(); 
}

