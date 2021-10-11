// C++ code
//
int A = 8;
int B = 11;
int C = 10;
int D = 9;

int AA = 4;
int BB = 7;
int CC = 6;
int DD = 5;

int potPin = A0;

void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  
  pinMode(AA, OUTPUT);
  pinMode(BB, OUTPUT);
  pinMode(CC, OUTPUT);
  pinMode(DD, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 
  int number = analogRead(potPin);
  int mapVal = map(number,0,1023,0,99);
  
  if (mapVal/10 == 0)
  {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  }
  else if (mapVal/10 == 1)
  {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  }
  else if (mapVal/10 == 2)
  {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  }
  else if (mapVal/10 == 3)
  {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  }
  else if (mapVal/10 == 4)
  {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  }
  else if (mapVal/10 == 5)
  {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  }
  else if (mapVal/10 == 6)
  {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  }
  else if (mapVal/10 == 7)
  {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  }
  else if (mapVal/10 == 8)
  {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  }
  else
  {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  }
 
  //second display
  
  
  if (mapVal%10 == 0)
  {
  digitalWrite(AA, HIGH);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  }
  else if (mapVal%10 == 1)
  {
  digitalWrite(AA, HIGH);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  }
  else if (mapVal%10 == 2)
  {
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  }
  else if (mapVal%10 == 3)
  {
  digitalWrite(AA, HIGH);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  }
  else if (mapVal%10 == 4)
  {
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(100);
  }
  else if (mapVal%10 == 5)
  {
  digitalWrite(AA, HIGH);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(100);
  }
  else if (mapVal%10 == 6)
  {
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(100);
  }
  else if (mapVal%10 == 7)
  {
  digitalWrite(AA, HIGH);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(100);
  }
  else if (mapVal%10 == 8)
  {
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  }
  else
  {
  digitalWrite(AA, HIGH);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  }
  
  Serial.println(mapVal);
 
}