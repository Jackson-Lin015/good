#include<iostream>
using namespace std;
void sort(int* num, int len)
{
	for (int a = 0;a < len - 1;a++)
	{
		for (int b = 0;b < len - a - 1;b++)
		{
			if (num[b] > num[b + 1])
			{
				int temp = num[b];
				num[b] = num[b+1];
				num[b + 1] = temp;
			}
		}
	}
}
int main01()
{
	int num[10];
	int len = sizeof(num) / sizeof(num[0]);
	for (int i = 0;i < 10;i++)
	{
		cin >> num[i];
	}
	sort(num, len);
	for (int z = 0;z < len;z++)
	{
		cout << num[z] << " ";
	}

	system("pause");
	return 0;
}