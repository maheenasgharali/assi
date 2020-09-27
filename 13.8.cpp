#include <iostream>
using namespace std;
class number
{
	private:
		int x,y;
	public:
		number()
		{
			x=y=100;
		}
		void avg()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"average="<<(x+y)/2<<endl;
		}
};
main()
{
	number n;
	n.avg();
}

		

