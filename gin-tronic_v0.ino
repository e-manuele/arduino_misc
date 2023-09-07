const int pulsantePin = 2; // Pin del pulsante
const int relayPin = 7;    // Pin del relay

void setup() {
  pinMode(pulsantePin, INPUT_PULLUP); // Imposta il pin del pulsante come input con pull-up
  pinMode(relayPin, OUTPUT);          // Imposta il pin del relay come output
}

void loop() {
  if (digitalRead(pulsantePin) == LOW) { // Verifica se il pulsante è premuto (LOW)
    digitalWrite(relayPin, HIGH);        // Accendi il relay
    delay(5000);                         // Attendere 5 secondi (5000 millisecondi)
    digitalWrite(relayPin, LOW);         // Spegni il relay dopo 5 secondi
  }
}
