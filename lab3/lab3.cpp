#include <iostream>
#include <string>

#include <Windows.h>
using namespace std;

void JuniorTask(void)
{
	cout << "Base level problem: \n";
	int count = 11;
	cout << "Enter string ]$~ ";
	string str;
	str = "Sup: 2ch:";
	int counter_delete = 0;

	getline(cin, str);
	cout << str << endl;
	bool flag = false;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == ':')//97-122 224-255
		{
			flag = true;
			str.erase(i, 1);
			counter_delete++;

		}

	}
	flag ? cout << "" : cout << "В строке не встречался символ ':' ";
	cout << endl << str << endl;

	//15.Дан массив символов.Удалить символ «двоеточие»(:) и подсчитать количество удаленных символов.
	/*cout << "Base level problem: \n";
	int count = 11;
	cout << "Enter count symbols ]$~ ";
	char* string = new char[count];
	   string = (char*)"Sup: 2ch:";
	int counter_delete = 0;
	
	cin.getline(string, count);
	cout << string << endl;
	//exit(9);
	for (size_t i = 0; i < strlen(string); i++)
	{
		if (string[i] == ':')//97-122 224-255
		{
			counter_delete++;
			for (size_t iq = i; iq < strlen(string) - 1; iq++)
			{
				string[i] = string[i + 1];
			}
		}

	}
	for (size_t i = 0; i < strlen(string)-counter_delete; i++)
	{
		cout << string[i];
	}*/

}
void MediumTask(void)
{
	cout << "Medium level task: \n";
	cout << "Enter string ]$~ ";

	char m[255] = "1ff23j456j7890j";
	cin.getline(m, 255);
	int counter = 0, max = 0;
	int mas[10]; int q = 0;
	int i = 0;
	bool flag;
	cout << m;
	while (m[q] != '\0')
	{
		counter = 0;
		if (m[q] >= '0' && m[q] <= '9')
		{

			while ((m[q] >= '0' && m[q] <= '9'))
			{
				counter++;
				q++;
			}
			if (max < counter)
				max = counter;
			q--;
		}
		q++;
	}
	cout << endl << "Длина наибольшей последовательности цифр, идущих подряд " << max;

	/*Дан массив символов, содержащий буквы латинского алфавита и цифры. Вывести на экран длину наибольшей
	последовательности цифр, идущих подряд.   
	cout << "Medium level task: \n";
	char m[255];
	cin.getline(m, 255);
	int counter = 0, max=0;
	int mas[3]; int q = 0;
	for (size_t i = 0; m[i] != '\0'; i++)
	{
		if ( (m[i] >= 0 && m[i]<=9) )
		{

			counter++;
		}
		if ((m[i] >= 0 && m[i] <= 9) && (m[i + 1] <= 0 && m[i + 1] >= 9))
		{
			mas[q] = counter;
			q++;
			if (q >= 2 && mas[q] > mas[q + 1])
				max = mas[q];
		}
	}
	cout << endl << max;
	return;
	for (size_t i = 0; i < 255; i++)//48 - 57(0-9)
	{
		cout << (char)i << "\t" << i << endl;
	}*/

}

char* Revers(char* str, int m)
{
	for (int i = 0; i < m / 2; i++)
		swap(str[i], str[m - 1 - i]);
	return str;
}

void SeniorTasks(void)
{
	/*В заданном массиве символов слова зашифрованы — каждое из них записано наоборот. Расшифровать сообщение .*/
	cout << "High level: \n";
	int m;
	char str[256];
	cout << "String:\n";
	cin.getline(str, 256);
	char* mas;
	
		for (m = 0; str[m] != '\0'; m++);
		cout << Revers(str, m) << endl;
	
	system("pause");
	return ;
}
int main(int argc, char** argv)
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "");

	JuniorTask();
	MediumTask();
	SeniorTasks();
	//exit(777);



}
