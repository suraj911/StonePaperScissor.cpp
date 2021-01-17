#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string all3[10] = {"sto","pap","sci","sto","pap","sci","sto","pap","sci","sto"};
	
	cout<<"This Game is of 10 points. \nThe palyer who has maximum score wins the Game \n"<<endl;
	cout<<"Use \nsto-->stone, \npap-->paper, \nsci-->scissors"<<endl;
	srand(time(NULL));
	int computer=0,player=0;
	string yourchoise;
	for(int i=0;i<10;i++){
		cout<<"Enter your choice:"<<endl;
		cin>>yourchoise;
		int guess = rand() % 10;
		cout<<"My choice is "<<all3[guess]<<endl;
		if(yourchoise == "sto" and all3[guess] == "sci"){
			cout<<"You got it right :)"<<endl;
			if(computer>0) computer--;
			else{computer=0;}
			player++;	
		}
		if(yourchoise == "sci" and all3[guess] == "pap"){
			cout<<"You got it right :)"<<endl;
			if(computer>0) computer--;
			else{computer=0;}
			player++;	
		}
		if(yourchoise == "pap" and all3[guess] == "sto"){
			cout<<"You got it right :)"<<endl;
			if(computer>0) computer--;
			else{computer=0;}
			player++;	
		}
		if(yourchoise == "pap" and all3[guess] == "sci"){
			cout<<"Computer got it right :("<<endl;
			computer++;
			if(player>0){player--;}
			else{player=0;}
		}
		if(yourchoise == "sto" and all3[guess] == "pap"){
			cout<<"Computer got it right :("<<endl;
			computer++;
			if(player>0){player--;}
			else{player=0;}
		}
		if(yourchoise == "sci" and all3[guess] == "sto"){
			cout<<"Computer got it right :("<<endl;
			computer++;
			if(player>0){player--;}
			else{player=0;}
		}
		cout<<"SCOREBOARD:"<<" Computer points-->"<<computer<<" Player points-->"<<player<<endl;
	}

	if(computer>player){
		cout<<"You loose duffer :)"<<endl;
	}
	else{
		cout<<"You win ! I am SAD :("<<endl;
	}
	return 0;
}
