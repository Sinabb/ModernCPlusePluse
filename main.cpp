#include <iostream>
#include <vector>

enum class Flages
{
	slow,
	poison
};

int main()
{
	Flages f;

	f = Flages::slow;

	switch (f)
	{
	case Flages::slow:
		break;
	case Flages::poison:
		break;
	default:
		break;
	}
}