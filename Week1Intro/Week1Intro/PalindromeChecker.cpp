#include "PalindromeChecker.h"

bool PalindromeChecker::check(std::string s)
{
	//case should be ignored
	std::string str = "";
	for (char& c : s)
	{
		str += std::tolower(c);
	}

	//create a reversed string
	std::string rev = "";
	for (char& c : str)
	{
		rev = c + rev;
	}
	return str == rev;
}
