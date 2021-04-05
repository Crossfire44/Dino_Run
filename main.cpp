#include <iostream>
#include <Windows.h>

/*
**License

Date : 4.04.2021 / 23:07
Author: Arda Muhammed Çakýr
Contact: ardacakir200710@gmail.com
Turkey/Istanbul
*/

/*
This Project started with my request to draw the character named "Dino Run" in Google Chrome with ASCII characters.

The project consisted of approximately 200 lines and I think it was a very fun project to build!

Don't forget to look in the comments so you don't get confused while looking at the codes!

With Love,

-CrossFireArda
*/

using namespace std;

//I used this function while drawing the character to go back to the places I forgot and draw. Of course, if you examine the function, I used the coordinates in the command line. 
void hndl_cmd(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main()
{
	//The command line color (f=white background 0=black character )
	system("color f0");
	//Ýf you look "ascii table" 219 is a character. you can look here in "Extended ASCII Codes" : http://www.asciitable.com/
	char skin = 219;
	//I will use these spaces to draw the protruding places in the character while drawing.
	string space1="                             ";
	string space2 = "                            ";
	string space3 = "                          ";
	string space4 = "                       ";
	string space5 = "                  ";
	string space6 = " ";
	string space7 = "                    ";
	string space8 = "                      ";
	string space9 = "                       ";
	string arm_space = " ";
	//For See Character in middle
	cout << endl;
	cout << endl;
	//As you see this space for (head)
	cout << space1;
	//Head...
	for (int i = 0; i < 8; i++) //Ýf you now how does for loops works it must easy for you.in this loop I can draw 8 skin character!
	{
		cout << skin;
	}
	cout << endl;
	cout << space2; //Again a space for head

	for (int i = 0; i < 11; i++)/*Eyes Ýn Here!!*/
	{
		if (i == 4)
			cout << " "; //if "cursor" in fourth space, put blank space for eyes.
		else  //Ýf not countinue draw skin...
			cout << skin;
	}
	cout << endl;
	cout << space2; //Again space bu not diffirent 'cuz if you run program bolt of this lines are same. 

	for (int i = 0; i < 11; i++)//Another head part!
	{
		cout << skin;
	}
	cout << endl;
	cout << space2;

	for (int i = 0; i < 11; i++) //Again same thing
	{
		cout << skin;
	}
	cout << endl;
	cout << space2;

	for (int i = 0; i < 6; i++) //Ýf you run program the "mouth" part is less tall than other head parts.I am writing 6 for this
	{
		cout << skin;
	}
	cout << endl;
	cout << space2;
	for (int i = 0; i < 10; i++)
	{
		cout << skin;
	}////End Of Head//// :)
	cout << endl;
	cout << space3; //Yes Now I drawing body part this part.Ýf youlook spaces and run program,You will see the link between them 

	for (int i = 0; i < 7; i++) {
		cout << skin;
	}
	cout << endl;
	cout << space4; //this space more short than above of this.

	for(int i=0;i<12;i++){
		cout << skin;
	}
	cout << endl;
	cout << space4;

	for (int i = 0; i < 10; i++)
	{
		cout << skin;
	}
	//Arms In Hereeee

	cout << arm_space; //the arm space is more short than others!
	cout << skin; //draw hand
	cout << endl; //go to new line for new part
	cout << space5; //we are not using anymore "space4"

	int a = 2;   //tihs is a temp varible.Ýf you look dinosaur the 2 lines are same.for it I have to use 2x for loop.Ýn short way I put the "for loops" in "while loop" 2 times.So, I used "a" varible for use "for loops" 2 times in while loop.
	while (a > 0) {													//The Most Tall Part
		for (int i = 0; i < 15; i++) {
			cout << skin;
		}
		cout << endl;
		cout << space5;
		a -= 1; //the 1. time a=1, 2. time a=0 and loop is finished because a is not less than 0 it's equals. 
	}

	cout << space6;
	for (int i = 0; i < 13; i++)
	{
		cout << skin;
	}
	cout << endl;
	cout << space7;

	for (int i = 0; i < 11; i++)
	{
		cout << skin;
	}
	cout << endl;
	cout << space8;

	for (int i = 0; i < 8; i++)
	{
		cout << skin;
	}
	cout << endl;
	cout << space9;

	for (int i = 0; i < 7; i++)//Legs Starst Here!!
	{
		if (i == 4)
			cout << " ";	
		else
			cout << skin;
	}
	cout << endl;
	cout << space9;

	//3,4,5
	for (int i = 0; i < 7; i++)
	{
		if (i == 3 || i == 4 || i == 5 )
			cout << " ";
		else
			cout << skin;
	}
	cout << endl;
	cout << space9;
	for (int i = 0; i < 7; i++)
	{
		if (i == 0 || i == 6)
			cout << skin;
		else
			cout << " ";
	}
	cout << endl;
	cout << space9;

	//foots
	for (int i = 0; i < 8; i++)
	{
		if (i == 0 || i == 1 || i == 6 || i == 7)
			cout << skin;
		else
			cout << " ";
	}
	//for tails I handle The Console And I go to upside for draw tails
	hndl_cmd(17, 11);
	cout << skin;
	hndl_cmd(17, 10);
	for (int i = 0; i < 2; i++) {
		cout << skin;
	}
	hndl_cmd(17, 9);
	cout << skin;

	//End Of Project :))
	hndl_cmd(0,20);
	cin.get();//For See cleanly
}