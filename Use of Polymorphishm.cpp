#include<iostream>
using namespace std;

class Animal
{
	public:
	void speed()
	{
		cout<<"Who is more faster ? \n";
	}
};
class Dolphin: public Animal{
	public:
		void speed()
		{
			cout<<"Im faster in water \n";
		}
};
class Cheetah: public Animal{
	public:
		void speed()
		{
			cout<<"Im faster on the ground \n";
		}
};
int main()
{
	Animal a;
	Cheetah c;
	Dolphin d;
	
	a.speed();
	c.speed();
	d.speed();
	return 0;
}
