#include <Servo.h>

Servo servoMotor;
Servo servoMotor2;
char lectura;



void setup() {
  Serial.begin(9600);
  servoMotor.attach(4);
  servoMotor2.attach(5);
}

void loop() {
lectura=Serial.read(); 

//servoMotor.write(0);
//servoMotor2.write(0);
//delay(4000);
//servoMotor.write(90);
//servoMotor2.write(200);
//delay(1000);
//servoMotor.write(0);
//servoMotor2.write(0);
//delay(4000);




if (lectura =='A'){
  servoMotor.write(0);
  delay(1000);
  servoMotor.write(90);
  delay(1000);
  servoMotor.write(0);
}
if (lectura=='B'){
  servoMotor.write(0);
  delay(1000);
  servoMotor.write(90);
  delay(2000);
  servoMotor.write(0);
  }
if (lectura=='C'){
  servoMotor.write(0);
  delay(1000);
  servoMotor.write(90);
  delay(4000);
  servoMotor.write(0);
  }
if (lectura=='D'){
  servoMotor.write(0);
  delay(1000);
  servoMotor.write(200);
  delay(6000);
  servoMotor.write(0);    
  }
if (lectura =='E'){
  servoMotor2.write(0);
  delay(1000);
  servoMotor2.write(200);
  delay(1000);
  servoMotor2.write(0);
       
            
    }
if (lectura=='F'){
  servoMotor2.write(0);
  delay(1000);
  servoMotor2.write(200);
  delay(2000);
  servoMotor2.write(0);
  }
if (lectura=='G'){
  servoMotor2.write(0);
  delay(1000);
  servoMotor2.write(200);
  delay(4000);
  servoMotor2.write(0);
  }
if (lectura=='H'){
  servoMotor2.write(0);
  delay(1000);
  servoMotor2.write(200);
  delay(6000);
  servoMotor2.write(0);
  }
if (lectura=='I'){
  servoMotor2.write(0);
  delay(1000);
  servoMotor2.write(200);
  delay(8000);
  servoMotor2.write(0);
  }
if (lectura=='J'){
  servoMotor2.write(0);
  delay(1000);
  servoMotor2.write(200);
  delay(10000);
  servoMotor2.write(0);
  } 
  
}