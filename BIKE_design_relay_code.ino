#define RELAY1  8                        
#define RELAY2  9                        
#define RELAY3  10                        
#define RELAY4  11
int value;
void setup()
{    
// Initialise the Arduino data pins for OUTPUT
  pinMode(RELAY1, OUTPUT);       
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available())
  {
  Serial.println("pls enter Relay no");
 value =Serial.read();
  switch(value)
  {
    case '1':digitalWrite(RELAY1,1);           
    Serial.println("Light ON");
   delay(2000);                                      

   digitalWrite(RELAY1,0);          
   Serial.println("Light OFF");
   delay(2000);
    break;
    case '2':
    digitalWrite(RELAY2,1);           
   delay(2000);                                      
   digitalWrite(RELAY2,0);
   break;
   case '3':
   digitalWrite(RELAY3,1);           
   delay(2000);                                      
   digitalWrite(RELAY3,0);
   break;
   case '4':
   digitalWrite(RELAY4,1);           
   delay(2000);                                      
   digitalWrite(RELAY4,0);
   break;
  }
  }
}
