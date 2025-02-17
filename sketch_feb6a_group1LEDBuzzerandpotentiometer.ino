void setup() {
pinMode(13,OUTPUT);
}

void loop() {
//int botton=digitalRead(2);
digitalWrite(13,HIGH);
int dial = analogRead(0);
tone(9,440);
delay(1000);
digitalWrite(13,LOW);
noTone(9);
delay(dial);
}
