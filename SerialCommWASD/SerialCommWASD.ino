const int ledPin = 13; // the pin that the LED is attached to
int incomingByte;      // a variable to read incoming serial data into

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the LED pin as an output:
}

void loop() {
  // see if there's incoming serial data:
  if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();

    // if it's a capital H (ASCII 72), turn on the LED:
    if (incomingByte == 'W' || incomingByte == 'w') {
      Serial.println("Forward");
    }
    if (incomingByte == 'S' || incomingByte == 's') {
      Serial.println("Back");
    }
    if (incomingByte == 'A' || incomingByte == 'a') {
      Serial.println("Left");
    }
    if (incomingByte == 'D' || incomingByte == 'd') {
      Serial.println("Right");
    }
  }
}



