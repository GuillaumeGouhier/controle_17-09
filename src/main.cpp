#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctype.h>
#include <fstream>
#include <cstring>
using namespace std;


int main(){
	//Initialisation
	vector<int> num_list;
	ifstream last_save;
	last_save.open("list.txt");
	if (last_save.is_open())
	{
		
		char *line;
		while(last_save.getline(line)){

			num_list.push_back(atof(line));
		}
		
	}

	int choice;
	float tmp_num;

//Menu
	while(true){

		ofstream list;
		list.open ("list.txt");
		cout<<"Voici la liste en cours: "<<endl;
		for(int i = 0; i < num_list.size(); i++){
			cout<<num_list[i]<<endl;
			
			list << num_list[i]<<"\n";
		}
		list.close();

		cout<<"Que souhaitez vous faire? (1 pour ajouter un nombre, 2 pour en supprimer un, 3 pour supprimer toutes les occurences de ce nombre et 4 pour quitter"<<endl;
		cin>>choice;

//Execution en fonction du choix utilisateur
		switch(choice){
			case 1:
				cout<<"Quel nombre doit on ajouter?"<<endl;
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