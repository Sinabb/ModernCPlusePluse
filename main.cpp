#include <iostream>
#include <vector>

template<typename T>
T Sum(T first)
{
	return first;
}

template<typename T, typename ... Args>
T Sum(T first, Args... args)
{
	return first + Sum(args...);
}

using namespace std::string_literals;

int main()
{
	std::cout << Sum(1) << std::endl;
	std::cout << Sum(1, 2, 3,4) << std::endl;
	std::cout << Sum("a"s, "b"s, "c"s, "d"s) << std::endl;
}