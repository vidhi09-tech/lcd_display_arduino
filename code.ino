//pin declartaion
//pin mode declaration
//pin data declaration

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
    lcd.begin(16, 2);
    lcd.print("hello vidhi");
}
void loop()
{
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print(millis() / 1000);
}