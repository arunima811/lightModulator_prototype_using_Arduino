void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  for(int i=2;i<8;++i)
  {
    pinMode(i,OUTPUT);
    digitalWrite(i,0);
  }
  
  pinMode(A3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A3);
  val = 1023- val;
  Serial.println(val);
  int number = (val/170.6) + 2;
  for(int i=2;i<=7;++i)
  {
    if(i<=number)
      digitalWrite(i,1);
    else
      digitalWrite(i,0);
  }
 delay(100); 
}

