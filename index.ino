#define LED_PIN1 11
#define LDR_PIN A0
#define LED_PIN2 9
int i = 0;

void setup()
{
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  Serial.begin(9600); // инициализация порта
}

void loop()
{

  int lightness = analogRead(LDR_PIN);


      // Serial.println(lightness); 
      
  
    


  if (lightness < 900) {
    while(i == 0){
      for (int i = 0; i < 264; i+=17){
         analogWrite(LED_PIN1, i); 
         delay(100);
         Serial.println(i);
         
        
      }
      i++;
    }
    digitalWrite(LED_PIN1, HIGH);
  }
 

  else   {
    // ...иначе свет не нужен — выключаем его
    digitalWrite(LED_PIN1, LOW);
    
   }


  if  (lightness < 850){
     digitalWrite(LED_PIN2, HIGH);
     
  }
  else   {
  
    digitalWrite(LED_PIN2, LOW);
    int i = 0;
    //Serial.println(i);
    
 
   } 
 
}
