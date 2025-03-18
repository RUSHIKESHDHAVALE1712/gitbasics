#include<iostream>
using namespace std;

class Employee
{
	private:
	int id,basicsal;
	string empname;
	float DA,HRA,gross;
	public:
	void set_data(int id,string empname,int basicsal)
	{
		this->id=id;
		this->empname=empname;
		this->basicsal=basicsal;
		DA=basicsal/100*12;
		HRA=basicsal/100*30;
		gross=basicsal+HRA+DA;
		
	}
	void show_data()
	{
		cout<<"\nEmployee ID= "<<id<<"\nEmployee Name= "<<empname<<"\nEmployee Basic Salary= "<<basicsal;
		cout<<"\nDA= "<<DA;
		cout<<"\nHRA= "<<HRA<<"\nTotal Gross Salary= "<<gross;
	}
};

main()
{
	int id,basicsal;
	string empname;
	cout<<"\nEmployee ID= ";
	cin>>id;
	cout<<"\nEnter Employee Name= ";
	cin>>empname;
	cout<<"\nEnter Employee Basic Salary= ";
	cin>>basicsal;
	Employee e;
	e.set_data(id,empname,basicsal);
	e.show_data();
	
}