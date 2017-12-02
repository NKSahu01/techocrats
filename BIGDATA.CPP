#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<dos.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>



class user
{         char name[20],fname[20],email[20],sex;
char state[20];
	  char district[20],address[30],pincode[6],mobile[10];
	  int age;
  public:void loginfun(int);
	 int ref;
	 int retage()
	 { return age; }
}u;

int flag1=1;

 void user::loginfun(int record)
	  { cout<<"\n\n\tEnter the details.";
	    cout<<"\n\tName:";
	    gets(name);
	    cout<<"\n\tFather's name:";
	    gets(fname);
	    do{
	    cout<<"\n\tSex (m/f):";
	    cin>>sex;
	       if(sex=='m')
		  {  flag1=0;
		     break;}
	       if(sex=='f')
		  {  flag1=0;
		     break;}
	       else
		  flag1=1;}
	    while(flag1==1);
	    cout<<"\n\tAge:";
	    cin>>age;
      /*	    cout<<"\nState:";
	    gets(state);
	     while(state!="andra pradesh"||"arunachal pradesh"||"assam"||"bihar"||"chattisgarh"||
		   "goa"||"gujarat"||"haryana"||"himachal pradesh"||"jammu and kashmir"||
		   "jharkhand"||"karnataka"||"kerala"||"madhya pradesh"||"maharashtra"||
		   "manipur"||"meghalaya"||"mizoram"||"nagaland"||"odisha"||"punjab"||"rajasthan"||
		   "sikkim"||"tamilnadu"||"tripura"||"uttrakhand"||"uttar pradesh"||"westbengal")
	      {cout<<"\nERROR\nRe-enter state:";
	       gets(state);
	      }
	*/    cout<<"\n\tDistrict:";
	    gets(district);
	    cout<<"\n\tPincode:";
	    gets(pincode);
	       for(int i=0;i<6;i++)
		  while(!isdigit(pincode[i]))
		  {cout<<"\n\tERROR\n\tRe-Enter Pincode:";
		   gets(pincode);
		  }
	    cout<<"\n\tAddress:";
	    gets(address);
	    cout<<"\n\tMobile No.:";
	    gets(mobile);

	       for(i=0;i<10;i++)
		  while(!isdigit(mobile[i]))
		     { cout<<"\n\tERROR\n\tRe-Enter Mobile No.:";
		       gets(mobile);
		     }
	    cout<<"\n\tEmail ID:";
	    gets(email);
	    cout<<"\n\tYOUR REFERENCE ID AND PASSWORD IS: ";
	    ref=1001+record;
	    cout<<ref;
	   }

   class aadhar
   {   int aref;
       char feed[50];
	 public :
		void getfeed()
		{  gets(feed);
		   ofstream feed1("adfeed.dat",ios::app);
		   feed1.write((char *)this,sizeof(aadhar));
		   feed1.close();
		   cout<<"\n\n\t\t***YOUR FEEDBACK IS RECORDED SUCCESSFULLY***\n";
		   cout<<"\t\t\t\t###THANK YOU###\n";
		    getch();
		    }
		 int adref()         //compare
		  {  return aref; }

		  void check();
				}a;


    void aadhar::check()
    { fstream add1;
      int com;
       add1.open("aadhar.dat ",ios::in);


       while(add1.read((char *)&a,sizeof(a)))
     {
       if(a.aref==u.ref)
       {cout<<"\n\t\t\tYOUR AADHAR CARD HAS BEEN CREATED";
	add1.close(); getch();
       return; }
     }    int t ;
    add1.open("paadhar.dat",ios::in);
    while(!add1.eof())
     {   add1>>t;
      if(t==u.ref)
   { cout<<"\n\t\tYOUR AADHAR REFERENCE NO. "<<t<<" IS IN PROCESS\n"; getch(); return;
      }                           }

      cout<<"\n\t\t\tYOU HAVE NOT APPLIED FOR IT";
    add1.close();
     getch();


      }





	class pan
   {   int aref;
       char feed[50];
	 public :
		void getfeed()
		{  gets(feed);
		   ofstream feed1("panfeed.dat",ios::app);
		   feed1.write((char *)this,sizeof(pan));
		   feed1.close();
		   cout<<"\n\n\t\t***YOUR FEEDBACK IS RECORDED SUCCESSFULLY***\n";
		   cout<<"\t\t\t###THANK YOU###\n";
		    getch();
		    }
	  int adref()
		  {  return aref; }

		  void check();
				}p;


    void pan::check()
    { fstream add1;
      int com;
       add1.open("pan.dat ",ios::in);


       while(add1.read((char *)&p,sizeof(p)))
     {
       if(p.aref==u.ref)
       {cout<<"\n\t\t\tYOUR PAN CARD HAS BEEN CREATED.";
	add1.close(); getch();
       return; }
     }    int t ;
    add1.open("ppan.dat",ios::in);
    while(!add1.eof())
     {   add1>>t;
      if(t==u.ref)
   { cout<<"\t\tYOUR PAN CARD REFERENCE NO. "<<t<<" IS STILL IN PROCESS\n"; getch(); return;
      }                           }

      cout<<"\n\t\t\tYOU HAVE NOT APPLIED FOR IT";
    add1.close();
     getch();


      }







	class voterid
   {   int aref;
       char feed[50];
	 public :
		void getfeed()
		{  gets(feed);
		   ofstream feed1("voterfeed.dat",ios::app);
		   feed1.write((char *)this,sizeof(voterid));
		   feed1.close();
		   cout<<"\n\n\t\t***YOUR FEEDBACK IS RECORDED SUCCESSFULLY***\n";
		   cout<<"\t\t\t###THANK YOU###\n";
		    getch();
		    }
	  int adref()
		  {  return aref; }

		  void check();
				}v;


    void voterid::check()
    { fstream add1;
      int com;
       add1.open("voterid.dat ",ios::in);


       while(add1.read((char *)&v,sizeof(v)))
     {
       if(v.aref==u.ref)
       {cout<<"\n\t\t\tYOUR VOTER ID HAS BEEN CREATED.";
	add1.close(); getch();
       return; }
     }    int t ;
    add1.open("pvoterid.dat",ios::in);
    while(!add1.eof())
     {   add1>>t;
      if(t==u.ref)
   { cout<<"\t\tYOUR VOTER ID REFERENCE NO. "<<t<<" IS IN PROCESS\n"; getch(); return;
      }                           }

      cout<<"\n\t\t\tYOU HAVE NOT APPLIED FOR IT";
    add1.close();
     getch();


      }






 void menu()
{ int ch2;
    fstream fin;



	   cout<<"\n\n\t\t‹‹‹‹‹‹                                    ‹‹‹‹‹‹\n";
delay(150);cout<<"    \t\t€  	       ==> 1- ADHAAR CARD              €\n";
delay(150);    cout<<"\t\t€                                              €\n";
delay(150);    cout<<"\t\t€             ==> 2- PAN CARD                  €\n";
delay(150);    cout<<"\t\t€                                              €\n";
delay(150);    cout<<"\t\t€‹‹‹‹‹        ==> 3- VOTER ID             ‹‹‹‹‹€\n";
delay(150);    cout<<"\t\t‹‹‹‹‹‹                                    ‹‹‹‹‹‹\n";
delay(150);    cout<<"\t\t€	       ==> 4- EXIT                     €\n";
delay(150);    cout<<"\t\t€‹‹‹                                        ‹‹‹€\n";
delay(150);    cout<<"\t\t€                                              €\n";
delay(150);    cout<<"\t\t€                                              €\n";
delay(150);    cout<<"\t\t              NOW ENTER YOUR CHOICE:";
cin>>ch2;
	switch(ch2)
	    {     case 1:    clrscr();
				    int a_ch;
					  cout<<"\n\n\t\t‹‹‹‹‹‹                                       ‹‹‹‹‹‹\n";
			       delay(150);    cout<<"\t\t€             ==> 1- APPLY                        €";
			       delay(150);  cout<<"\n\t\t€                                                 €";
			       delay(150);cout<<"\n  \t\t€             ==> 2- CURRENT STATUS               €\n";
			       delay(150);    cout<<"\t\t€                                                 €";
			       delay(150);cout<<"\n  \t\t€             ==> 3- FEEDBACK                     €";
			       delay(150);cout<<"\n  \t\t€‹‹‹‹‹                                       ‹‹‹‹‹€ ";

					   cout<<"\n \t\t\t\tENTER YOUR CHOICE  ";
					   cin>>a_ch;
					  switch(a_ch)
						{   case 1 : cout<<"\n\t\t\t YOUR REQUEST IS BEING INITIATYED";
							      fstream add;
							      add.open("paadhar.dat",ios::app);
							       add<<u.ref<<endl; add.close();
								getch();
								break;
						    case 2 :   a.check();
							      break;
						  case 3 :  cout<<"\nENTER YOUR FEEDBACK\n ";
							    a.getfeed(); getch();
							    break;
						    default : cout<<"\t\t\tOOPS!! YOU ENTERED A WRONG CHOICE";
							   delay(1500);
							       exit(0);
								  }  break;

		       case 2:    clrscr();
				    int p_ch;
					  cout<<"\n\n\t\t‹‹‹‹‹‹                                       ‹‹‹‹‹‹\n";
			       delay(150);    cout<<"\t\t€             ==> 1- APPLY                        €";
			       delay(150);  cout<<"\n\t\t€                                                 €";
			       delay(150);cout<<"\n  \t\t€             ==> 2- CURRENT STATUS               €\n";
			       delay(150);    cout<<"\t\t€                                                 €";
			       delay(150);cout<<"\n  \t\t€             ==> 3- FEEDBACK                     €";
			       delay(150);cout<<"\n  \t\t€‹‹‹‹‹                                       ‹‹‹‹‹€ ";

					   cout<<"\n\t\t\t ENTER YOUR CHOICE  ";
					   cin>>p_ch;
					  switch(p_ch)
						{   case 1 :if(u.retage()<18)
						    {cout<<"\n\t\t\tYOU ARE NOT ELIGIBLE";getch();exit(0);}
							    cout<<"\n\t\t\t YOUR REQUEST IS BEING INITIATED";
							      fstream add;
							      add.open("ppan.dat",ios::app);
							       add<<u.ref<<endl; add.close();
								getch();
								break;
						    case 2 :   p.check();
							      break;
						  case 3 :  cout<<"\n\tENTER YOUR FEEDBACK\n"; p.getfeed();break;
						    default :   cout<<"\t\t\tOOPS!! YOU ENTERED A WRONG CHOICE";
								   delay(1500);
								exit(0);
								  }  break;


		    case 3:    clrscr();
				    int v_ch;
					  cout<<"\n\n\t\t‹‹‹‹‹‹                                       ‹‹‹‹‹‹\n";
			       delay(150);    cout<<"\t\t€             ==> 1- APPLY                        €";
			       delay(150);  cout<<"\n\t\t€                                                 €";
			       delay(150);cout<<"\n  \t\t€             ==> 2- CURRENT STATUS               €\n";
			       delay(150);    cout<<"\t\t€                                                 €";
			       delay(150);cout<<"\n  \t\t€             ==> 3- FEEDBACK                     €";
			       delay(150);cout<<"\n  \t\t€‹‹‹‹‹                                       ‹‹‹‹‹€ ";

					   cout<<"\n\t\t\t\tENTER YOUR CHOICE  ";
					   cin>>v_ch;
					  switch(v_ch)
						{   case 1 :if(u.retage()<18)
						    {cout<<"\n\t\t\tYOU ARE NOT ELIGIBLE";getch();exit(0);}
						else
						{ cout<<"\n\t\t\t YOUR REQUEST IS BEING INITIATED";
							      fstream add;
							      add.open("pvoterid.dat",ios::app);
							       add<<u.ref<<endl; add.close();
								getch(); }
								break;
						    case 2 :   v.check();
							      break;
						  case 3 :  cout<<"\n\tENTER YOUR FEEDBACK\n"; v.getfeed();break;
						    default : cout<<"\t\t\tOOPS!! YOU ENTERED A WRONG CHOICE";
							   delay(1500);
							      exit(0);
								  }  break;



		  default: cout<<"\n\t\t\tOOPS!! YOU ENTERED A WRONG CHOICE";
			   delay(1500);
			   exit(0);
	    }

     }

void log()
{     clrscr();

int login,pass;
cout<<"\n\tEnter the login id: ";
cin>>login;
cout<<"\n\tEnter the Password: ";
cin>>pass;
fstream fin;
fin.open("ref.dat",ios::in);
while(fin.read((char *)&u,sizeof(u)))
 {	if(u.ref==login&&u.ref==pass)
	    {  clrscr();
		for(int lo=0, di=28; lo<=100; lo=lo+4, di++)
		{
		delay(30);
		gotoxy(26,17);cout<<"== INITIALIZING YOUR ACCOUNT ==";
		gotoxy(30,18);cout<<"\t  ";
		cout<<lo<<" % Completed";

		gotoxy(di,19);cout<<"€";

		if(lo>90 )
		cout<<"\n\t\t\t printing the screen";
		else if(lo>60)
		cout<<"\n\t\t\t linking your account detail ";
		else if(lo>30)
		cout<<"\n\t\t\t verifing your details";
		else
		cout<<"\n\t\t\t connecting to server";
		delay(90); }
	      clrscr();
	      textbackground(YELLOW);
	      cout<<"\n\n\n\n\t\t***********************************************\t";
	       cout<<"\n\t\t\t    LOGGED IN SUCCESSFULLY";
	       cout<<"\n\t\t***********************************************\t";
	       cout<<"\n\t\t\t     PRESS ENTER FOR MENU" ;
  fin.close();
	       getch();
	       menu();
	       return;
	    }        }
	    cout<<"\n\n\t\t\tLOGGED IN DETAILS ARE INCORRECT\n";getch();
	    delay(1500);
	       exit(0);

}

void main()

{ fstream fin;
 textbackground(YELLOW);
   clrscr();
   int ch1;
  cout<<"\n\n";
delay(300);
     cout<<"\t\t     €     VERSION STATUS: RESISTERED     €\n";
     cout<<"\t\t‹‹‹‹‹€   ‹‹‹‹‹‹‹‹   ‹‹‹‹‹‹‹‹   ‹‹‹‹‹‹‹‹   €‹‹‹‹‹\n";
delay(300);
	   cout<<"\n";
	   cout<<"\t\t\t    €     BIG DATA 2017  €\n";
	   cout<<"\t\t\t           Version 3.2     \n";
delay(300);
     cout<<"\t\t‹‹‹‹‹‹   ‹‹‹€‹‹‹‹   ‹‹‹‹‹‹‹‹   ‹‹‹‹€‹‹‹   ‹‹‹‹‹‹\n";
     cout<<"\t\t     €      €                      €      €\n";
delay(300);
cout<<"\n\t\t\t PRESS ENTER FOR THE MAIN MENU ";

cout<<"\n\n\t\t\t1. LOGIN ( Existing User)\n\n\t\t\t2. SIGNUP ( New User)\n\n\t\t\t3.EXIT\n";

cout<<"\n\n \t\t\tEnter your choice (1/2) : ";
cin>>ch1;
switch(ch1)

{
   case 1:     // menu for exsiting user
		      log();
			    break;
  case 2:            // registration for new user //
			  int record=0;
			 fin.open("ref.dat",ios::in);
			  while(fin.read((char *)&u,sizeof(u)))
			  {record++;	 }
			  clrscr();
			  u.loginfun(record);
			  fin.close();
			  fin.open("ref.dat",ios::app);
			  fin.write((char *)&u,sizeof(u));
			  fin.close();
			  break;

 default: cout<<"OOPS!! YOU ENTERED A WRONG CHOICE";
	   delay(1500);
	   exit(0);
 }




getch();
}



