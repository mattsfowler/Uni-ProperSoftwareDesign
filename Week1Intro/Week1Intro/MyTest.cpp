#include "MyTest.h"

bool MyTest::runAll(void)
{
	bool success = true;

	std::cout << "PALINDROME:" << std::endl;
	success = success && casePalindrome();

	if (success)
		std::cout << "all tests passed (huzzah!)" << std::endl;
	else
		std::cout << "some tests FAILED" << std::endl;
	return success;
}

bool MyTest::casePalindrome()
{
	bool success = true;
	PalindromeChecker p = PalindromeChecker();

	std::cout << "  Kayak: ";
	bool kayak = p.check("Kayak") == true;
	if (kayak) std::cout << "passed"; else std::cout << "failed";
	std::cout << std::endl;
	success = success && kayak;

	std::cout << "  Hannah: ";
	bool hannah = p.check("Hannah") == true;
	if (hannah) std::cout << "passed"; else std::cout << "failed";
	std::cout << std::endl;
	success = success && hannah;

	std::cout << "  Computer: ";
	bool computer = p.check("Computer") == false;
	if (computer) std::cout << "passed"; else std::cout << "failed";
	std::cout << std::endl;
	success = success && computer;

	std::cout << "  RaceCar: ";
	bool raceCar = p.check("RaceCar") == true;
	if (raceCar) std::cout << "passed"; else std::cout << "failed";
	std::cout << std::endl;
	success = success && raceCar;

	std::cout << "  radar: ";
	bool radar = p.check("radar") == true;
	if (radar) std::cout << "passed"; else std::cout << "failed";
	std::cout << std::endl;
	success = success && radar;

	std::cout << "  programming: ";
	bool programming = p.check("programming") == false;
	if (programming) std::cout << "passed"; else std::cout << "failed";
	std::cout << std::endl;
	success = success && programming;

	if (success)
		std::cout << "success" << std::endl << std::endl;
	else
		std::cout << "FAILED" << std::endl << std::endl;
	return success;
}

bool MyTest::caseDivisableByTwo()
{
	return false;
}
