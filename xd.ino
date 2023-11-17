#include <LiquidCrystalRus.h>

constexpr uint8_t PIN_RS = 6;
constexpr uint8_t PIN_EN = 7;
constexpr uint8_t PIN_DB4 = 8;
constexpr uint8_t PIN_DB5 = 9;
constexpr uint8_t PIN_DB6 = 10;
constexpr uint8_t PIN_DB7 = 11;
 
int button = 5;
int button1 = 3;
int count = 0;

LiquidCrystalRus lcd(PIN_RS, PIN_EN, PIN_DB4, PIN_DB5, PIN_DB6, PIN_DB7);

void change_number(int number){
  lcd.clear();
  lcd.setCursor(4, 1);
  count += number;
  lcd.print(count);
  lcd.setCursor(0, 0);
  lcd.print("Текущее число:");
}

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Введите ваш");
  lcd.setCursor(0, 1);
  lcd.print("номер телефона");
}
 
void loop() {
  if (digitalRead(button) == 1){
    change_number(1);
    delay(20);
  }
  else if (digitalRead(button1) == 1){
    change_number(-1);
    delay(20);
  }
}

