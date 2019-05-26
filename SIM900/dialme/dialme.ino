void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(4, OUTPUT);
pinMode(3, INPUT);
pinMode(2, OUTPUT);
digitalWrite(2, HIGH);
delay(2000);
digitalWrite(2, LOW);
delay(2000);
digitalWrite(2, HIGH);
delay(2000);
digitalWrite(2, LOW);
delay(2000);
digitalWrite(2, HIGH);
delay(2000);
digitalWrite(2, LOW);
delay(2000);
Serial.println("AT\r\n");
delay(1000);
Serial.println("AT\r\n");
delay(1000);
//Serial.println("ATD+79090810135;\r\n");
//delay(10000);

}

void loop() {
 int sensorVal = digitalRead(3);
  if (sensorVal == LOW){
    Serial.println("ATA\r\n");
    delay(5000);


    
  }
  
 
  
  
  // put your main code here, to run repeatedly:
  //Serial.println("ATD+79090810135;\r\n");
  
}
