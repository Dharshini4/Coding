#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec;
	for (int i=0;i<5;i++)
	{
	int temp;
	cout<<"Enter a number\n";
	cin>>temp;
	vec.push_back(temp);
	}
	//Iterator for parsing
	vector<int>::iterator pos;
	for(pos=vec.begin();pos!=vec.end();pos++)
		cout<<*pos<<endl;  
return 0;
}
