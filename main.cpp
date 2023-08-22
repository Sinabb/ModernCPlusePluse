#include <iostream>
#include <vector>

class Warrior
{
public:
	int mHealth;
	int mAttack;

	Warrior(int h, int a) : mHealth{ h }, mAttack{ a }
	{

	}
};

int main()
{
	Warrior* p = new Warrior(100, 10);
	p->mHealth;

	p->mHealth = 100;
	(*p).mHealth = 100;
	delete p;


	std::unique_ptr<Warrior> spWarrior = std::make_unique<Warrior>(100, 20);


}