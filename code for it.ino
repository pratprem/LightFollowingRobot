#include <Servo.h>

Servo Prat;
int pos=90;


void setup()
{
 Serial.begin(9600); 
 Prat.attach(9);
 Prat.write(pos);
}
void loop()
{
  int lefteye = analogRead(A0);
  int righteye = analogRead(A1);
  
  Serial.print("Left Eye Value is:");
  Serial.print(lefteye);
  Serial.print("\t");
  
  Serial.print("Right Eye Value is:");
  Serial.print(righteye+60);
  
  int difference=lefteye-righteye;
  
  pos=pos-difference/10;
  

  Prat.write(pos);
   
  delay(100);
}
