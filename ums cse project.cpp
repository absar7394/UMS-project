#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
 class ums
 {
 	int u;
 	char p[100];
 	public:
 		void show()
 		{
		 
 		cout<<"\n"<<                                                                                              "\n";
 		cout<<"\n"<<"----------------------------------------------------------------------------------------------"<<"\n";
 		cout<<"\n"<<"----------------------------UNIVERSITY INFORMATION SYSTEM------------------------------------"<<"\n";
 		cout<<"\n"<<"----------------------------------------------------------------------------------------------"<<"\n";
 		cout<<"\n"<<                                                                                                "\n";
 	}
 
  void getdata()
  	{ 
  	
  	     string pw="absar";
  	
  	
  	
	     	cout<<"\n"<<"\n";
 			cout<<"\n"<<"----------------------------------------------------------------"<<"\n";
 		    cout<<"\n"<<"                           LOGIN PAGE                            "<<"\n";
 		    cout<<"\n"<<"----------------------------------------------------------------"<<"\n";
 		    	cout<<"\n"                          <<"\n";
 		    
 		cout<<"\n"<<"user id=";
		 cin>>u;
		 cout<<"\n"<<"password=";
		cin>>p;
		if (p==pw)
		{
			
				cout<<"\n"<<"----------------------------------------------------------------------------------------------"<<"\n";
			cout<<"welcome";
				cout<<"\n"<<"----------------------------------------------------------------------------------------------"<<"\n";
 		cout<<"\n"<<                                                                                                "\n";
		   get();
		   
		}
		else
		{
				cout<<"\n"<<"----------------------------------------------------------------------------------------------"<<"\n";
				
				           
			cout<<"WARRNING!!(PASSWORD IS INCORRECT)";
			
				cout<<"\n"<<"----------------------------------------------------------------------------------------------"<<"\n";
 		cout<<"\n"<<                                                                                                "\n";
			getdata();
			
			
		}
		
}
	void get()
	{
	  int opt;
	   cout<<"\n"<<"enter where you want to go"<<"\n";
	   cout<<"press 1. For Home page"<<"\n";
	   cout<<"press 2.For logout"<<"\n";
	   cin>>opt;
	   switch(opt)
{
	case 1:
		h();
		break;
		  
    case 2:
    	out();
    	break;
    	
		
}
	   	 
			 }
			 
			 
 void h()
 { int op;
 	   cout<<"\n"<<"enter where you want to go"<<"\n";
	   cout<<"press 1.For FINANCE MANAGEMENT SYSTEM"<<"\n";
	   cout<<"press 2.FOR EXAMNATION REGISTRATION"<<"\n";
	    cout<<"press 3. FOR ATTENDENCE AND RESULT CHECK"<<"\n";
	   cout<<"press 4. FOR LEARNING MANAGEMENT SYSTEM "<<"\n";
	   cin>>op;
	   switch(op)
	   {
	      case 1:
          fee();
			break;
			case 2:
					exa();
				break;
			case 3:
				att();
				break;
			case 4:
			  ass();
				break;
			}
			
				   	
 }
 void out()
 { 
 	cout<<"welcome to the login page again"<<"\n";
 	
 	getdata();
 }
 void ass()
 {
 	 int s;
	   cout<<"\n"<<"LEARNING MANAGEMENT SYSTEM"<<"\n";
	   cout<<"press 1. EXIT"<<"\n";
	   cout<<"press 2. PROJECT SUBMISSION"<<"\n";
	   cin>>s;
	   switch(s)
	   {
	   	case 1:
	   		ar();
	   		break;
	   		case 2:
	   			ps();
	   			break;
	   }
 }
	void fee()
	{
		  
		  int d;
		   cout<<"\n"<<"FINANCE MANAGEMENT SYSTEM"<<"\n";
	   cout<<"press 1. FEE STATMENT"<<"\n";
	   cout<<"press 2. FEE PAYMENT"<<"\n";
	   cin>>d;
	   switch(d)
	   {
	   	case 1:
	   		fs();
	   		break;
	   		case 2:
	   			fp();
	   			break;
	   			
	   }
	}
	void att()
	{
	  int v;
		  
		   cout<<"\n"<<"ENTER YOUR CHOICE"<<"\n";
	   cout<<"press 1. ATTENDENCE"<<"\n";
	   cout<<"press 2. RESULT CHECK"<<"\n";
	   cin>>v;
	   switch(v)
	   {
	   	case 1:
	   		ac();
	   		break;
	   		case 2:
	   			rc();
	   			break;
	   				
		 }  
	}
	void ac()
	{ int x,l=11717394;
		cout<<"ENTER THE REGISTRATION NO=";
			cin>>x;
			if(x==l)
			{
				cout<<"\n"<<"the attendence is:-90%"<<"\n";
				
			}
			else
			{
				cout<<"\n"<<"the attendenc is=85%"<<"\n";
			}
			h();
			
	}
	void rc()
	{
	  int s,k=2017,o=2018,e=2019,q=2020,i=2021;
	  cout<<"ENTRE THE SECTION FROM(2017-2021)=";
	  cin>>s;
	  if(s==k)
	  {
	      	  int ot;
		   cout<<"\n"<<"RESULT CHECK"<<"\n";
	   cout<<"press 1. FOR SEMESTER 1"<<"\n";
	   cout<<"press 2. FOR SEMESTER 2"<<"\n";
	   cin>>ot;
	   switch(ot)
	   {
	   	case 1:
	   			cout<<"\n"<<"----------------------------------------------------------------"<<"\n";
	   		cout<<"the TGPA=7.8"<<"\n";
	   			cout<<"\n"<<"----------------------------------------------------------------"<<"\n";
	   		break;
	   		case 2:
	   			cout<<"\n"<<"----------------------------------------------------------------"<<"\n";
	   			cout<<"the TGPA=7.0"<<"\n";
	   			cout<<"THE COMBINE CGPA IS=7.4"<<"\n";
	   			cout<<"\n"<<"----------------------------------------------------------------"<<"\n";
	   			break;
	   			
	   }  

}
	  else if(s==o)
	    {
	    	cout<<"\n"<<"the result not found"<<"\n";
		}
	else if(s==e)
	    {
	    	cout<<"\n"<<"the result not found"<<"\n";
		}
		else if(s==q)
	    {
	    	cout<<"\n"<<"the result not found"<<"\n";
		}
		 else if(s==i)
	    {
	    	cout<<"\n"<<"the result not found"<<"\n";
		}
		else
		{
			cout<<"\n"<<"the enter section is in valid"<<"\n";
		}
		
		
		cout<<"\n";
		
		
		
  h();
	}
	void exa()
	{ int id;
	char n[10];
	char c[10];
	char s[10];
	 
	 cout<<"\n"<<"REGISTRATION:-";
	 cin>>id;
	 cout<<"\n"<<"NAME:-"<<"\n";
	 	cin>>n;
	 	cout<<"COURSE:-"<<"\n";
	 	cin>>c;
	 	cout<<"SUBJECT:-"<<"\n";
	 	cin>>s;
	 	cout<<"\n"<<"----------------------------------------------------------------"<<"\n";
	 	cout<<"\n"<<"THE REGISTRATION HAS BEEN SUBMITTED"<<"\n";
	 	cout<<"\n"<<"----------------------------------------------------------------"<<"\n";
	 	get();
       
	}

	void fp()
	{
		
		int i,py,c;
	char na[10];
	char b[10];
	int f;
	 cout<<"FEES PAYMENT FORM"<<"\n";
	 cout<<"REGISTRATION no:-"<<"\n";
	 cin>>i;
	 cout<<"NAME:-"<<"\n";
	 	cin>>na;
	 	cout<<"COURSE:-"<<"\n";
	 	cin>>b;
	 	cout<<"\n"<<"PRESS1.FOR PAYTM"<<"\n";
	 	cout<<"\n"<<"PRESS2.FOR CASH"<<"\n";
	 	cin>>py;
	 	switch(py)
	 	{
	 		case 1:
	 				cout<<"TRANSECTION NO:-"<<"\n";
	 	cin>>f;
	 	break;
	 			case 2:
	 					cout<<"ENTER THE CASH AMOUNT:-"<<"\n";
	 	cin>>c;
	 	break ;
		 }
	 	cout<<"\n"<<"----------------------------------------------------------------"<<"\n";
	 	cout<<"\n"<<"FEES HAVE BEEN SUBMITTED"<<"\n";
	 	cout<<"\n"<<"----------------------------------------------------------------"<<"\n";
	}
	
	void fs()
	{
	cout<<"||FEES FOR SECTION||"<<"\t";
	cout<<"||AMOUNT OF TUTION FEES|| "<<"\t";
	cout<<"||AMOUNT OF HOSTEL AND FOOD|| "<<"\t";
	cout<<"||DATE OF PAYMENT||"<<"\t";
	 cout<<"||FINE|| "<<"\t";
	cout<<"\n"<<"2017-18(I)"<<"\t";
	cout<<"\t"<<"\t"<<"59,500"<<"\t";
	cout<<"\t"<<"\t"<<"49,500"<<"\t";
	cout<<"\t"<<"\t"<<"20-AUG-2017"<<"\t";
	cout<<"\t"<<"\t"<<"NIL"<<"\t";
	cout<<"\n"<<"2017-18(II)"<<"\t";
	cout<<"\t"<<"\t"<<"59,500"<<"\t";
	cout<<"\t"<<"\t"<<"49,500"<<"\t";
	cout<<"\t"<<"\t"<<"20-DEC-2017"<<"\t";
	cout<<"\t"<<"\t"<<"NIL"<<"\t";
	
	}
	void ps()
	{
		string proj;
       cout<<"Enter your project ";
       cin.ignore();
       getline(cin,proj);
    fstream fout("record.txt",ios::out|ios::app);
    fout<<proj;
    fout<<endl;
    fout.close();
	cout<<"\n"<<"----------------------------------------------------------------"<<"\n";		
	cout<<"\n"<<"THE PROJECT IS SUBMITTED "<<"\n";
	cout<<"\n"<<"----------------------------------------------------------------"<<"\n";
	
		get();
	}
	void asgn()
	{  char sub[100];
	
		cout<<"enter the subject =";
		cin>>sub;
	}
	void ar()
	{
	   get();
}
};
 int main()
 {
 	system("color 3d");
 	ums o3;
 	o3.show();
 	o3.getdata();
 	o3.get();
 	o3.h();
 	o3.out();
 	o3.ass();
 	o3.fee();
 	o3.att();
 	o3.exa();
 	o3.ac();
 	o3.rc();
 	o3.ar();
 }
