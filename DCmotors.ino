const int pin_pwm = 9;
const int pin_1a =  8;
const int pin_2a = 7;

const int pin_pwm2 = 11;
const int pin_3a =  12;
const int pin_4a = 13;

void setup()
{
pinMode(pin_pwm, OUTPUT);
pinMode(pin_1a, OUTPUT);
pinMode(pin_2a, OUTPUT);
pinMode(pin_pwm2, OUTPUT);
pinMode(pin_3a, OUTPUT);
pinMode(pin_4a, OUTPUT);
}

void loop()
{
  //both spinning with same direction and same speed
 digitalWrite(pin_1a,HIGH);
 digitalWrite(pin_2a,LOW);
 analogWrite(pin_pwm, 255);
  //second motor 
   digitalWrite(pin_3a,HIGH);
 digitalWrite(pin_4a,LOW);
  analogWrite(pin_pwm2, 255);
  
  
  delay(5000); 
}