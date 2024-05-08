#include <Arduino.h>
// preferable pins:
//GPIO 5   D1
//GPIO 4   D2
//GPIO 14  D5
//GPIO 12  D6
#define LED_ONE 5
#define LED_TWO 4
#define LED_THREE 14
#define LED_FOUR 12


void setup() {
  pinMode(LED_ONE, OUTPUT);
  digitalWrite(LED_ONE,HIGH);
  pinMode(LED_TWO, OUTPUT);
  digitalWrite(LED_TWO,HIGH);
  pinMode(LED_THREE, OUTPUT);
  digitalWrite(LED_THREE,HIGH);
  pinMode(LED_FOUR, OUTPUT);
  digitalWrite(LED_FOUR,HIGH);
}

int iterationDone = -5;
void loop() {
  if(iterationDone > 0) return;
  digitalWrite(LED_ONE,LOW);
  delay(1000);
  digitalWrite(LED_TWO,LOW);
  delay(1000);
  digitalWrite(LED_THREE,LOW);
  delay(1000);
  digitalWrite(LED_FOUR,LOW);
  delay(1000);
  digitalWrite(LED_ONE,HIGH);
  digitalWrite(LED_TWO,HIGH);
  digitalWrite(LED_THREE,HIGH);
  digitalWrite(LED_FOUR,HIGH);
  delay(1000);
  iterationDone++;
}