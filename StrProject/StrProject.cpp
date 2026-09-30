#include <iostream>
using namespace std;

int stringSize()
{	
	cin.ignore();
	char text[255];
	cin.getline(text, 255);
	int count = 0;
	int i = 0;
	
		while (true)
		{
			if (text[i] != '\0')
			{
			count++;

			}
			if (text[i] == '\0')
			{
				break;

			}
			i++;
		}
		return count;
	
}

int main()
{
    char text[255]; 
    cin >> text;
	int size = strlen(text);

	int count_a = 0;
	int count_o = 0;
	for (int i = 0; i < size; i++)
	{
		if (text[i] == 'A' or text[i] == 'a')
			count_a++;
		else if(text[i] == 'O' or text[i] == 'o')
			count_o++;
	}
	cout << "Total a : " << count_a << endl;
	cout << "Total o : " << count_o << endl;
	if (count_a > count_o)
		cout << "a > o" << endl;
	else
		cout << "o > a" << endl;
	cin.ignore();
	char text2[255]; 
	cin.getline(text2, 255);
	size = strlen(text2);
	int count_abc = 0;
	int count_num = 0;
	int count_spc = 0;
	for (int i = 0; i < size; i++)
	{
		if ((bool)isalpha(text2[i]) == true)
			count_abc++;
		else if ((bool)isdigit(text2[i]) == true)
			count_num++;
		else if ((bool)isspace(text2[i]) == true)
			count_spc++;
	}
	cout << "Total abc : " << count_abc << endl;
	cout << "Total digits : " << count_num << endl;
	cout << "Total spaces : " << count_spc << endl;
	
	cin.ignore();
	char text3[255];
	cin >> text3;
	size = strlen(text3);
	for (int i = 0; i < size; i++)
	{
		if ((bool)islower(text3[i]) == true)
			text3[i] = (char)toupper(text3[i]);
		else if ((bool)isupper(text3[i]) == true)
			text3[i] = (char)tolower(text3[i]);
	}
	cout << text3 << endl;

	int count = stringSize();
	cout << "Len is " << count << endl;
}