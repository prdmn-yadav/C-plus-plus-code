#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int var=0;
	cout<<"sample c++ program for exeception handling\n";
	// try block- for exeception code
	try{
		// inside try block
		if(var==0){
			throw var;
			// skip all code after throw
		}
	} // catch block
	catch(int ex){
		// code executed when execption catch
		cout<<"Exeception catch : value :"<<ex;
	}
	getch();
	return 0;
}
