const int potPin = A0;  // Pin del potenciómetro
int lectura = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("=== Maestro iniciado ===");
}

void loop() {
  lectura = analogRead(potPin);         // Leer potenciómetro (0–1023)
  Serial.println(lectura);              // Enviar lectura al esclavo
  delay(100);                           // Espera 100 ms
}
