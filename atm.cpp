#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu(){
	cout<<"*********MENU************"<<endl;
	cout<<"Please select an option"<<endl;
	cout<<"1) Check balance"<<endl;
	cout<<"2) Deposite."<<endl;
	cout<<"3) withdraw."<<endl;
	cout<<"4) Exit."<<endl;
}



int main() {

double balance = 0.50;
	int option;
	do{
	menu();	
	cin>>option;
	system("cls");	
	switch(option)
	{
		case 1:
			cout<<"Your Account balance is : K"<<balance<<endl;
			break;
		case 2:
			cout<<"Please enter an Amount you want to deposite"<<endl;
			double depositeAmount;
			cin>>depositeAmount;
			balance += depositeAmount;
			cout<<"You deposited K"<<depositeAmount<<". Your new Balance is K"<<balance<<endl;
			break;
		case 3: 
			cout<<"Please enter an amount you would like to withdraw from your account: "<<endl;
			double withdrawAmount;
			cout<<">.";
			cin>>withdrawAmount;
			if(balance>withdrawAmount){
			
			 balance = balance - withdrawAmount;
			 cout<<"You have withdrawn K"<<withdrawAmount<<"from your account. Your new balance is K"<<balance<<endl;
			}
			else{
				cout<<"You have insufficient balance in your account!!"<<endl;
			}
		
			
	}
}while(option !=4);
	
	return 0;
}
