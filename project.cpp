//simple food ordering system
#include<iostream>
using namespace std;
//function prototype
void greeting();
void menu();

void display(string f1,string f2,string f3,int cost1,int cost2,int cost3);

void process(string f1,string f2,string f3,int quan, int cho,int cost1,int cost2,int cost3);


void additional();
void mistake();
void totals(int x);


float total_cost=0;//global variable

int main(){
	
	int choice,pchoice, quantity,gotostart;
	string  out1="በርገር",out2="ፒዛ" ,out3="አርስቶ",fast1="ተጋቢኖ" , fast2="ሽሮ ፈሰስ",fast3="በያይነት", sand1="ጥብስ", sand2="ቅቅል", sand3="እንቁላል",hot1="ቡና", hot2="ሻይ", hot3="የፈላ ወተት", soft1="ሚሪንዳ", soft2="ኮካ-ኮላ",soft3="ፋንታ";
	greeting();//function calling
beginning://label of goto statment
	menu();
	cin>>choice;
	if(choice==1)//orginal if
  {
   
  int	  co1=300, co2=500,co3=1500;
// co1=cost of out 1
  display(out1,out2,out3,co1,co2,co3);

		cin>>pchoice;
			if(pchoice>=1 && pchoice<4){
			    //nested if
			cout<<"\nስንት ይፈልጋሉ: ";
			cin>>quantity;
				 process(out1,out2,out3,quantity,pchoice,co1,co2,co3);

		cin>>gotostart;	if(gotostart==1)//double nest
			goto beginning;
			else
			totals(total_cost);
				}
		
		else{// nested else
	mistake();
				
				cin>>gotostart;
if(gotostart==1)//double nested
 goto beginning;
 else
 totals(total_cost);

 }}
 
else if(choice==2){// first if
		
		int cf1=110,cf2=90,cf3=80;
		//cf1=cost of fast 1
		display(fast1,fast2,fast3,cf1,cf2,cf3);
			cin>>pchoice;
		if(pchoice>=1 && pchoice<=3)	{
			//nested if
			cout<<"\nስንት ይፈልጋሉ:";
			cin>>quantity;
			process(fast1,fast2,fast3,quantity,pchoice,cf1,cf2,cf3);


 	cin>>gotostart;
	if(gotostart==1)//double nested
			  goto beginning;
			  else
			  totals(total_cost);
			  
			 }
			 	
			 	else{//nested
			mistake();
					cin>>gotostart;
if(gotostart==1)//double nested
 goto beginning;
 else
 totals(total_cost);
     
            }}
			
	else if(choice==3){//orginal if
		    
		 	    int cs1=200,cs2=160,cs3=100;
		   //cs1=cost of sand 1
 display(sand1,sand2,sand3,cs1,cs2,cs3);
cin>>pchoice;
		if(pchoice>=1 && pchoice<=3){
			//nested if
			cout<<"\nስንት ይፈልጋሉ: ";
			cin>>quantity;
		
			process(sand1,sand2,sand3,quantity,pchoice,cs1,cs2,cs3);


 	cin>>gotostart;
	if(gotostart==1)//double nested
			 goto beginning;
			 else
			 totals(total_cost);
			 } 	
 else{//nested
mistake();
				cin>>gotostart;
if(gotostart==1)//double nested
 goto beginning;
 else
 totals(total_cost);
			
            }}
			 
  else if(choice==4)	{//orginal if
       
       int ch1=15,ch2=10,ch3=20;
       //ch1=cost of hot 1
       display(hot1,hot2,hot3,ch1,ch2,ch3);
		cin>>pchoice;
		if(pchoice>=1 && pchoice<=3){
		//nested if
				cout<<"\nስንት ይፈልጋሉ? : ";
			cin>>quantity;
		
			process(hot1,hot2,hot3,quantity,pchoice,ch1,ch2,ch3);


		cin>>gotostart;
	if(gotostart==1)//double nested
			 goto beginning;
			 else
			 totals(total_cost);
			 	}
		
		else{//nested
	mistake();
				
				cin>>gotostart;
if(gotostart==1)//double nested
 goto beginning;
 else
 totals(total_cost);
			
			}}
					
else if(choice==5){//orginal if
		
		int cso1=35,cso2=40,cso3=35;
		//cost of soft 1
		display(soft1,soft2,soft3,cso1,cso2,cso3);
			cin>>pchoice;
		if(pchoice>=1 && pchoice<=3){
		//nested if
				cout<<"\nስንት ይፈልጋሉ: ";
			cin>>quantity;
			 process(hot1,hot2,hot3,quantity,pchoice,cso1,cso2,cso3);

	cin>>gotostart;
	if(gotostart==1)//double nested
			 goto beginning;
			 else
			 totals(total_cost);
	}	
					
	else{//nested
mistake();
			
					cin>>gotostart;
if(gotostart==1)//double nested
 goto beginning;
 else
 totals(total_cost);

  }}
	
	else{//orginal else
			mistake();
		
		cin>>gotostart;
if(gotostart==1)//nested if
goto beginning;
else
totals(total_cost);
	}
 return 0;}

//function defination
void greeting(){
		    char name[20] ;
		cout<<"\t\t  እንኳን ወደ ሰናይ ባርና ሪስቶራንት በሰላም መጡ!!  ስለመጡ እናመሠግናለን።\n\n\n\n";
		cout<<"እባክዎ ስምዎን ያስገቡ:\t";
cin.get(name,20);
	cout<<"ሰላም:\t"<<name<<endl;
		}

void menu(){
   cout<<"\nምን ማዘዝ ይፈልጋሉ?\n";
	cout<<"\tማውጫ\n";
cout<<"1) የውጪ ሀገር ምግቦች\n";
	cout<<"2) የፆም ምግቦች\n";
	cout<<"3) የፍስክ ምግቦች\n";
	cout<<"4) ትኩስ ነገር\n";
	cout<<"5) ለስላሳ መጠጦች\n\n";
	
	cout<<"\nእባክዎ ምርጫዎን ያስገቡ: ";
 }

void display(string f1,string f2,        string f3,int cost1,int cost2,int cost3){	cout<<"\n1) "<<f1<<" : ዋጋ = "<<cost1<<endl;
		cout<<"2) "<<f2<<" : ዋጋ = "<<cost2<<endl;
		cout<<"3) "<<f3<<" : ዋጋ = "<<cost3<<endl;
		
		cout<<"\nእባክዎትን የሚፈልጉትን ይምረጡ?:";
    }

void process(string f1,string f2,string f3,int quan, int cho,int cost1,int cost2,int cost3){
   float total;

switch(cho)	{
			   
			case 1:
 total = cost1*quan;cout<<"\t\t\tያዘዙት \n";
cout<<"\t\t\t"<<quan<<" "<<f1;
	total_cost+=total;
			 break;

		case 2:
 total = cost2*quan; cout<<"\t\t\tያዘዙት \n";
			 cout<<"\t\t\t"<<quan<<" "<<f2;
total_cost+=total;
			break;

      case 3:
 total= cost3*quan;
 cout<<"\t\t\tያዘዙት \n";
			 cout<<""<<quan<<" "<<f3;
total_cost+=total;
			 break;}
additional();
			 }

void additional(){
   cout<<"\nተጨማሪ ማዘዝ ይፈልጋሉ?\n 1) አዎ\n2) አልፈልግም\n";
    }

void mistake (){
		cout<<"\n\tየተሳሳተ ምርጫ አስገብተዋል ምርጫዎን አስተካክለው ማዘዝ ይፈልጋሉ?\n 1) አዎ\n2) አልፈልግም\n " ;
			}

 void totals(int x){
   float vat,sum;
    vat=(15*x)/100;
cout<<"\t\tጠቅላላ ፍጆታ = "<<x<<endl;cout<<"\t\tvat = "<<vat<<endl;
sum=x+vat;
 cout<<"\t\tአጨቃላይ ሂሳብ = "<<sum;
cout<<"\n\nእኛን ስለመረጡን እናመሰግናለን።\n";
}



		
		

		
 



