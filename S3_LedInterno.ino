#define LED_RGB 48 // Cambia a 38 si tu placa es la revisión v1.1

void setup() {
  // No requiere pinMode para neopixelWrite
}

void loop() {
  neopixelWrite(LED_RGB, 64, 0, 0);  // Rojo (brillo moderado)
  delay(500);
  neopixelWrite(LED_RGB, 0, 64, 0);  // Verde
  delay(500);
  neopixelWrite(LED_RGB, 0, 0, 64);  // Azul
  delay(500);
  neopixelWrite(LED_RGB, 0, 0, 0);   // Apagado
  delay(500);
}
