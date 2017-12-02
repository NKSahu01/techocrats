//			server                                

#include<fstream.h>
#include<conio.h>
#include<iostream.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>



class user
{         char name[20],fname[20],email[20],sex;
char state[20];
	  char district[20],address[30],pincode[6],mobile[10];
	  int age;
  public:void show();
	 int ref;
	 void out();
	 int retage()
	 { return age; }
}u;

int flag1=1;

 void user::show()
	  { clrscr();
	    textbackground(WHITE);
	    textcolor(BLUE);
	    cout<<"\n\n\t\tREFERENCE NUMBER: "<<ref;
	    cout<<"\nDETAILS ARE\n";
	    cout<<"\n\tName:";
	    puts(name);
	    cout<<"\n\tFather's name:";
	    puts(fname);
	    cout<<"\n\tSex ";
	    cout<<sex;
	    cout<<"\n\tAge:";
	    cout<<age;
	 cout<<"\n\tDistrict:";
	    puts(district);
	    cout<<"\n\tPincode:";
	    puts(pincode);
	    cout<<"\n\tAddress:";
	    puts(address);
	    cout<<"\n\tMobile No.:";
	    puts(mobile);
	    cout<<"\n\tEmail ID:";
	    puts(email);getch();
	   }







class aadhar:public user
{   int aref;
    char feed[50];
   public: void check();
	   void feedback();
	   void dis()
	   {  cout<<"\nREFERNCE NO: "<<aref;
	      cout<<"\nFEEDBACK: ";puts(feed); getch();
	   }
}a;

void user::out()
{ int r;
   cout<<"Enter the reference number you want to record details: ";
   cin>>r;
   fstream file;
   file.open("ref.dat",ios::in);
     while(file.read((char *)this,sizeof(user)))
	{  if(r==ref)
	     { show();
	       return;
	     }
	}
     cout<<"RECORD NOT FOUND"; getch();
}

void aadhar::feedback()
{  ifstream fin ("adfeed.dat",ios::in,ios::nocreate);
   int r;
   cout<<"\nEnter the reference number to see the feedback: ";
   cin>>r;
   while(fin.read((char *)this,sizeof(aadhar)))
       {
	  if(r==aref)
	   {
	    dis();
	    getch();

	    fin.close();
	    return;   }
       }
   cout<<"\n\n\t\tNo feedback from refernce number: "<<r;
   fin.close();
   getch();
}





void aadhar::check()
{
  clrscr();
  int ref;
  textbackground(WHITE);
  textcolor(BLUE);
    fstream ifile,ofile;
     int i=1;  char cc;
      while(i==1)
   { ifile.open("paadhar.dat",ios::in,ios::nocreate);
    ofile.open("aadhar.dat",ios::app);


	     cout<<"\nEnter the reference number of already processed AADHAR card: ";
	     cin>>aref;
	    ofile<<aref<<endl;
	       cout<<"\nENTER MORE PROCESSED ID(Y/N):";
	       cin>>cc;
	       if(cc!='Y'||cc!='y')
		 i=0;
		 ofile.close();
		ifile.close();      }
		 getch();
}


class pan:public user
{   int aref;
    char feed[50];
   public: void check();
	   void feedback();
	   void dis()
	   {  cout<<"\nREFERNCE NO: "<<aref;
	      cout<<"\nFEEDBACK: ";puts(feed);
	   }
}p;

void pan::feedback()
{  ifstream fin ("panfeed.dat",ios::in,ios::nocreate);
   int r;
   cout<<"\nEnter the reference number to see the feedback: ";
   cin>>r;
   while(fin.read((char *)this,sizeof(pan)))
       {
	  if(r==aref)
	   {
	    dis();
	    getch();

	    fin.close();
	    return;   }
       }
   cout<<"\n\n\t\tNo feedback from refernce number: "<<r;
   fin.close();
   getch();
}





void pan::check()
{
  clrscr();
  int ref;
  textbackground(WHITE);
  textcolor(BLUE);
    fstream ifile,ofile;
     int i=1;  char cc;
      while(i==1)
   { ifile.open("ppan.dat",ios::in,ios::nocreate);
    ofile.open("pan.dat",ios::app);


	     cout<<"\nEnter the reference number of already processed PAN card: ";
	     cin>>aref;

	       ofile<<aref<<endl;


	       cout<<"\nENTER MORE PROCESSED ID(Y/N):";
	       cin>>cc;
	       if(cc!='Y'||cc!='y')
		 i=0;



ofile.close();
ifile.close();      } getch();
}



class voterid :public user
{   int aref;
    char feed[50];
   public: void check();
	   void feedback();
	   void dis()
	   {  cout<<"\nREFERNCE NO: "<<aref;
	      cout<<"\nFEEDBACK: ";puts(feed);
	   }
}v;

void voterid::feedback()
{  ifstream fin ("voterfeed.dat",ios::in,ios::nocreate);
   int r;
   cout<<"\nEnter the reference number to see the feedback: ";
   cin>>r;
   while(fin.read((char *)this,sizeof(voterid)))
       {
	  if(r==aref)
	   {
	    dis();
	    getch();

	    fin.close();
	    return;   }
       }
   cout<<"\n\n\t\tNo feedback from refernce number: "<<r;
   fin.close();
   getch();
}





void voterid::check()
{
  clrscr();
  int ref;
  textbackground(WHITE);
  textcolor(BLUE);
    fstream ifile,ofile;
      int i=1;  char cc;
      while(i==1)
   { ifile.open("pvoterid.dat",ios::in,ios::nocreate);
    ofile.open("pvoterid.dat",ios::app);


	     cout<<"\nEnter the reference number of already processed VOTER ID card: ";
	     cin>>aref;

	       ofile<<aref<<endl;
	      cout<<"\nENTER MORE PROCESSED ID(Y/N):";
	       cin>>cc;
	       if(cc!='Y'||cc!='y')
		 i=0;



ofile.close();
ifile.close();      }getch();
}






void main()
{
   clrscr();
   int ch,ch1;
   textbackground(WHITE);
   textcolor(BLUE);
   cout<<"\n\n\n\t WELCOME TO SERVER AREA";
   cout<<"\n\n\t 1.AADHAR CARD\n\n\t 2.PAN CARD\n\n\t 3.VOTER ID\n\
	  \n\t  Enter your choice:";
   cin>>ch;
    switch(ch)
	   {
	       case 1: clrscr();
		       textbackground(WHITE);
			textcolor(BLUE);
			 cout<<"\n\n\t\t\tAADHAR CARD\n";
			   cout<<"\n\t\t 1.Update the proccessing details\n";
			   cout<<"\n\t\t 2.See the feedback\n";
			   cout<<"\n\t\t 3.Record details for processing";
			   cout<<"\n\t\t  Enter your choice:";
			   cin>>ch1;
			      switch(ch1)
			      {
				  case 1:
					   a.check();
					   break;
				  case 2:  a.feedback();
					   break;
				  case 3:  a.out();
					   break;
				  default: exit(0);
			      }   break;
		case 2: clrscr();
		       textbackground(WHITE);
			textcolor(BLUE);
			 cout<<"\n\n\t\t\tPAN CARD\n";
			   cout<<"\n\t\t 1.Update the proccessing details\n";
			   cout<<"\n\t\t 2.See the feedback\n";
			   cout<<"\n\t\t 3.Record details for processing";
			   cout<<"\n\t\t  Enter ypour choice:";
			   cin>>ch1;
			      switch(ch1)
			      {
				  case 1:
					   p.check();
					   break;
				  case 2:  p.feedback();
					   break;
				   case 3:  a.out();
					   break;
				  default: exit(0);
			      }  break;
		case 3: clrscr();
		       textbackground(WHITE);
			textcolor(BLUE);
			 cout<<"\n\n\t \t\tVOTER ID CARD\n";
			   cout<<"\n\t\t 1.Update the proccessing details\n";
			   cout<<"\n\t\t 2.See the feedback\n";
			   cout<<"\n\t\t 3.Record details for processing";
			   cout<<"\n\t\t  Enter your choice:";
			   cin>>ch1;
			      switch(ch1)
			      {
				  case 1:
					   v.check();
					   break;
				  case 2:  v.feedback();
					   break;
				   case 3:  a.out();
					   break;
				  default: exit(0);
			      }      break;

	       default: exit(0);
	  }
	  getch();
}
