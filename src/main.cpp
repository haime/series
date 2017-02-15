#include "Series.h"

int main()
{
	std::cout<<"Hello World"<<std::endl;

	int n = 12; //859320171;

	Series s(n);
	std::cout<<s.fibonacciIt()<<std::endl;
	std::cout<<s.fibonacciRec(n)<<std::endl;
	std::cout<<s.factorialIt()<<std::endl;
	std::cout<<s.factorialRec(n)<<std::endl;

	return 0;
}