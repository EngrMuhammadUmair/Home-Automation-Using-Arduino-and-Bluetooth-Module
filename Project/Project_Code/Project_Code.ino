#include <SoftwareSerial.h>

SoftwareSerial QuartzBT(2, 3); // RX | TX
#define fan 8
#define bulb 9
#define redLed 10
#define RGB 11

String val;


void setup()

{

  Serial.begin(9600);
  QuartzBT.begin(9600);

  pinMode(fan, OUTPUT);
  pinMode(bulb, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(RGB, OUTPUT);
}

void loop()

{

  if (QuartzBT.available()) {

    val = QuartzBT.readString();

    if(val == "fan on" or val == "A")
    {
      digitalWrite(fan, HIGH);
    }
    else if(val == "fan off" or val == "a")
    {
      digitalWrite(fan, LOW);
    }
    else if(val == "bulb on" or val == "B")
    {
      digitalWrite(bulb, HIGH);
    }
    else if(val == "bulb off" or val == "b")
    {
      digitalWrite(bulb, LOW);
    }
    else if(val == "redled on" or val == "C")
    {
      digitalWrite(redLed, HIGH);
    }
    else if(val == "redled off" or val == "c")
    {
      digitalWrite(redLed, LOW);
    }
    else if(val == "rgb on" or val == "D")
    {
      digitalWrite(RGB, HIGH);
    }
    else if(val == "rgb off" or val == "d")
    {
      digitalWrite(RGB, LOW);
    }
    else if(val == "all on" or val == "E")
    {
      digitalWrite(fan, HIGH);
      digitalWrite(bulb, HIGH);
      digitalWrite(redLed, HIGH);
      digitalWrite(RGB, HIGH);
    }
    else if(val == "all off" or val == "e")
    {
      digitalWrite(bulb, LOW);
      digitalWrite(fan, LOW);
      digitalWrite(redLed, LOW);
      digitalWrite(RGB, LOW);
    }

  }

}
