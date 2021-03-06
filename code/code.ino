#include <PCD8544.h>
    static PCD8544 lcd;
    const int f_0 = 9; //Declare input pins
    const int f_1 = 10;
    const int f_2 = 11
    const int f_3 = 12;
    const int f_4 = 13;
    int curr = 0;
    int temp = 0;
    int flag = 0;
//Function to display string on lcd
void write_lcd(String wor)
{
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("Detected Word:");
          lcd.setCursor(0, 1);
          lcd.print(wor);
          lcd.write(' ');
}
//Initializations of microcontroller
void setup() 
      {
          pinMode(f_0,INPUT); //Declare pins for input
          pinMode(f_1,INPUT);
          pinMode(f_2,INPUT);
          pinMode(f_3,INPUT);
          pinMode(f_4,INPUT);
          pinMode(2,INPUT);
          lcd.begin(84, 48);
          lcd.setContrast(95);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("Sign Language detector");
          lcd.write(' ');
          delay(1500);
       }
void loop()
{
    curr = 0;
    delay(500);
    if(digitalRead(2))
    flag = !flag;
    digitalWrite(8,HIGH);
    if(digitalRead(f_0))
    curr = curr | 1
    if(digitalRead(f_1))
    curr = curr | 2;
    if(digitalRead(f_2))
    curr = curr | 4;
    if(digitalRead(f_3))
    curr = curr | 8;
    if(digitalRead(f_4))
    curr = curr | 16;
    delay(500);
    if(flag)
      {
        if(curr == 25)
        write_lcd("z");
        if(curr == 0)
        write_lcd("a");
        if(curr == 1)
        write_lcd("b");
        if(curr == 2)
        write_lcd("c");
        if(curr == 3)
        write_lcd("d");
        if(curr == 4)
        write_lcd("e");
        if(curr == 5)
        write_lcd("f");
        if(curr == 6)
        write_lcd("g");
        if(curr == 7)
        write_lcd("h");
        if(curr == 8)
        write_lcd("i");
        if(curr == 9)
        write_lcd("j");
        if(curr == 10)
        write_lcd("k");
        if(curr == 11)
        write_lcd("l");
        if(curr == 12)
        write_lcd("m");
        if(curr == 13)
        write_lcd("n");
        if(curr == 14)
        write_lcd("o");
        if(curr == 15)
        write_lcd("p");
        if(curr == 16)
        write_lcd("q");
        if(curr == 17)
        write_lcd("r");
        if(curr == 18)
        write_lcd("s");
        if(curr == 19)
        write_lcd("t");
        if(curr == 20)
        write_lcd("u");
        if(curr == 21)
        write_lcd("v");
        if(curr == 22)
        write_lcd("w");
        if(curr == 23)
        write_lcd("x");
        if(curr == 24)
        write_lcd("y");
        if(curr == 31)
        write_lcd("1");
        if(curr == 26)
        write_lcd("2");
        if(curr == 27)
        write_lcd("3");
        if(curr == 28)
        write_lcd("4");
        if(curr == 29)
        write_lcd("5");
        if(curr == 30)
        write_lcd("6");
       }
     else
       {
        if(curr == 25)
        write_lcd("z");
        if(curr == 0)
        write_lcd("hello");
        if(curr == 1)
        write_lcd("hi");
        if(curr == 2)
        write_lcd("how are you");
        if(curr == 3)
        write_lcd("what is your good name");
        if(curr == 4)
        write_lcd("help");
        if(curr == 5)
        write_lcd("water");
        if(curr == 6)
        write_lcd("GM");
        if(curr == 7)
        write_lcd("GN");
        if(curr == 8)
        write_lcd("I am hungry");
        if(curr == 9)
        write_lcd("lets go");
        if(curr == 10)
        write_lcd("come here");
        if(curr == 11)
        write_lcd("I am happy");
        if(curr == 12)
        write_lcd("Are you busy");
        if(curr == 13)
        write_lcd("Enjoy");
        if(curr == 14)
        write_lcd("lets go to safe zone");
        if(curr == 15)
        write_lcd("Mu-Prava");
        if(curr == 16)
        write_lcd("Get in the car");
        if(curr == 17)
        write_lcd("Hurry up");
        if(curr == 18)
        write_lcd("Nice");
        if(curr == 19)
        write_lcd("I wanna do that");
        if(curr == 20)
        write_lcd("This is great");
        if(curr == 21)
        write_lcd("Where are the keys");
        if(curr == 22)
        write_lcd("i like you");
        if(curr == 23)
        write_lcd("VNIT rocks");
        if(curr == 24)
        write_lcd("Enemies ahead");
        if(curr == 31)
        write_lcd("how you doing??");
        if(curr == 26)
        write_lcd("Please help");
        if(curr == 27)
        write_lcd("Hey brother!");
        if(curr == 28)
        write_lcd("please ring phone");
        if(curr == 29)
        write_lcd("How much do i owe you?");
        if(curr == 30)
        write_lcd("3");
        }
    digitalWrite(8,LOW);
}
