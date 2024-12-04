#include<iostream>
using namespace std;
int main(){
	int balance,currentbalance=0,depositMoney,withdrawlMoney,exit;
	cout<<"1.Current Balance"<<endl;
	cout<<"2.Deposit Money"<<endl;
	cout<<"3.Withdraw Money"<<endl;
	cout<<"4.exit"<<endl;
	do{
		switch(currentbalance){
		
		case 1:
			cout<<"This is your"<<currentbalance;
			break;
			case 2 :
				cout<<"Enter the deposit amount"<<endl;
				cin>>depositMoney;
				balance=currentbalance+depositMoney;
				break;
				case 3:
					cout<<"Enter the withdrawl amount"<<endl;
					cin>>withdrawlMoney;
					if(withdrawlMoney<currentbalance||withdrawlMoney==currentbalance);{
					cout<<currentbalance-withdrawlMoney;
				}
						break;
						case 4:
						cout<<"exit";
						break;
						default:
						cout<<"Invalid Choice";
					}
				}
						while(currentBalance!=4);
					}
					return 0;
				}
						
					
					
				
		
		
	
	
	
