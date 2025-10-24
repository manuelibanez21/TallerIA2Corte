#include <Servo.h>

Servo myservo;
int angulo = 0;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);  // Servo conectado al pin 9
  Serial.println("=== Esclavo iniciado ===");
}

void loop() {
  if (Serial.available() > 0) {
    int valor = Serial.parseInt();  // Recibe número enviado
    angulo = map(valor, 0, 1023, 0, 180); // Escala 0–1023 a 0–180°
    myservo.write(angulo);          // Mueve el servo
    Serial.print("Servo en: ");
    Serial.print(angulo);
    Serial.println("°");
  }
}
