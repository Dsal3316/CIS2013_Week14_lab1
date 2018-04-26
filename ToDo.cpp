#include "ToDo.h"

using namespace std;

ToDo::ToDo(int len){
	length=len;
	list = new string[length];
	}

ToDo::~ToDo(){
	delete[] list;
	}

void ToDo::add(string item){
	if(next < length){
	list[next] = item;
	next++;
	}
}

void ToDo::done(){
	next--;
	list[next]= " ";
}

void ToDo::print(){
	for(int i=0i<next;i++){
		cout<< " * " << list[i] << endl;
	}

}