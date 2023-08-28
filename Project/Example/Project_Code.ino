
#include <SoftwareSerial.h>
SoftwareSerial BT_Serial(2, 3); 
#define fan 8
#define bulb 9

String val;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  BT_Serial.begin(9600); 
  pinMode(fan, OUTPUT);
  pinMode(bulb, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(BT_Serial.available()>0){val = BT_Serial.read();}
    //String val = Serial.readString();
    Serial.println(val);
    if(val == "fan on" or val == "A")
    {
      digitalWrite(fan, HIGH);
    }
    else if(val == "bulb on" or val == "B")
    {
      digitalWrite(fan, HIGH);
      digitalWrite(bulb, HIGH);
    }
    else if(val == "fan off" or val == "a")
    {
      digitalWrite(fan, LOW);
    }
    else if(val == "bulb on" or val == "B")
    {
      digitalWrite(fan, HIGH);
      digitalWrite(bulb, HIGH);
    }
    else if(val == "bulb off" or val == "b")
    {
      digitalWrite(fan, HIGH);
      digitalWrite(bulb, LOW);
    }
    else if(val == "all on")
    {
      digitalWrite(fan, HIGH);
      digitalWrite(bulb, HIGH);
    }
    else if(val == "all off")
    {
      digitalWrite(bulb, LOW);
      digitalWrite(fan, LOW);
    }
  
}
