// remember all sketches start with a setup which is run once
void setup()
{
  //tell the arduino which LED pins to use
  pinMode(13, OUTPUT);

  //we will turn the LED on for 2 seconds and then off again so that we can tell sketch is starting
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);

  //we will wait 2 seconds before we start the main loop
  delay(2000);  
  
}

// remember all sketches then have a main loop which runs forever after setup
void loop()
{
  // we have created some functions s_morse and o_morse which blink leds see their definitions further down
  s_morse();
  o_morse();
  s_morse();

  // wait for 2 seconds and then go back to start of loop
  delay(2000);  
}

// this is the s_morse function 
void s_morse()
{
  // we use the for loop to run the code below 3 times
  for(int n=0; n<3; n++)
  {
    // first we set the pin HIGH which turns the LED on
    digitalWrite(13, HIGH);
    delay(500);
    // we then set the pin LOW which turns it off
    digitalWrite(13, LOW);
    delay(250);  
  }
}

// this is the o_morse function - notice the time the LED is HIGH is longer than the s_morse
void o_morse()
{
  for(int n=0; n<3; n++)
  {
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(250);  
  }
}

