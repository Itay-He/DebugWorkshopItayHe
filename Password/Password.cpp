#include <iostream>

struct Password
{
	char value[16]; 
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n" << "the bug is if i enter 15 chars then 1 -> set incorrect = true, the main checks if its not the same and if !incorrect is true => prints \"Congratulations\"";

	return 0;
}
