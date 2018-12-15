#include <iostream>
using namespace std;

class Fish
{
public:
	Fish()
	{
		cout << "Fish Constructor " << endl;
	}
	~Fish()
	{
		cout << "Fish Destructor" << endl;
	}
	virtual void Swim()
	{
		cout << "Fish Swim!! " << endl;
	}
};

class Tuna :public Fish
{
public:
	Tuna()
	{
		cout << "Tuna Constructor " << endl;
	}
	~Tuna()
	{
		cout << "Tuna Destructor " << endl;
	}
	void Swim()
	{
		cout << "Tuna swims! " << endl;
	}
};

class Carp : public Fish
{
public:
	Carp()
	{
		cout << "Carp Constructor " << endl;
	}
	~Carp()
	{
		cout << "Carp Destructor " << endl;
	}
	void Swim()
	{
		cout << "Carp swims !" << endl;
	}
};

void DeleteFishMemory(Fish * pFish)
{
	delete pFish;
}

void MakeFishswim(Fish & inputFish)
{
	inputFish.Swim();
}

int main()
{
	cout << "Allocating a Tuna on the free store: " << endl;
	Tuna * pTuna = new Tuna;
	cout << "Deleting the Tuna" << endl;
	DeleteFishMemory(pTuna);

	cout << "Instaling  a Tuna on the stack: " << endl;
	Tuna myDinner;
	cout << "Automatic destruction as it goes out of scope: " << endl;
//	Carp myLunch;


//	MakeFishswim(myDinner);
//	MakeFishswim(myLunch);
	return 0;
 }