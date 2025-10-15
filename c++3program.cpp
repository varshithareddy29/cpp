#include<iostream>
int values = 100;
namespace MyNamespace
{
	int values =200;
	void show()
	{
		std::cout<<"Namespace values:"<<values<<std::endl;
	}
}
int main()
{
	int values = 300;
	std::cout<<"Local values:"<<values<<std::endl;
	std::cout<<"global values:"<<::values<<std::endl;
	global
	std::cout<<"Namespace values:"<<MyNamespace::value<<std::endl;
	from namespace
	MyNamespace::show();
	return 0;
}
