char voltage_output_numerator = 0; // voltage_output_numerator/255 * 5 volts
const char led_pin_label = 11;
void setup()
{

}

void loop()
{
  analogWrite(led_pin_label, voltage_output_numerator);
  voltage_output_numerator = voltage_output_numerator + 10;
 delay(1000);
 if(voltage_output_numerator >= 250)
 {
   voltage_output_numerator = 0;
 }
}
