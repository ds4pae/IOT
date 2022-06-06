int notes[8] = {262,294,330,349,392,440,494,523};

void setup()
{
  Serial.begin(9600);
  
  for(int i =0;i<8;i++){
    tone(13,notes[i],100);
    delay(300);
   noTone(13);
  }
}


void loop()
{
  
}
