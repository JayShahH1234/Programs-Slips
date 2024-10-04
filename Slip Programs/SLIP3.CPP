/* Create a class Person that contains data members as person_name,
   city, mob_no. Write a C++ program to perform following functions.
   1. To accept and display person information
   2. To search the mobile number of a given person
   3. To search the person details of given mobile number */

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

// creating a class person
class person {
    // declaring data members
    char person_name[50], city[20];
    unsigned long int mob_no;

    // declaring and defining member functions
    public :
        // function to accepts person details
        void getdata() {
            cout << "\nPerson Name : ";
            cin >> person_name;
            cout << "City : ";
            cin >> city;
            cout << "Mobile No. : ";
            cin >> mob_no;
        }

        // function to display object (person's) details
        void display() {
            cout << "\nName : " << person_name <<
                 "\nCity : " << city <<
                 "\nMobile No. : " << mob_no;
        }

        // function to search mobile no. of a given person
        void search(char name[]) {
            if(strcmp(person_name, name) == 0) {
                cout << "\nMobile No. of given person is : "
                     << mob_no;
            }
        }

        // function to search person name of a given mobile no.
        void search(long int mobno) {
            if(mob_no == mobno) {
                cout << "\nPerson Detaile :\
                    \n\nPerson Name : " << person_name <<
                    "\nCity : " << city;
            }
        }
};
// end of class person

void main() {
    int n, choice;
    unsigned long int mobno;
    char name[50];
    person *p;  // pointer of type person
    clrscr();

    cout << "\nEnter number of records to be entered : ";
    cin >> n;

    p = new person[n]; // similar to malloc() function in C
    // here p is a pointer pointing to the 1st object of class person
    // here we have created 'n' objects of class person

    // Writing a menu driven program
    while(1) {
        cout << "\nMain Menu :\
             \n\n1. Accept person details\
             \n2. Display details\
             \n3. Search mobile no. of given person\
             \n4. Search person details of given mobile no.\
             \n5. Exit";

        cout << "\n\nEnter Your Choice : ";
        cin >> choice;

        switch(choice) {
            case 1 : // case to accept details of all the people
                 for(int i=0; i<n; i++) {
                    cout << "\n\nPerson " << i+1 << " Detils :";
                    p[i].getdata();
                 }
                 getch();
                 clrscr();
                 break;
            case 2 : // case to display details of all the people
                 for(i=0; i<n; i++) {
                    cout << "\n\nPerson " << i+1 << " Details :";
                    p[i].display();
                 }
                 getch();
                 clrscr();
                 break;
            case 3 : // case to search mobile no. of given name
                 cout << "\nWhose mobile no. you want to search (Name) : ";
                 cin >> name;
                 for(i=0; i<n; i++) {
                    p[i].search(name);
                 }
                 getch();
                 clrscr();
                 break;
            case 4 : // case to find person details of given mobile no.
                 cout << "\nEnter mobile no. whose details you want to find : ";
                 cin >> mobno;
                 for(i=0; i<n; i++) {
                    p[i].search(mobno);
                 }
                 getch();
                 clrscr();
                 break;
            case 5 : // case to exit the code
                 exit(0);
            default : // default statement
                  cout << "\nWrong choice entered...\
                       \nPress Enter to re-enter your choice...";
                  getch();
                  clrscr();
        } // end of switch
    } // end of while
    getch();
} // end of main()
