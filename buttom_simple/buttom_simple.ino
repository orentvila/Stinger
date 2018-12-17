// constants won't change. They're used here to set pin numbers:
const int buttonPin1 = 2;     // the number of the pushbutton pin
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState1 = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;
int buttonState3 = 0;

void setup() {
    Serial.begin(115200);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}

void loop() {

  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) {
    // turn LED on:
    Serial.println("button 1 - high");
  } else {
    // turn LED off:
    Serial.println("button 1 - low");
  }
  delay(100);
  if (buttonState2 == HIGH) {
    // turn LED on:
    Serial.println("button 2 - high");
  } else {
    // turn LED off:
    Serial.println("button 2 - low");
  }
  delay(100);
  if (buttonState3 == HIGH) {
    // turn LED on:
    Serial.println("button 3 - high");
  } else {
    // turn LED off:
    Serial.println("button 3 - low");
  }
  delay(100);
  Serial.println("--------------------");
  delay(2000);
}
