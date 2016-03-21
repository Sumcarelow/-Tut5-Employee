#include<iostream>
#include<string>

using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee{

protected:
	string newNameOfEmployee;
	int newStaffNumber;
	float salary;
	int HourlyRate;
	int HoursWorked;
	float BaseSalary;
	float rate;
	float revenue;


public:
	//Mutator Function
	void setName(string);
	void setNumber(int);
	void setSalary(float);
	void setHours(int);
	void setHourlyRate(float);
	void setHoursWorked(int);
	void setBaseSalary(float);
	void setRate(float);
	void setRevenue();


	//Other Functions
	string name();
	int staffNumber();
	virtual float salary()
	{
		return 0.0;
	}
};

class SalaryEmployee : Employee {
public:
	float salary(){
		return salary;
	};
};

class HourlyEmployee : Employee{
public:
	float salary();

};

class CommissionEmployee : Employee{
public:
	float salary();
};



#endif