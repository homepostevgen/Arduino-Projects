void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
//настройка порта управленипя включением sim900
pinMode(4, OUTPUT);
//включение sim900 (имитация нажатия кнопки powerkey)
digitalWrite(4, HIGH);
delay(6000);
digitalWrite(4, LOW);
delay(2000);
digitalWrite(4, HIGH);  

delay(10000);
// настройка порта приема сигнала ring(RI) от sim900
pinMode(3, INPUT);
//настройка порта управления сигналом DTR от микроконтроллера до sim900
pinMode(2, OUTPUT);
//серия сигналов DTR для указания sim900 о том, что микроконтроллер готов к работе (для 100% уверенности повторяем сигнал DTR 3 раза)
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
delay(20000);



//шлем команду AT для автоматической настройки битрейта передачи данных между микроконтроллером и sim900(два раза для полной уверенности)
Serial.println("AT\r\n");
delay(1000);
Serial.println("AT\r\n");
delay(1000);

//команда дозвона мне на номер
Serial.println("ATD+79090810135;\r\n");
delay(10000);

}

void loop() {
 //если на канале RI пришел сигнал звонка, то шлется команда на sim900 АТА для принятия звонка
 int sensorVal = digitalRead(3);
  if (sensorVal == LOW){
    Serial.println("ATA\r\n");
    delay(5000);


    
  }
  


  
  
  
  // put your main code here, to run repeatedly:
  //Serial.println("ATD+79090810135;\r\n");
  
}
