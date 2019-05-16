 void setup() 
{
  // put your setup code here, to run once:
  
    pinMode(2,0);
    pinMode(4,0);
    pinMode(6,0);
    
    pinMode(3,1);
    pinMode(5,1);
    pinMode(8,1);
    
    pinMode(9,1);
    pinMode(10,1);
    pinMode(11,1);
    pinMode(12,1);
    Serial.begin(9800);
}



void forward()
{
  digitalWrite(9,1);
  digitalWrite(10,0);
  digitalWrite(11,1);
  digitalWrite(12,0);
  delay(25);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
  digitalWrite(12,0);
}

void right()
{
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,1);
  digitalWrite(12,0);
  delay(18);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
  digitalWrite(12,0);
}
void left()
{
  digitalWrite(9,1);
  digitalWrite(10,0);
  digitalWrite(11,0);
  digitalWrite(12,0);
  delay(18);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
  digitalWrite(12,0);
}


void loop() 
{
  // put your main code here, to run repeatedly:
  int a1,a2,a3,a;
  
  digitalWrite(3,1);
  digitalWrite(5,1);
  digitalWrite(8,1);
  
  a1 = digitalRead(4);
  a2 = digitalRead(2);
  a3 = digitalRead(6);

  Serial.print("value of 1: ");
  Serial.println(a1);
  Serial.print("value of 2: ");
  Serial.println(a2);
  Serial.print("value of 3: ");
  Serial.println(a3);
  
  if(a1==0 && a2==1 && a3==0)
  {
    
    forward();
  }
  else if(a1==0 && a2==0 && a3==0)
  {
   digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
  digitalWrite(12,0);
  }
  else if(a1==0 && a3==0 && a2==0)
  {
    forward();
  }
  else if(a2==0 && a3==0 && a1==1)
  {
    left();
  }

  else if(a2==0 && a3==1 && a1==0)
  {
    right();
  }

  else if(a1==1)
  {
    left();
  }

  else if(a3==1)
  {
    right();
  }
  
  
}
