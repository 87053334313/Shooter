#include <iostream>
#include <conio.h>

using namespace std;

void main() 
{
	setlocale(LC_ALL,"");
	/*
	int n;
	cout << "������� ����� ������: ";
	cin >> n;
	int n_0 = n / 100000;
	int n_1 = (n / 10000) % 10;
	int n_2 = (n / 1000) % 10;

	int n_5 = n % 10;
	int n_4 = (n % 100) / 10;
	int n_3 = (n % 1000) / 100;
	
	if ((n_0 + n_1 + n_2) == (n_3 + n_4 + n_5)) 
	{
		cout <<n <<"-���������� �����";
		
	}
	else
	{
		cout << n << "-������� �����";
	}
	*/
	//Shooter
	char key;
	
	do 
	{
		key = _getch();
//		cout << (int)key << "\t" << key << endl;
		if (key == 'w') 
		{
			cout << "������" << endl;
		}
		else if (key == 's')
		{
			cout << "�����" << endl;
		}
		else if (key == 'a')
		{
			cout << "�����" << endl;
		}
		else if (key == 'd')
		{
			cout << "������" << endl;
		}
		else if (key == ' ')
		{
			cout << "������" << endl;
		}
		else if (key == 13)
		{
			cout << "�����" << endl;
		}
		else if (key == 27) 
		{
			break;
		}
		else 
		{
			cout << "error" << endl;
		}
	} while (key!=27);
}