
// C++ code

//

void setup()

{ pinMode(12, OUTPUT);

pinMode(11, OUTPUT); }

void loop()

{

digitalWrite(12, HIGH);

digitalWrite(11, HIGH);

delay(1000); // Wait for animation millisecond(s)

digitalWrite(12, LOW);

digitalWrite(11, LOW);

delay(500); // Wait for animation millisecond(s)

}

