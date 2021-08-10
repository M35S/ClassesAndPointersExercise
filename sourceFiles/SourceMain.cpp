#include <iostream>
#include <string>

using namespace std;

class Balloon
{
public:
	string colour;
	float size;
	float pressure;

	void printBalloon(Balloon *balloonPtr)
	{
		cout << "The current balloon:\n";
		cout << "Is the colour " << balloonPtr->colour << "." << endl;
		cout << "Has a size of " << balloonPtr->size << " cm." << endl;
		cout << "Has a pressure of " << balloonPtr->pressure << " Pascal.\n" << endl;
	}
};

int main()
{
	Balloon RedBalloon;
	RedBalloon.colour = "Red";
	RedBalloon.size = 11.7f;
	RedBalloon.pressure = 2.9f;

	Balloon BlueBalloon = { "Blue", 12.2f, 5.2f };

	Balloon *balloonPtr1, *balloonPtr2;
	balloonPtr1 = &RedBalloon;
	balloonPtr2 = &BlueBalloon;

	RedBalloon.printBalloon(balloonPtr1);
	BlueBalloon.printBalloon(balloonPtr2);
	
	system("pause");

	return 0;
}