#include<iostream>
using namespace std;

class Person
{
	protected:
	string name;
	int personid;
	public:
	Person() {}
	
	Person(string name,int personid)
	{
		this->name=name;
		this->personid=personid;
	}
};
class Customer:public Person
{
	public:
		void display()
		{
			cout<<"\nCustomer Name= "<<name<<"\nCust ID= "<<personid;
		}
		
};

class Vehicle
{
	public:
		int vehicleid,rentperday;
		string type;
		int availablecount;
		
	void setvehicleinfo(int vid,int rpd,string type,int ac)
	{
		vid=vehicleid;
		rpd=rentperday;
		this->type=type;
		availablecount=ac;
	}	
	void displayvehicleinfo()
	{
		cout<<"\nVehicleID= "<<vehicleid;
		cout<<"\nRent per Day= "<<rentperday;
		cout<<"\nType of Car= "<<type;
		if (availablecount>0)
		{
			 cout<<"\nThe Vehical is Available!!!";
			 availablecount--;
		}
		else
		{
			cout<<"\nVehicle is Not Available";
		}
		
	}
		
};
class Rental
{
	public:
		int noofdays;
		int totalrent;
		void calculaterent(	int noofdays)
		{
			totalrent=rentperday*noofdays;
		}
		void displayrent()
		{
		
			cout<<"\nVehicleID= "<<vehicleid;
		    cout<<"\nRent per Day= "<<rentperday;
		    cout<<"\nType of Car= "<<type;
		    cout<<"\nTotal Rent of Car= "<<totalrent;
		}
	   	
 };
 class RentalService
 {
 	public:
 	char arr[50];
 	
	if(availablecount>0)
 	{
 		for(int i;i<=5;i++)
 		{
 			arr[i]++;
 			cout<<"\n Vehicle Added successfully!!";
		 }
	 }
	 else
	 {
	 	cout<<"\n ^^^Vehicle is not Available^^^";
	 }
	 void retaldisplay()
	 {
	 	cout<<"\nTotal Available vehicles= "<<availablecount;
	 	cout<<"\nTotal Rent of Car= "<<totalrent;
	 }
 };

int main()
{
	Person p("Rushikesh",201);
	Customer c;
	c.display();
	return 0;
}
