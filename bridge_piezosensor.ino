
int ledPin=13;
int knockSensor = 0;               


byte val = 0;

int statePin = LOW;

int THRESHOLD = 100;



void setup() {

pinMode(ledPin, OUTPUT); 

 Serial.begin(9600);

}



void loop() {

  val = analogRead(knockSensor);     
   Serial.println(val*10);
   // statePin = !statePin;
    if((val*10)>=5000)
    {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
    }
    else
    {
      digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(5);
    }
    
    val=0;
 //   Serial.println(val*10);



  delay(100);  // we have to make a delay to avoid overloading the serial port

}
