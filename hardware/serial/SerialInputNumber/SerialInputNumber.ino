// This program reads an integer fron the Serial Monitor
// and displays it back to the screen

int x = 0;

void setup() {
  // Sets up communication with the serial monitor
  Serial.begin(9600);

  // Set the serial timeout so that it waits for a sufficiently long time (1 hour)
  Serial.setTimeout(1000 * 60 * 60);

}

void loop() {
  // The Arduino Serial Monitor does not send the "enter" key on press, so we need
  // to send a non-char value to cause the parseInt to see the end of the input
  // number. Hence the exclamation mark.
  Serial.print("Enter a whole number: ");
  x = Serial.parseInt();

  // Now echo the number back to the console
  Serial.print("You input: ");
  Serial.println(x);
}

