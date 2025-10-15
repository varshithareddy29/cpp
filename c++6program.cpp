#include<iostream>
int value = 100;
namespace MyNamespace
{
	int values = 200;
	void show()
	{
		std::cout<<"Namespace value:"<<value<<std::endl;
	}
}
int main()
{
	int value = 300;
	std::cout<<"Local value:"<<value<<std::endl;
	std::cout<<"Gobal value:"<<::value<<std::endl;
	gobal
	std::cout<<"Nmaespace value:"<<MyNamespace::value<<std::endl;
	from namespace
	MyNamespace::show();
	return 0;
}
