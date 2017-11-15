// the setup function runs once when you press reset or power the board
void setup()
{
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}
// the loop function runs over and over again forever
void loop()
{
  digitalWrite(13, HIGH);   // Turn on the LED

  delay(1000);              // Wait for one second
 
  digitalWrite(13, LOW);    // Turn off the LED
 
  delay(1000);              // Wait for one second
}