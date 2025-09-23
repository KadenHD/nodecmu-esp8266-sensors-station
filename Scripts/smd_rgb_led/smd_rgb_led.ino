const int RED_PIN = 7;
const int GREEN_PIN = 6;
const int BLUE_PIN = 5;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  
  randomSeed(analogRead(0)); // Seed the random number generator with an analog input value
}

void loop() {
  // Generate random values for each color component (0-255)
  int redValue = random(256);
  int greenValue = random(256);
  int blueValue = random(256);

  // Set the LED color and intensity using PWM
  analogWrite(RED_PIN, redValue);
  analogWrite(GREEN_PIN, greenValue);
  analogWrite(BLUE_PIN, blueValue);

  // Delay for a short period of time
  delay(200);
}
