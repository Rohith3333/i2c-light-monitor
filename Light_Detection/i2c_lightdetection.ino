#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define LDR_PIN A0            // Analog input

LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27

void setup() {
  lcd.init();
  lcd.backlight();
  
  lcd.setCursor(0, 0);
  lcd.print("Light monitoring");
  delay(2000);
  lcd.clear();
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);         // 0–1023
  
  // Line 1: Light Level
  lcd.setCursor(0, 0);
  lcd.print("Light: ");
  if (ldrValue < 15) {
  lcd.print("BRIGHT ");
  } 
 else {
  lcd.print("DARK   ");
}

  lcd.print("     "); // Clear extras

    delay(500);
}
