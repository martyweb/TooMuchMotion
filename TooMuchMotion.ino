int pirPin = 5;
int redPin = 5;
int greenPin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(pirPin, INPUT);
  //pinMode(redPin, OUTPUT);
  //pinMode(greenPin, OUTPUT);


//  digitalWrite(redPin, HIGH);
//  delay(500);
//  digitalWrite(redPin, LOW);
//  digitalWrite(greenPin, HIGH);
//  delay(500);
//  digitalWrite(greenPin, LOW);
  
  Serial.begin(9600);
  Serial.println("All setup and ready to go");
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println(digitalRead(pirPin));
  if (digitalRead(pirPin) == HIGH)
  {
    //delay(200);
    Serial.println("MOVEMENT");
    //digitalWrite(redPin, HIGH);
  }else{
    Serial.println("Still");
    //digitalWrite(redPin, LOW);
  }
  delay(500);
}
