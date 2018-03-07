#include <Servo.h>//biblioteca para o servo motor
Servo myservo; //objetos da classe servo

void setup() {
  // put your setup code here, to run once:
  myservo.attach(10); //indica que myservo será na porta 10

}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(0);
  delay(1000);
  myservo.write(90);
  delay(1000);
  myservo.write(180);
  delay(1000);

}
