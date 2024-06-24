/*
    Project name : ESP32 LCD 16x4 Display
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-lcd-16x4-display
*/

#include <LiquidCrystal.h>

// Define LCD pin mapping to ESP32 GPIO pins
const int rs = 12, en = 14, d4 = 26, d5 = 25, d6 = 33, d7 = 32;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Initialize the LCD with 16 columns and 4 rows
  lcd.begin(16, 4);

  // Print a message to each row of the LCD
  lcd.setCursor(0, 0);
  lcd.print("Line 1: Hello");
  lcd.setCursor(0, 1);
  lcd.print("Line 2: World!");
  lcd.setCursor(0, 2);
  lcd.print("Line 3: ESP32");
  lcd.setCursor(0, 3);
  lcd.print("Line 4: LCD 16x4");
}

void loop() {
  // You can update the display or add additional functionality here
  // For now, we'll just print the number of seconds since reset on the first line
  lcd.setCursor(0, 0);
  lcd.print("Seconds: ");
  lcd.print(millis() / 1000);
  delay(1000); // Delay for 1 second
}
