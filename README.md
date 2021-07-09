# Circuit-the-eyes-of-robot

This Circuit design for eyes of the robot, I uesd tinkercrd website online to Design it, The consistent of the Circuit is :

1. Arduino.
2. Breadboard. 
3. Two Resistors.
4. Two Leds.


# Diagram  Of The Circuit :

![image](https://user-images.githubusercontent.com/86571348/125128268-7ee62f00-e106-11eb-9142-c2b5453db69e.png)



# Video Of The Circuit :



https://user-images.githubusercontent.com/86571348/125128516-cbca0580-e106-11eb-9fd7-802f02bcd846.mov



# Code Of The Circuit :

// C++ code

//

void setup()


{
  pinMode(12, OUTPUT);
  
  pinMode(11, OUTPUT);
}

void loop()

{
  
  digitalWrite(12, HIGH);
  
  digitalWrite(11, HIGH);
  
  delay(1000); // Wait for animation millisecond(s)
  
  
  digitalWrite(12, LOW);
  
  digitalWrite(11, LOW);
  
  delay(500); // Wait for animation millisecond(s)

}
