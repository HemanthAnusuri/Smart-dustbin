#include <Servo.h>

const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 3;
long duration;
int distance;
Servo lidServo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lidServo.attach(servoPin);
  lidServo.write(0); // Lid closed
  Serial.begin(9600);
}

void loop() {
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; // in cm

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance <= 10) {
    lidServo.write(90); // Open lid
    delay(2000);        // Wait for 2 seconds
    lidServo.write(0);  // Close lid
  }

  delay(500); // Wait before next check
}
