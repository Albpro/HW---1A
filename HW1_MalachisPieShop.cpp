//Name: Carlos Albert
//Date: 9/22/17
//Class: COP2000
//Description: HW1 - Malachi's Pie Shop


//This program calculates recipe for a pie crust


#include <iostream>
#include <iomanip>
using namespace std;



int main()

{

//1.Define variables for calculation and input
//	1) Define constant for flour - constant flour
//	2) Define constant for suagr - constant sugar
//	3) Define constant for salt - constant salt
//  4) Define constant for butter - constant butter
//	5) Define constant for eggs - constant eggs 

//2.) Define calculation of variables - float flour, sugar, salt, butter, eggs needed;

		float flour, sugar, salt, butter, eggs;
		float flour1, sugar1, salt1, butter1, eggs1;

		double pies;

		flour = 15.0;
		sugar = 8.0;
		salt = 3.0;
		butter = 5.25;
		eggs = 6.0;




//3.Ask the user for how many pies they wish to make.
		
		cout << " How many pies do you wish to make? ";
		
		
		//Read in the input from the user.
		
		

//4.Calculate the recipe for one pie crust.
		cin >> pies;

//5.Calculate the recipe for the amount of pie crusts the user wishes to make.

		flour1 = (flour / 6) * pies;
		sugar1 = (sugar / 6) * pies;
		salt1 = (salt / 6) * pies;
		butter1 = (butter / 6) * pies;
		eggs1 = (eggs / 6) * pies;


//6.Display the formatted output of the pie crust recipe of each ingredient with the number of

		cout << " Malachi's Pie Shop - Pie Crust Recipe\n";
		cout << " ______________________________________\n";
		cout << " You wish to make " << pies << " pies.\n";
		cout << " Flour " << flour1 << " cups\n";
		cout << " Sugar " << sugar1 << " tablespoons\n";
		cout << " Salt " << salt1 << " tablespoons\n";
		cout << " butter " << butter1 << " cups\n";
		cout << " eggs " << eggs1 << " large eggs\n";



	//program ends
		
		return 0; 
	

}