#include <iostream>
#include <map>
using namespace std;

int main()
{
	char *str = "1abcdefghijklmn12347";
	map<char, int> m;
	int nLen = strlen(str);
	bool bFind = false;

	for(int i = 0; i<nLen; i++)
	{
		map<char, int>::iterator it = m.find(str[i]);

		if (it == m.end())
			m.insert(pair<char, int>(str[i], i));
		else
		{
			bFind = true;
			break;
		}
	}

	if (bFind)
		cout << "중복" << endl;
	else
		cout << "미중복" << endl;

	return 0;
}