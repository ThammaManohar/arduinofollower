void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
}
void moveRobot(String motion){
  if(motion == "Forward"){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    
  }
  if(motion == "Backward"){
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    
  }
  if(motion == "left"){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    
  }
  if(motion == "right"){
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    
  }
  if(motion == "Stop"){
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    
  }
}
void loop() {
  // put your main code here, to run repeatedly:
//  int Right = analogRead(A0);
//  int Left = analogRead(A1);
//  Serial.print("VAlue of Right Sensor is:" + String(Right));
//  Serial.print("\t");
//  Serial.println("VAlue of Leftt Sensor is:" + String(Left));
//  delay(1000);

  if((Right > 600) && (left > 600)){
    moveRobot("Forward");
  }
  if((Right < 600) && (left < 600)){
    moveRobot("Stop");
  }
  if((Right < 600) && (left > 600)){
    moveRobot("left");
  }
    if((Right > 600) && (left < 600)){
    moveRobot("Right");
  }
  }
