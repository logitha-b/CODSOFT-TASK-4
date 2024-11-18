#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	vector<string> tasks;
	int choice;
	string task;
	int number;
	
	while(true){
	cout<<"\nto do:\n1.add task\n2.view task\n3.remove task\n4.click to finish\nyour choice: "<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"enter task: ";
			cin.ignore();
			getline(cin,task);
			tasks.push_back(task);
			cout<<"added: "<<task<<endl;
			break;
			
		case 2:
			cout<<"to do: "<<endl;
			for(size_t i=0;i<tasks.size();++i){
				cout<<i+1<<" . "<<tasks[i]<<endl;
			}
			break;
		case 3:
			cout<<"to remove: ";
			cin>>number;
			if(number>0 &&number<=tasks.size()){
				tasks.erase(tasks.begin()+number-1);
				cout<<"removed: "<<endl;
			}
			else{
				cout<<"invalid";
			}
			break;
		case 4:
			cout<<"done!!!"<<endl;
	}
	}
}


