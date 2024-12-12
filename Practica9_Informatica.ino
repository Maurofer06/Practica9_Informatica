/*
 * Esta es una practica de encender un LED a la vez que el integrado de la placa arduino aprovechando el pin numero 13 que esta conectado con este LED
 * Autor: Mauro Fernandez 
 *Data: 12/12/2024
*/

// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
}
