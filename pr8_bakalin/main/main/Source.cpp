#include <iostream>
#include <ctime>

using namespace std;

string f(string password)
{
	srand(time(NULL));
	for (int i = 0; i < 11; i++)
	{
		password += rand() % ('z' - 'a' + 1) + 'a';
		password += rand() % ('Z' - 'A' + 1) + 'A';
	}
	return password;
}

void main()
{
	string password;
	password = f(password);
	cout << "Your password has been successfully generated!\n" << password;
}
