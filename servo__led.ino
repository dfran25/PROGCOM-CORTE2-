#include <Servo.h> //importamos libreria
     
int led = 13;   // Pin para el led
                     
Servo myservo;  // nombre de funcion para el servo 
                
          
void setup() 
{ 
  
  pinMode(led, OUTPUT);   // iniciamos el led.  
  myservo.attach(9);      // asignamos el pin 9 para el servo. 
} 
     
void loop() 
{ 
  digitalWrite(led, HIGH);   // encendido led
  delay(1000);               // pasa un segundo
  digitalWrite(led, LOW);    // apaga led
   
 
       myservo.write(0);      // posicion inicial
       delay(1000);    
       myservo.write(90);     // mueve 90 grados
       delay(1000);
       myservo.write(180);    // mueve a posiocion 180
       delay(1000);
}
 
