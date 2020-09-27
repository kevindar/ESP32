#include <Arduino.h>

#define LED_1 BUILTIN_LED
#define LED_2 4
#define LED_3 18
#define LED_4 19

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println("Hello World!");
  if(Serial.available()){
    char data = Serial.read();
    Serial.print("LED yang menyala : ");
    Serial.println(data);

    if(data == '1'){
      digitalWrite(LED_1, HIGH);
      delay(2000);
      digitalWrite(LED_1, LOW);
      delay(2000);
    }
    if(data == '2'){
      digitalWrite(LED_2, HIGH);
      delay(2000);
      digitalWrite(LED_2, LOW);
      delay(2000);
    }
    if(data == '3'){
      digitalWrite(LED_3, HIGH);
      delay(2000);
      digitalWrite(LED_3, LOW);
      delay(2000);
    }
    if(data == '4'){
      digitalWrite(LED_4, HIGH);
      delay(2000);
      digitalWrite(LED_4, LOW);
      delay(2000);
    }
  }

}


