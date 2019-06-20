#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	string str;
	int a, e, y, u, i, o;
	a = 0;
	e = 0;
	y = 0;
	u = 0;
	i = 0;
	o = 0;
	getline(cin, str);
	for (int j = 0; j < str.length(); j++)
	{
		if (str[j] == 'A')
			str[j] = a;
		if (str[j] == 'E')
			str[j] = e;
		if (str[j] == 'Y')
			str[j] = y;
		if (str[j] == 'U')
			str[j] = u;
		if (str[j] == 'I')
			str[j] = i;
		if (str[j] == 'E')
			str[j] = e;
	}
	cout << str << endl;
	system("pause");
	return 0;
}
