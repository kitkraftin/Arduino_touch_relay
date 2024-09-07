const int RELAY_Pin=5; 
const int TOUCH_Pin=2; 
int status = false; 

void setup() {
  pinMode(TOUCH_Pin, INPUT);
  pinMode(RELAY_Pin, OUTPUT);
  digitalWrite(RELAY_Pin, HIGH);  
}

void loop() {
  if (digitalRead(TOUCH_Pin) == true)  
  {  
  status = !status;  
  digitalWrite(RELAY_Pin, status);  
  }   
  while(digitalRead(TOUCH_Pin) == true);  
  delay(50);  
}
