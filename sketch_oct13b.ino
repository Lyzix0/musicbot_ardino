int music1 = 8;
int music2 = 9;
int buttonLeft = 12;
int buttonRight = 11;

void setup() {
  pinMode(music1, OUTPUT);
  pinMode(music2, OUTPUT);
  pinMode(buttonLeft, INPUT);
  pinMode(buttonRight, INPUT);
}

void loop() {
  tone(music1, 1000, 1000);
  tone(music2, 500, 1000);
}
