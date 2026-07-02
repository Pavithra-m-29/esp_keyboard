
#define KEY1 D1
#define KEY2 D2
#define KEY3 D3
#define KEY4 D4
#define KEY5 D5

void setup() {
  Serial.begin(9600);

  pinMode(KEY1, INPUT_PULLUP);
  pinMode(KEY2, INPUT_PULLUP);
  pinMode(KEY3, INPUT_PULLUP);
  pinMode(KEY4, INPUT_PULLUP);
  pinMode(KEY5, INPUT_PULLUP);
}

void loop() {

  if (digitalRead(KEY1) == LOW)
    Serial.println("Button 1 Pressed");

  if (digitalRead(KEY2) == LOW)
    Serial.println("Button 2 Pressed");

  if (digitalRead(KEY3) == LOW)
    Serial.println("Button 3 Pressed");

  if (digitalRead(KEY4) == LOW)
    Serial.println("Button 4 Pressed");

  if (digitalRead(KEY5) == LOW)
    Serial.println("Button 5 Pressed");

  delay(200);
}
