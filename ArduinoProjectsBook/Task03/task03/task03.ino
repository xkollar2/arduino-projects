const int sensorPin = A0;
float baselineTemp = 20.0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // baselineTemp = analogRead(sensorPin);
  for (int pinNumber = 3; pinNumber < 6; pinNumber++) {
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorVal = analogRead(sensorPin);
  Serial.print("Sensor value: ");
  Serial.print(sensorVal);

  float voltage = (sensorVal / 1024.0) * 5.0;
  Serial.print(", Volts: ");
  Serial.print(voltage);

  float degrees = (voltage - .5) * 100;
  Serial.print(", degrees C: ");
  Serial.print(degrees);
  Serial.println();
}