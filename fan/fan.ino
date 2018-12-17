//Initializing LED Pin
int led_pin = 9;
void setup() {
  //Declaring LED pin as output
  pinMode(led_pin, OUTPUT);
  Serial.begin(115200);
}
void loop() {
  //Fading the LED
//  //for(int i=0; i<255; i=i+10){
    analogWrite(led_pin, 0);
    Serial.println("0");
    delay(5000);
//    analogWrite(led_pin, 64);
//    Serial.println("64");
//    delay(5000);
//    analogWrite(led_pin, 128);
//    Serial.println("128");
//    delay(5000);
    analogWrite(led_pin, 150);
    Serial.println("150");
    delay(5000);
    analogWrite(led_pin, 255);
    Serial.println("255");
    delay(5000);
//  for(int i=100; i>0; i--){
//    analogWrite(led_pin, i);
//    delay(5);
//  }
}
