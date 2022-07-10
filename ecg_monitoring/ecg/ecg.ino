#include <SoftwareSerial.h>

int in=A0;
void setup() {
Serial.begin(9600);
pinMode(10, INPUT);
pinMode(11, INPUT);
pinMode(in,INPUT); 
}
void loop() {
 
if((digitalRead(10) == 1)||(digitalRead(11) == 1)){
Serial.println('!');
}
else{
Serial.println(analogRead(A0));
Serial.print("#");
}
delay(50);
}
