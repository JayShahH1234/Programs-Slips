/* Write a C++ program to create a class Worker with data members as
   worker_name, no_of_hours_worked, pay_rate. Write necessary member
   functions to calculate and display the salary of worker. (Use
   default value for pay_rate_ */

#include<iostream.h>
#include<conio.h>

class worker {
	// Declaring data members of the class
	char worker_name[50];
	float no_of_hours_worked;
	float pay_rate;

	// Declaring member functions
	public :
		void accept();
		void display(float pay_rate = 100);
};

// Defining data members outside the class

void worker :: accept() {
	// Accepting worker details
	cout << "\nName of the worker : ";
	cin >> worker_name;
	cout << "No. of hours worked : ";
	cin >> no_of_hours_worked;
}

void worker :: display(float pay_rate) {
	// Displaying worker details
	cout << "\nWorker Details :\
		 \n\nWorker Name : "
	     << worker_name
	     << "\nNo. of hours worked : "
	     << no_of_hours_worked
	     << "\nSalary : Rs."
	     << no_of_hours_worked * pay_rate;
}
// End of member function definitions

void main() {
	worker w;
	clrscr();

	w.accept();
	w.display();

	getch();
}
