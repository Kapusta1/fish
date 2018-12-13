#include <iostream>
using namespace std;

class Fish
{
public:
	void Swim()
	{
		cout << "Fish Swim!! " << endl;
	}
};

class Tuna :public Fish
{
public:
	void Swim()
	{
		cout << "Tuna swims! " << endl;
	}
};

void MakeFishswim(Fish & inputFish)
{
	inputFish.Swim();
}

int main()
{
	Tuna myDinner;
	myDinner.Swim();

	MakeFishswim(myDinner);
	return 0;
}