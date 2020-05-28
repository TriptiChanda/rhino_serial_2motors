#include<SoftwareSerial.h>

int led = 13;

void setup() {
  Serial1.begin(9600);
  Serial2.begin(9600);

  delay(3000);
  pinMode(led , OUTPUT);

  digitalWrite(led , HIGH);

  delay(5000);
Serial1.println("M255");
delay(500);
}

void loop() {
  Serial1.println("S100");
  Serial2.println("S-100");
  delay(3000);

  Serial1.println("S-100");
  Serial2.println("S100");
  delay(3000);

  Serial1.println("G3600");
  Serial2.println("G3600");
  delay(3000);
  }
