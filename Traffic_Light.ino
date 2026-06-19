
const int ledPin2 = 12;
const int ledPin1 = 13;
const int ledPin3 = 10;
const int bozzer4 =9;
void setup() {
  // Initialize the built-in LED pin as an output
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin1, OUTPUT);
   pinMode(ledPin3, OUTPUT);
   pinMode(bozzer4, OUTPUT);
}

void loop() {
  digitalWrite(ledPin2, HIGH);   // Turn the LED on
  delay(10000);                       // Wait for 1 second
  digitalWrite(ledPin2, LOW);    // Turn the LED off
   
  
  
   digitalWrite(ledPin1, HIGH);  
   digitalWrite(bozzer4, HIGH);
  delay(1000);                       // Wait for 1 second
  digitalWrite(ledPin1, LOW);
    digitalWrite(bozzer4, LOW);   // Turn the LED off

  
  
   digitalWrite(ledPin3, HIGH);
     delay(10000);                     // Wait for 1 second
  digitalWrite(ledPin3, LOW);
  
  // Turn the LED offdelay(0);  
      
  
  digitalWrite(ledPin1, HIGH); 
   digitalWrite(bozzer4, HIGH);  // Turn the LED on
  delay(1000);                       // Wait for 1 second
  digitalWrite(ledPin1, LOW); 
    digitalWrite(bozzer4, LOW);   // Turn the LED off
  delay(0);                       // Wait for 1 second
}


