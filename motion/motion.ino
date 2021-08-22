int redled=9;
int greenled=10;
int buzzer=11;
int sensor=2;
void setup() {
  // put your setup code here, to run once:
pinMode(redled,OUTPUT);
pinMode(greenled,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(sensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(sensor)==HIGH)
{
  digitalWrite(redled,HIGH);
  digitalWrite(buzzer, HIGH);
  digitalWrite(greenled,LOW);
}
else
{digitalWrite(redled,LOW);
digitalWrite(buzzer,LOW);
digitalWrite(greenled,HIGH);
}
delay(1000);
}
