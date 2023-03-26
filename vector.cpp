#include<iostream>
#include<vector>

using namespace std;


int main()
{
	cout << "how many string you want to enter: " << endl;
	int n;
	cin>>n;
	string s;
	vector<string> str;
	while (str.size()<n)
	{
		cin>>s;
		str.push_back(s);
	}
	
	for (vector<string> :: iterator it; it == str.begin(); it != str.end();it++)
	{
		cout << *it << endl;
	}
}
