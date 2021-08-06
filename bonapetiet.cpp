#include<bits/stdc++.h>
using namespace std;
int mcourse(void);
void getcha(void);
int beverages(void);
int starters(void);
void welcome(void);
void front(void);
void scrn(void);
int menu(void);
void bill(int a=0,int b=0,int c=0);
void getcha(void){
    char op;
    cin>>op;
}
void clrscr(void) { 
  #ifdef WINDOWS 
  system("cls"); 
  #endif 
  #ifdef LINUX 
  system("clear"); 
  #endif 
} 
void welcome()
 {
  clrscr();
  cout<<"\n********************************************************************************";
  cout<<"\n\t\t ***** WELCOME TO STREET FOOD CORNER *****";
  cout<<"\n\t\t___________________________________________";
  cout<<"\n********************************************************************************";
  char un[10]={"admin"},pw[10]={"admin"},usn[10],psw[10];
  cout<<endl<<endl<<"\n\n\t\t\t***WELCOME ADMIN***"<<endl;
  cout<<"\n\t\t\tUSERNAME : ";
  cin>>usn;
  cout<<"\n\t\t\tPASSWORD : ";
  cin>>psw;
  if(strcmp(usn,un)==0 && strcmp(psw,pw)==0)
  {
  cout<<"\n LOGIN SUCESSFULL";
  menu();
  }
  else
  {
  cout<<"INCORRECT USERNAME AND PASSWORD \n ";
  getcha();
  exit(0);
  }
 }
void scrn()
{
  clrscr();
  char ch;
  cout<<"\n\n\n\n\n\n\t\tGOOD FOOD IS THE FOUNDATION OF GENUINE HAPPINESS";
  cout<<"\n\n\n\n\n\n\t\tDONT BE EYE CANDY ,BE SOUL FOOD";
  cout<<"\n\n\n\n\t\tPress y to exit : ";
  cin>>ch;
  if ((ch=='y')||(ch=='Y'))
  {
  exit(0);
  }
  menu();
  clrscr();
}
int menu()
 {
  clrscr();
  char yn='y';
  int choi,s=0,m=0,b=0;
  while(yn=='y'||yn=='Y')
  {
  cout<<"\n\n\t\t\tYou would like to have";
  cout<<"\n\n1.Starters";
  cout<<"\n\n2.Main course";
  cout<<"\n\n3.Beverages";
  cout<<"\n\n4.Exit";
  cout<<"\n\nEnter your choice : ";
  cin>>choi;
  switch(choi)
  {
  case 1:
	  s=starters();
	  break;
  case 2:
	  m=mcourse();
	  break;
  case 3:
	  b=beverages();
      break;
  case 4: exit(0);
      break;
  default:cout<<"Wrong Choice:";
	  break;
  }
  cout<<"\n\nAnything else?(y/n)";
  cin>>yn;
  }
  char c;
  cout<<"\n\nWant to Print your BILL?(y/n) ";
  cin>>c;
  if(c=='y'||c=='Y')
  {
  bill(s,m,b);
  }
  else
   scrn();
  getcha();
  return 0;
 }
int starters()
 {
 int cost=0;
 char rep='y';
  while(rep=='y'||rep=='Y')
  {
  clrscr();
  int q;
  int A[10],ch;
  cout<<"\n 1.Samosas";
  cout<<"\n 2.Kahwa Chai";
  cout<<"\n 3.Gol Gappe ";
  cout<<"\n 4.Tikkis";
  cout<<"\n 5.Papdi Chaat";
  cout<<"\n 6.Galouti Kebab";
  cout<<"\n 7.Tangdi Kebab";
  cout<<"\n 8.Momos";
  cout<<"\n 9.Dosa";
  cout<<"\n 10.Thupka";
  cout<<"\n\nEnter your choice : ";
  cin>>ch;
  cout<<"\nQuantity : ";
  cin>>q;
  switch(ch)
  {
  case 1: cout<<"Cost of Samosa : 10rs/plate";
	  cost=cost+10*q;
	  break;
  case 2: cout<<"Cost of Khawa Chai : 30rs";
	  cost=cost+30*q;
	  break;
  case 3: cout<<"Cost of Golgappa : 10rs/plate";
	  cost=cost+10*q;
	  break;
  case 4: cout<<"Cost of Tikki : 30rs/plate";
	  cost=cost+30*q;
	  break;
  case 5: cout<<"Cost of Papdi Chat : 20rs/plate";
	  cost=cost+20*q;
	  break;
  case 6: cout<<"Cost of Galoti Kabab : 150rs/plate";
	  cost=cost+150*q;
	  break;
  case 7: cout<<"Cost of Tangadi Kabab : 175rs/plate";
	  cost=cost+175*q;
	  break;
  case 8: cout<<"Cost of Momos : 50rs/plate";
	  cost=cost+50*q;
	  break;
  case 9: cout<<"Cost of Dosa : 80rs/plate";
	  cost=cost+80*q;
	  break;
  case 10: cout<<"Cost of Thupkka : 100rs/plate";
	  cost=cost+100*q;
	  break;
  default:cout<<"Wrong Choice";
	  clrscr();
	  menu();
	  break;
  }
  cout<<"\n\nYour Bill amount(y/n) : "<<cost;
  cout<<"\n\nAnything else (y/n) : ";
  cin>>rep;
  }
  return(cost);
}
int mcourse()
{
  int x,q,ch,cost=0;
  char rep;
  do
  {
  clrscr();
  cout<<"\n 1.Butter Chicken";
  cout<<"\n 2.Veg Biryani";
  cout<<"\n 3.Tandoori Chicken";
  cout<<"\n 4.Malai Kofta";
  cout<<"\n 5.Matar Paneer";
  cout<<"\n 6.Chana Masala";
  cout<<"\n 7.Chicken Biriyani";
  cout<<"\n 8.Chicken Tikka";
  cout<<"\n 9.Dal Makhani";
  cout<<"\n 10.Keema";
  cout<<"\n 11.Pulao";
  cout<<"\n 12.Sambhar";
  cout<<"\n Any other key to Exit";
  cout<<"\n\nEnter your choice : ";
  cin>>ch;
  cout<<"\nQuantity : ";
  cin>>q;
  switch(ch)
  {
  case 1: cout<<"Cost of Butter Chicken : 300rs/plate";
	  cost=cost+300*q;
	  break;
  case 2: cout<<"Cost of Veg Biryani : 250rs";
	  cost=cost+250*q;
	  break;
  case 3: cout<<"Cost of Tandoori Chicken : 150rs/plate";
	  cost=cost+150*q;
	  break;
  case 4: cout<<"Cost of Malai Kofta : 100rs/plate";
	  cost=cost+100*q;
	  break;
  case 5: cout<<"Cost of Matar Paneer : 120rs/plate";
	  cost=cost+120*q;
	  break;
  case 6: cout<<"Cost of Chana Masala : 80rs/plate";
	  cost=cost+80*q;
	  break;
  case 7: cout<<"Cost of Chicken Biryani : 300rs/plate";
	  cost=cost+300*q;
	  break;
  case 8: cout<<"Cost of Chicken Tikka : 350rs/plate";
	  cost=cost+350*q;
	  break;
  case 9: cout<<"Cost of Daal Makhani : 100rs/plate";
	  cost=cost+100*q;
	  break;
  case 10: cout<<"Cost of Keema : 200rs/plate";
	  cost=cost+200*q;
	  break;
  case 11: cout<<"Cost of Pulao : 150rs/plate";
	  cost=cost+150*q;
	  break;
  case 12: cout<<"Cost of Sambhar : 100rs/plate";
	  cost=cost+100*q;
	  break;

  default:cout<<"Wrong Choice";
	  break;
  }
   cout<<"\n\nYour Bill amount(y/n) : "<<cost;
   cout<<"\n\nAnything else (y/n) : ";
   cin>>rep;
   }while((rep=='y')||(rep=='Y'));
   return(cost);
}
int beverages()
{
  int ch,cost=0,q;
  char rep;
  do
  {
  clrscr();
  cout<<"\n 1.Blue Lagoon";
  cout<<"\n 2.Virgin Mojito";
  cout<<"\n 3.Lassi";
  cout<<"\n 4.Coffee";
  cout<<"\n 5.Lemon Tea";
  cout<<"\n\nEnter your choice : ";
  cin>>ch;
  cout<<"\n\nquantity";
  cin>>q;
  switch(ch)
  {
  case 1: cout<<"Cost of Blue Lagoon : 200rs";
	  cost=cost+200*q;
	  break;
  case 2: cout<<"Cost of Virgin Mojito : 150rs";
	  cost=cost+150*q;
	  break;
  case 3: cout<<"Cost of Lassi : 80rs";
	  cost=cost+150*q;
	  break;
  case 4: cout<<"Cost of Coffee : 100rs";
	  cost=cost+100*q;
	  break;
  case 5: cout<<"Cost of Lemon Tea : 60rs";
	  cost=cost+60*q;
	  break;

  default: cout<<"Wrong Choice";
	  break;
  }
  cout<<"\n\nYour Bill amount(y/n) : "<<cost;
  cout<<"\n\nAnything else (y/n) : ";
  cin>>rep;
  }while((rep=='y')||(rep=='Y'));
  return(cost);
}
void bill(int a,int b,int c)
{
  clrscr();
  char ch;

  int total=a+b+c;
  cout<<"\n\n\t\t\t****STREET FOOD CORNER***\n\n";
  cout<<"\n\n************************************************************************";
  cout<<"\n\n\t\tYour total bill amount : "<<total;
  cout<<"\n\n************************************************************************";
  ofstream filout;
  filout.open("total.dat",ios::out);
  filout<<total<<"\n";
  filout.close();
  cout<<"\n\t\tWant to order again ?(y/n) : ";
  cin>>ch;
  if(ch=='y'||ch=='Y')
  menu();
  else
  scrn();
}
int main()
{
clrscr();
welcome();
scrn();
getcha();
return 0;
}