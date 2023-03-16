#include <LiquidCrystal.h> //Including LCD library
LiquidCrystal lcd(1, 2, 4, 5, 6, 7);

int baselineTemp = 40;
int celsius = 0;
int fahrenheit = 0;

void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(0, 0);
  lcd.print("  Temperature:");
  lcd.setCursor(0,1);
  pinMode(A0, INPUT);
}

void loop()
{
  celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  fahrenheit = ((celsius * 9) / 5 + 32);
  lcd.print("   ");
  lcd.print(celsius);
  lcd.print(" C");
  lcd.print("  ");
  lcd.print(fahrenheit);
  lcd.print(" F");
  delay(1500);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("  Temperature:");
  lcd.setCursor(0,1);
}
