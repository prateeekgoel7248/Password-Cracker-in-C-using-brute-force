//how to crack integer password in c/c++

#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(){
	char password[30];
	cout<<"Enter your integer password : ";
	char ch;
	int i=0;
	while(1){
		ch = getch();
		if(ch==13){
			password[i]='\0';
			break;
		}
		else if(ch==8){
			if(i>0){
				i--;
				cout<<"\b \b";
			}
		}
		else{
			password[i]=ch;
			i++;
			cout<<"*";
		}
	}
	char predicted_pass[30];
	while(strcmp(predicted_pass,password)!=0){
		int length= strlen(password);
		for(i=0;i<length;i++){
			predicted_pass[i]=(char)((rand()%10)+48);
		}
		predicted_pass[i]='\0';
		cout<<predicted_pass<<endl;
		if(strcmp(predicted_pass,password)==0){
			break;
		}
	}
	cout<<"Your password is : "<<predicted_pass<<endl;
	
}
//thanks Everyone for watching this video

