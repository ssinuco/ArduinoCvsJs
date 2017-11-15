// We'll use analog input 0 to measure the temperature sensor's signal pin.
const int temperaturePin = 0;

void setup()
{
  //Set Arduino's serial port speed
  Serial.begin(9600);
}


void loop()
{

  float voltage = analogRead(temperaturePin) * 0.004882814;
  
  float degreesC = (voltage - 0.5) * 100.0;
  
  Serial.print("voltage: ");
  Serial.print(voltage);
  Serial.print("  deg C: ");
  Serial.println(degreesC);
   
  delay(1000); // repeat once per second (change as you wish!)
}
