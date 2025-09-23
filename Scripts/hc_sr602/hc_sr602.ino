#define CAPTEUR_PIN 4

void setup() {
  Serial.begin(9600);
  pinMode(CAPTEUR_PIN, INPUT);
}

void loop() {
  int presence = digitalRead(CAPTEUR_PIN);

  if (presence == HIGH) {
    Serial.println("Présence détectée !");
  } else {
    Serial.println("Aucune présence détectée.");
  }

  delay(100);  // Attendre un court laps de temps entre les lectures
}
