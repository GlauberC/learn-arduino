  #include <Servo.h>//biblioteca para o servo motor
  Servo myservo, mys; //objetos da classe servo
  void setup()
  {
      myservo.attach(10); //indica que myservo será na porta 10
  }
  void loop()
  {
     myservo.writeMicroseconds(2000); //horário
     delay(1000);
     myservo.writeMicroseconds(1000); //anti horário
     delay(1000);
     myservo.writeMicroseconds(1500); //parado
     delay(2000);
  }
