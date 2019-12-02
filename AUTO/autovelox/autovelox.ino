String id = "[ARDU328]"; // Stringa di riconoscimento
unsigned long secondi1 = 0;
unsigned long secondi2 = 0;
long tempo=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
   pinMode(A1,INPUT);
Serial.begin(9600);
}

void loop() {
 
int v  = analogRead(A0);

int v2 = analogRead(A1);


    if(v<=400)
    {
     
    secondi1=millis();
  
   
     
     
    }
    if(v2<=400)
    {  
       
      secondi2=millis();
     
    }

    if (secondi1 > 0 && secondi2 > 0) {
      tempo = secondi2 - secondi1;
      tempo = tempo /1000;
      Serial.println(tempo);
      delay(300);
    }

    
     
   
}
