#include<iostream>
using namespace std;

class room{
	
	private: 
	int l,b,h;
	
	public:
		void initialize(int len, int bred, int high)
		{
			l= len;
			b= bred;
			h= high;
		}
		
		int calculatearea()
		{
		   return l*b;	
		}
		int calculatevolume()
		{
			return l*b*h;
		}
	
	
	
};




int main()
{
	
	room r;
	
	r.initialize(10,20,30);
	cout << "volume of room : " << r.calculatevolume()<< endl;
	cout << "area of room: " << r.calculatearea();
	
	
	return 0;
}
