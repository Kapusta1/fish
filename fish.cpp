#include <iostream>
using namespace std;

class Fish
{
public:
	virtual void Swim()
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

class Carp : public Fish
{
public:
	void Swim()
	{
		cout << "Carp swims !" << endl;
	}
};

void MakeFishswim(Fish & inputFish)
{
	inputFish.Swim();
}

int main()
{
	Tuna myDinner;
	Carp myLunch;
	myDinner.Swim();

	MakeFishswim(myDinner);
	MakeFishswim(myLunch);
	return 0;
}