//Shamsur Rahman.
#include<iostream>
using namespace std;

int main()
{
	int Grade, totalnumb = 0, avg = 0;
	char repeat = 'y';

	do {

		
		cout << "\nWhat grade did you get on exam " << avg+1 << "?" << endl;
		cin >> Grade;

		
		cout << "Letter grade for exam " << avg+1 << " is: ";
		if (Grade >= 95) cout << "A";
		else if (Grade >= 85) cout << "B";
		else if (Grade >= 75) cout << "C";

		
		totalnumb = totalnumb + Grade;
	    avg++;

		cout << "\nAre there anymore exams? (y)es or (n)o\n";
		cin >> repeat;
		
	} while (repeat != 'n');


	cout << "\nYour overall average is: ";

	
	if ((totalnumb/avg) >= 95) cout << "A";
	else if ((totalnumb/avg) >= 85) cout << "B";
	else if ((totalnumb/avg) >= 75) cout << "C";
	cout << "(" << totalnumb/avg << ")";
	cout << "\n";
	return 0;
};
