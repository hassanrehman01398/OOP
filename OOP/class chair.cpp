#include<iostream>
#include<conio.h>
using namespace std;

class Chair{
	
};

class room{
	private:
		int chairno;
		Chair* chair[10];
		public:
			room(){
				for(int i=0;i<10;i++){
					chair[i]=NULL;
				}
			}
void AddChair(Chair* ch,int chairno){
	if(chairno>=0 && chairno<10){
		chair[chairno]=ch;
	}
}
Chair* getchair(int chairno){
	if(chairno>=0 && chairno<10){
		return chair[chairno];
	}
	else
		return NULL;
}
};

int main(){
	Chair ch[10];
	room r1;
	cout<<"Room details are "<<endl;
	for(int i=0;i<10;i++){
		r1.AddChair(&ch[i],i);
		cout<<"Chair no"<<i<<"placed at "<<r1.getchair(i);
		cout<<endl;
	}
	getche();
}
