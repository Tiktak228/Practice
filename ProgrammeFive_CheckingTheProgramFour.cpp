#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void f(string &str)
{
	int a = 0, e = 0, y = 0, u = 0, i = 0, o = 0;
	for (int j = 0; j < str.length(); j++)
	{
		if (str[j] == 'A')
			str[j] = 'a';
		if (str[j] == 'E')
			str[j] = 'e';
		if (str[j] == 'Y')
			str[j] = 'y';
		if (str[j] == 'U')
			str[j] = 'u';
		if (str[j] == 'I')
			str[j] = 'i';
		if (str[j] == 'E')
			str[j] = 'e';
		if (str[j] == 'O')
			str[j] = 'o';
	}
}
int main()
{
	string str, hg;
	getline(cin, str);
	f(str);
	cout << str << endl;
	cout << "test: "<<endl;
	cout << "Enter the correct answer " << endl;
	getline(cin, hg);
	cout << "test: ";
	if (str == hg)
	{
		cout << "The program works corre" << endl;
	}
	else
	{
		cout << "The program has some problems" << endl;
	}

	cout << "Void check: ";
	if (str == " ")
	{
		cout << "The program works corre" << endl;
	}
	else
	{
		cout << "The program has some problems" << endl;
	}
	system("pause");
	return 0;
}

