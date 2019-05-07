#include <iostream>
using namespace std;

int main () { 
	short choice = 0,i=0;
	float Vnumber = 0, number=0, total=0;
	char answer= 'f';
	//float tabValue[] = { 0 };
	

	
	do {
		system("cls");
	cout << "\t Calculator 1.0\n";
	cout << "\t________________\n\n";

	cout << "\t Virginia Castro Delion\n";
	cout << "\t_________________________\n\n";

	cout << "1- Addition\n" << "2- Division\n"<< "3- Substraction\n"<<"4- Multiplication\n"<<"5- Quit\n";

	cout << "Enter your choice: \n";
	cin >> choice;


	switch (choice)
	{

	case 1:
	
		do {
		system("cls");
		total = 0;
		Vnumber = 0;
		cout << "\t Calculator \n";
		cout << "\t________________\n\n";
		cout << "\t ADDITION \n\n";
		cout << "Enter the number of values to add: ";
		cin >> number;
		
		for (i = 0; i < number; i++)
		{	
			cout << "Value " << i + 1 << ":" << endl;
			cin >> Vnumber;
		
			total += Vnumber;
		}
		cout << "The result is " << total << endl;
		cin.ignore();
	
		cout << "Would you like to do another addition? (Y-N) "<< endl;
		cin >> answer;
		cin.ignore();

		}
		while ((answer == 'Y') || (answer == 'y'));
			//return main(); we can use it also to comes back to the main menu
		
		break;


	case 2:
		do {
		system("cls");
		total = 0;
		cout << "\t Calculator \n";
		cout << "\t________________\n\n";
		cout << "\t DIVISION \n\n";
		cout << "Enter the value to divide: ";
		cin >> number;
		cout << "Enter the divider: ";
		cin >> Vnumber;
		total = number / Vnumber;
		cout << "The result is " << total << endl;
		cout << "Would you like to do another division? (Y-N) " << endl;
		cin >> answer;
		cin.ignore();

		} while ((answer == 'Y') || (answer == 'y'));
		break;

	case 3:
		do {
		
		total = 0;
		cout << "\t Calculator \n";
		cout << "\t________________\n\n";
		cout << "\t SUBTRACTION \n\n";
		cout << "Enter the first value: ";
		cin >> number;
		cout << "Enter the second value: ";
		cin >> Vnumber;
		total = number - Vnumber;
		cout << "The result is: " << total << endl;
		cout << "Would you like to do another substraction? (Y-N) " << endl;
		cin >> answer;
		cin.ignore();

		} while ((answer == 'Y') || (answer == 'y'));
		break;

	case 4:
	
		do {	
			system("cls");
			total=1;
		cout << "\t Calculator \n";
		cout << "\t________________\n\n";
		cout << "\t MULTIPLICATION \n\n";
		cout << "Enter the number of values to multiply: ";
		cin >> number;

		for (i = 0; i < number; i++)
		{
			cout << "Value " << i + 1 << ":" << endl;
			cin >> Vnumber;

			total *= Vnumber;
		}
		cout << "The result is " << total << endl;
		cin.ignore();
		/*for (i = 0; i < Nvalue; i++) TO ASK THE TEACHER 
		{
			cout << "Value " << i + 1 << ":" << endl;
			cin >> tabValue[i];
		}
		for (i = 0; i < tabValue[i]; i++)
		{
			multi = multi * tabValue[i];

		}*/

		cout << "Would you like to do another multiplication? (Y-N) " << endl;
		cin >> answer;
		cin.ignore();

		} while ((answer == 'Y') || (answer == 'y'));
		break;

		case 5:
			exit(0);//function to finish the program
			break;
			
		default:
			cout << "You enter a wrong choice\nDo you want to try again (Y/N) \n";
			cin >> answer;
			cin.ignore();
			if (answer == 'y')
			{
				return main();
			}
			else
			{exit(0);
			}
	
			break;

			
	}//end switch

		}//end do
		while (answer == 'N' || answer == 'n');
			
			
		

	system("pause");
	return 0;

}//end main
