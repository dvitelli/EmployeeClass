// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <stdio.h>


class Employee {

private:

	
	
	std::string name = " ";
	int idNumber = 0;
	std::string department = " ";
	std::string position = " ";

public:

	Employee(std::string n, int i, std::string d, std::string p) {

		name = n;
		idNumber = i;
		department = d;
		position = p;
	}

	Employee(std::string n, int i) {

		name = n;
		idNumber = i;

	}
	Employee() {


	} std::string getName() {

		return name;
	}int getIdNumber() {

		return idNumber;
	}
	std::string getDepartment() {

		return department;
	}
	std::string getPosition() {

		return position;
	}


};

int main(){

	Employee employee1 = Employee("Susan Meyers", 47899, "Accounting","Vice President"); 
	Employee employee2 = Employee("Mark Jones", 39119, "IT", "Programmer");
	Employee employee3 = Employee("Joy Rogers", 47899, "Manufacturing", "Engineer");

	using std::cout;

	
	cout <<  employee1.getName();
	cout << "\t";
	cout <<  employee1.getIdNumber();
	cout << "\t";
	cout <<  employee1.getDepartment();
	cout << "\t";
	cout <<  employee1.getPosition();
	cout << "\n"; 
	cout << "\n";

	cout <<  employee2.getName();
	cout << "\t";
	cout <<  employee2.getIdNumber();
	cout << "\t";
	cout <<  employee2.getDepartment(); 
	cout << "\t";
	cout <<  employee2.getPosition();
	cout << "\n";
	cout << "\n";

	cout <<  employee3.getName();
	cout << "\t";
	cout <<  employee3.getIdNumber();
	cout << "\t";
	cout <<  employee3.getDepartment();
	cout << "\t";
	cout <<  employee3.getPosition();
	


	return 0;

}

