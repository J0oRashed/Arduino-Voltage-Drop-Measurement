void setup()
{
  pinMode(A5 , INPUT);
  pinMode(A3 , INPUT);
  Serial.begin(9600) ; 
}

void loop()
{
  int value1 = analogRead(A5) ; 
  int value2 = analogRead(A3) ;
  float Vol = value1 - value2 ;
  float V = (Vol * 5)/1023.0 ;
  Serial.println(V) ;
  delay(1000);
}