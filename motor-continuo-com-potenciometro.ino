  #include <Servo.h>//biblioteca para o servo motor
  const int potenciometro = 0; // pino de entrada do potenciômetro
  int valor = 0;
  Servo myservo, mys; //objetos da classe servo
  void setup()
  {
      myservo.attach(10); //indica que myservo será na porta 10
      Serial.begin(9600);
  }
  void loop()
  {
     int motorPower;
     valor = analogRead(potenciometro);
     motorPower = map(valor, 15, 1020, 1000, 2000);
     Serial.println(motorPower);
     //delay(100);
     myservo.writeMicroseconds(motorPower); //horário
     delay(1000);
     //myservo.writeMicroseconds(1000); //anti horário
     //delay(1000);
     //myservo.writeMicroseconds(1500); //parado
     //delay(1000);
  }
