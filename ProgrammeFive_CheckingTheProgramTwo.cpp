#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void function(string sr, int &a, int &e, int &y, int &u, int &i, int &o)
{
	for (int j = 0; j < sr.length(); j++)
	{
		if (sr[j] == 'a') {
			a++;
		}
		if (sr[j] == 'e') {
			e++;
		}
		if (sr[j] == 'y')
			y++;
		if (sr[j] == 'u')
			u++;
		if (sr[j] == 'i')
			i++;
		if (sr[j] == 'o')
			o++;
	}
}

int main()
{
	string in_sr;
	getline(cin, in_sr);
	int z = 0, x = 0, c = 0, v = 0, b = 0, n = 0, m = 0;
	function(in_sr, z, x, c, v, b, n);
	cout << "a = " << z << " " << "e = " << x << " " << "y = " << c << " " << "u = " << v << " " << "i = " << b << " " << "o = " << n << endl;

	cout << "Test: ";
	if (z == 1 && x == 2 && c == 0 && v == 1 && b == 2 && n == 3)
	{
		cout << "The program works corre" << endl;
	}
	else
	{
		cout << "The program has some problems" << endl;
	}
	cout << "Void check: ";
	if (z == 0 && x == 0 && c == 0 && v == 0 && b == 0 && n == 0)
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
