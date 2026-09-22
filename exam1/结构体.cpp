#include<iostream>
using namespace std;
struct student
{
	string name;
	int id=0;
	double score=0;
};
void input(student *p)
{
	cin >> p->name >> p->id >> p->score;
}
void display(student* p)
{
	cout << "name: " << p->name << " id: " << p->id <<" score: " << p->score << endl;
}
int main02()
{
	struct student* p = new student;
	input(p);
	display(p);
	delete p;
	p = NULL;
	system("pause");
	return 0;
}