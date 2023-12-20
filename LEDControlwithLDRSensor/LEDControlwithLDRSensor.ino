const int LEDPin = D2;
const int LDRPin = A0; 

void setup() {
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT); 
  pinMode(LDRPin, INPUT);  
}
void loop() {
  int ldrStatus = analogRead(LDRPin); 

  // Control based on LDR light intensity
  if (ldrStatus <= 300) {
    digitalWrite(LEDPin, HIGH); 
    Serial.print(" LIGHT ON : ");
    Serial.println(ldrStatus);
  } 
  else {
    digitalWrite(LEDPin, LOW);
    Serial.print("LIGHT OFF: ");
    Serial.println(ldrStatus);
  }
}