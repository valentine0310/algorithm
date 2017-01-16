#include <iostream>
#include <string>
using namespace std;

bool checkDup(string str)
{
	bool b[256] ={ 0 };

	for (int i=0; i<str.length(); i++)
	{
		if (b[str.at(i)] == false)
			b[str.at(i)] = true;
		else
			return true;
	}
	return false;
}

int main()
{

	string str;
	cin >> str;

	cout << (checkDup(str) ? "중복" : "미중복") << endl;

	return 0;
}