#include <LiquidCrystal.h>
/* pin wiring
 * ground: vss,V0,RW,K
 * 5V : VDD
 * 3.3V: A
 * 
 * 
*/
//  required a 2 ohm resistor on vdd for screen clarity
 //    LCD side | arduino side                  
const int    rs = 12,
             en = 11,
             d4 = 5,
             d5 = 4,
             d6 = 3,
             d7 = 2;
                  
 LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.begin(16,2);
  lcd.print("First line");
  lcd.setCursor(0,1);
  lcd.print("Second line");
  delay(500);
}
