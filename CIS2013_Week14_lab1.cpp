#include <iostream>
#include <string>
using namspace std;

int main(){
	char next = 'y';
	int len = 0;
	string action;

	cout<<"How long do you want your list: ";
	cin>> len;

	ToDo list(len);

	while(next != "n"){

		cout<< "Add to list (a)" << endl;
		cout<< "Done list item (d)" << endl;
		cout<< "Print list (p)" << endl;
		cout<< "Exit list app (x)" << endl;
		cout<< "What do you want to do: ";
		cin>> next;
		
		switch(next)){
			case 'a':
			cout<<"Name a todo item: ";
			cin>> action;
			// add stuff to list
			list.add(action);
			break;
			case 'd':
			// finish something in list
			list.done();
			break;
			case 'p':
			// print list
			list.print();
			break;
			case 'x':
			//All done with todo list
			break;
		}
	}
}