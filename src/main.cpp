#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctype.h>

using namespace std;



int main()
{
	vector<int> num_list;
	string tmp_input = "0";

	float tmp_num;
	while(true){
		cout<<"Quel est votre nombre?"<<endl;
		cin>>tmp_num;
		num_list.push_back(tmp_num);
		sort(num_list.begin(), num_list.end());
		for(int i = 0; i < num_list.size(); i++){
			cout<<num_list[i]<<endl;
		}
	}
}