using namespace std;

#include<iostream>
class Student{
	public:
	int id;
	string name;
	void get_details(){
		cout<<"id:"<<id;
		cout<<"\nname:"<<name;
	}
	void put_details(int i,string n){
		id=i;
		name=n;
		
	}
};
int main(){
	Student s1;
	int s_id;
	string s_name;
	cout<<"Enter id of student";
	cin>>s_id;
	cout<<"Enter name of student";
	cin>>s_name;
	s1.put_details(s_id,s_name);
	s1.get_details();
	
}
