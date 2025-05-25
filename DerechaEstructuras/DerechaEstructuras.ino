/*Programa DerechaEstructuras, para el encendido
 * de leds de vuelta a la derecha
 */
//Variables
int bot=2;
int led[]={4,5,6,7,8,9,10,11,12,13};
int numLeds=10;
int tiempoRet=400;
int estePin; 
int cuenta_der=0;
boolean bot_der=LOW;

void setup() {
  pinMode(bot,INPUT);
  for( estePin=0; estePin<numLeds; estePin++)
  {
    pinMode(led[estePin],OUTPUT);
  }
}

//Ruitna Derehca

void loop() {
  bot_der=digitalRead(bot);
  if(bot_der)

switch (cuenta_der)
{
  case 0:
    digitalWrite(led[0],HIGH);
    digitalWrite(led[8],HIGH);
    digitalWrite(led[6],HIGH);
    break;

  case 1:
    digitalWrite(led[1],HIGH);
    digitalWrite(led[9],HIGH);
    digitalWrite(led[5],HIGH);
    break;

  case 2:
    digitalWrite(led[2],HIGH);
    digitalWrite(led[3],HIGH);
    digitalWrite(led[4],HIGH);
    break;

  default:
  ;
}
  delay (tiempoRet);
  cuenta_der++;
  if (cuenta_der > 3)
  {
    cuenta_der = 0;
  }
  for (estePin = 0; estePin < numLeds; estePin++)
  {
    digitalWrite (led[estePin],LOW);
  }
}
