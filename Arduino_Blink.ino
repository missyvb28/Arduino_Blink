
//goal: make LED blink on 1 sec and off 2

#define LED 13                // LED is pin 13


void setup () 
{
  pinMode (LED, OUTPUT);      // pin 13 is output
  digitalWrite  (LED,HIGH);   // pin 13 is on
}


void loop ()
{
      digitalWrite (LED,HIGH); //LED on
      delay (1000);             //on 1000 milliseconds = 1 sec
      digitalWrite (LED,LOW);  //LED off
      delay (2000);            //off 2000 millisecond = 2 sec
      
  
      //delay (120000);          //cont. previous for 2 minutes  
      //digitalWrite (LED,LOW);    
      //delay (120000);          // LED off for 2 min
}
   
