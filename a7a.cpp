//Assignment 7a Monthly Budget written by Melinda Sterne
/*
	this program ...
	
	INPUT:
	OUTPUT:
	VALIDATION:

*/

#include<iostream>

using namespace std;

struct MonthlyBudget {
	double housing;
	double utilities;
	double household_expenses;
	double transportation;
	double food;
	double medical;
	double insurance;
	double entertainment;
	double clothing;
	double misc;
};

//Function Prototypes
void displayBudget(/*in*/MonthlyBudget);
//void getExpenses;
//void compareExpenses;

int main()
{
	MonthlyBudget budget = {580, 150, 65, 50, 250, 30, 100, 150, 75, 50};
	MonthlyBudget spent;
	
	displayBudget(budget);

	return 0;
}


//This function takes a MonthlyBudget structure variable and prints the contents of its members to the screen
void displayBudget(/*in*/MonthlyBudget v)
//PRE: MonthlyBudget structure variable has been declared
//POST: MontlyBudget member values have been printed to the screen
{
	cout << endl;
	double totalBudget = v.housing + v.utilities + v. household_expenses + v.transportation + v.food + v.medical + v.insurance + v.entertainment + v.clothing + v.misc; 
	cout << endl
	cout << "Here is your monthly budget for YEAR 2020:" << endl;
	cout << "Housing" << "$" << v.housing << endl;
	cout << "Utilities" << "$" << v.utilities << endl;
	cout << "Household" << "$" << v.household_expenses << endl;
	cout << "Transportation" << "$" << v.transportation << endl;
	cout << "Food" << "$" << v.food << endl;
	cout << "Medical" << "$" << v.medical << endl;
	cout << "Insurance" << "$" << v.insurance << endl;
	cout << "Entertainment" << "$" << v.entertainment << endl;
	cout << "Clothing" << "$" << v.clothing << endl;
	cout << "Miscellaneous" << "$" << v.misc << endl;
	cout << "=================================================" << endl;
	cout << "Total Budgeted" << "$" << totalBudget << endl;
	cout << "=================================================" << endl;
}
