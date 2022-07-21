// CString_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void aUPPER(char* str);

int main(int argc, char** argv)
{
	for (int i = 0; i < argc; i++)
	{
		aUPPER(argv[i]);
		std::cout << argv[i] << "\n";
	}
}

void aUPPER(char* str)
{
	const int shift = 'A' - 'a';
	bool begin = true;
	while (*str != '\0')
	{
		char cur = *str;
		if (begin && cur >= 'A' && cur <= 'Z')
		{
			*str -= shift;
		}
		else if (!begin && cur >= 'a' && cur <= 'z')
		{
			*str += shift;
		}
		begin = false;
		++str;
	}
}
