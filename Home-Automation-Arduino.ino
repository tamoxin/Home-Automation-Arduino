void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pinMode(0,INPUT);
  Serial.begin(9600);
  int val, valor;
  if (Serial.available()>0) {
   char inChar = Serial.read();
  
   switch(inChar) {
     case '0':
       digitalWrite(10,LOW);
       delay(100);
       break;
     case '1':
       digitalWrite(10,HIGH);
       delay(100);
       break;
     case '2':
       val = analogRead(0);
       valor = val*5/1023;
       Serial.println(val);
       delay(100);
       break;
     case '3':
       digitalWrite(11,HIGH);
       delay(100);
       break;
     case '4':
       digitalWrite(11,LOW);
       delay(100);
       break;
     case '5':
       digitalWrite(9,HIGH);
       delay(100);
       break;
     case '6':
       digitalWrite(9,LOW);
       delay(100);
       break;
       case '7':
       digitalWrite(12,HIGH);
       delay(100);
       break;
     case '8':
       digitalWrite(12,LOW);
       delay(100);
       break;
   }
  
  }
 
}
