#include "Servo.h"

int potPin = A0;
int potVal = 0;
int threshold = 512;
servo serv1;
void setup() {
  serv1.attach(6);
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(potPin);
  if (potVal >= threshold){
    serv1.write(90);
  } else {
    serv1.write(0);
  }
  Serial.println(potVal);
  delay(10);
}
