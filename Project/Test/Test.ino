#include <SoftwareSerial.h>   //including library for Software Serial communication

SoftwareSerial mySerial (2, 3);    //(RX, TX)

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(mySerial.available() == 1)   //if communication is going on
  {
    String val = mySerial.readString();   //Read the data recieved
    Serial.println("Message from Phone: " + (String) val); //print the data on Serial Monitor
  }
}
