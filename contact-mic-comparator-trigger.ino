
float contact_mic = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
double mic_value = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  mic_value = analogRead(contact_mic);
  // turn the ledPin on
  if (sin(mic_value) > 0.83) {
    digitalWrite(13, HIGH);
  //int print(contact_mic);
    delay(2*1000);
  }
  else {
    digitalWrite(13, LOW);
  }
}