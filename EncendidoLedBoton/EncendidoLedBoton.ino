
int led=4;
int pinBoton=7;
int estado;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
  pinMode(pinBoton,INPUT);
}

// the loop function runs over and over again forever
void loop() {
  estado=digitalRead(pinBoton);
  if(estado==0)
  {
  digitalWrite(4, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);        // wait for a second
  }
  else
  {
  digitalWrite(4, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  }
}
