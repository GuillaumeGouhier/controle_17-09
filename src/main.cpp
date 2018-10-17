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
	int choice;
	float tmp_num;
	while(true){
		
		cout<<"Voici la liste en cours: "<<endl;
		for(int i = 0; i < num_list.size(); i++){
					cout<<num_list[i]<<endl;
				}
		cout<<"Que souhaitez vous faire? (1 pour ajouter un nombre, 2 pour en supprimer un, 3 pour supprimer toutes les occurences de ce nombre et 4 pour quitter"<<endl;
		cin>>choice;

		switch(choice){
			case 1:
				cout<<"Quel est votre nombre?"<<endl;
				cin>>tmp_num;
				num_list.push_back(tmp_num);
				sort(num_list.begin(), num_list.end());
				break;
	
			case 2:
				cout<<"Quel nombre doit on supprimer?"<<endl;
				cin>>tmp_num;
				for (int i = 0; i < num_list.size(); ++i)
				{
					if (num_list[i] == tmp_num)
					{
						num_list.erase(num_list.begin()+i);
						break;
					}
				}


				break;

			case 3:
				cout<<"Quel nombre doit on supprimer?"<<endl;
				cin>>tmp_num;
				
				for (int i = 0; i < num_list.size(); ++i)
				{
					if (num_list[i] == tmp_num)
					{
						num_list.erase(num_list.begin()+i);
						i--;
					}
				}

				break;
			case 4:
				cout<<"Au revoir"<<endl;
				return 0;
		}
	}
}