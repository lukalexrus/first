#include "iostream"
#include <string>
#include <thread>
using namespace std;

void foo(string *a, double &b)// ссылки и указатели foo(&c, b) ;
{
	std::cout << *a<<std::endl;
	int t = 9,r;
	r = (t + b);
	std::cout << r << std::endl;
	//return r;
}


void con(bool a, bool b)// continue;
{
	int kol = 5;
	while (a)
	{
		if (b)
		{
			b = false;
			a = false;
			std::cout <<" b= "<< b <<"  v tele" << std::endl;
			continue;
			
		}
		b = true; //этот текст не напечатается.
		std::cout <<"a= "<< a << "  vne tela" << std::endl;
	}
}


int main()
{
	int a = 5,d;
	double b = 3.14;
	std::string c = "hello";
	std::string *e = &c;
	//thread t(foo, &c,(double)a);
	bool f = true, g = true;
	con(f, g);
	//d = foo(&c, b);
	//t.join();
	// foo(&c, b) ;
	//system("pause");
	return 0;
}