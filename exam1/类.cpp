#include<iostream>
using namespace std;
class Car
{
private:
	string color;
	int number;
public:
	Car(string c,int n)
	{
		 color=c;
		 number=n;
	}
	~Car()
	{
		cout << "destroy" << endl;
	}
	void display()
	{
		cout << "the color is " << color << " the number is " << number << endl;
	}
};
int main()
{
	Car c1("red",  12345);
	Car c2( "green",  54321);
	c1.display();
	c2.display();
	system("pause");
	return 0;

}