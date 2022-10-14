/*
 
  Traffic light project

  https://khaledhalim.com/html/p_trafficLight.html
  
*/

#define rled 7  // define pin 7 as rled
#define yled 6  // define pin 7 as rled
#define gled 5  // define pin 7 as rled

void setup()
{
  pinMode(rled, OUTPUT);  // initialize digital pin rled as an output.
  pinMode(yled, OUTPUT);  // initialize digital pin yled as an output.
  pinMode(gled, OUTPUT);  // initialize digital pin gled as an output.
}

void loop()
{
  digitalWrite(rled, HIGH); // turn the red led on 
  digitalWrite(yled, LOW); // turn the yellow led off 
  digitalWrite(gled, LOW); // turn the green led off 
  delay(3000);              // wait for 3 second
  digitalWrite(rled, LOW); // turn the red led off 
  digitalWrite(yled, HIGH); // turn the yellow led on 
  digitalWrite(gled, LOW); // turn the green led off 
  delay(3000);              // wait for 3 second
  digitalWrite(rled, LOW); // turn the red led off 
  digitalWrite(yled, LOW); // turn the yellow led off
  digitalWrite(gled, HIGH); // turn the green led on 
  delay(3000);              // wait for 3 second
}
