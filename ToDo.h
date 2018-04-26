#include <iostream>
#include <string>
using namespace std;

class ToDo {
	private:
		
		string*list;
		int length = 0;
	

	public:
		 
		// Create list of lenth len
		ToDo(int len);

		// Destroy list
		~ToDo();

		//add an item to list
		void add(string item);
		
		// finish last thing on list
		void done();

		// print list
		void print();


}