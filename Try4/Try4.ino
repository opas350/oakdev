// variable to store the push button digitalRead() value
int button=0;

void setup()
{                

  // use the on-board LED to illuminate when the button is pressed
  pinMode(1, OUTPUT);
  
  // initialize the digital pin as an input
  pinMode(10, INPUT);

  // Particle.variable() takes two options:
  // 1) the name of the variable to access in the GET request
  // 2) the name of the local variable that holds the value to report
  Particle.variable("button", button);

}


// the loop() routine runs over and over again
void loop()
{

  button = digitalRead(10);

  // for debugging, it's helpful to have a way to know
  // that the button is being reported properly

  if(button == HIGH) {digitalWrite(1, HIGH); }
  if(button == LOW) { digitalWrite(1, LOW); }

}
