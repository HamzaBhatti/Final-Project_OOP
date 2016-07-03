#include<conio.h>
#include<string.h>
#include<iostream>
#include<fstream>
#include <fstream>



using namespace std;

class book
{

	protected:
		char b_name [50];
		char b_publish[50];
		char b_author[50];
		char b_serial[50];
		int n;
		int choice;
		char temp1[50];
		int count = 0;

	
	
	public:
	
/*struct view
{

	string v_name;
	string v_publish;
	string v_author;
	string v_serial;

};
*/	
		
		void new_book()
{

	cout<<"\nPlease enter no of Books you want to add: \n";
	cin>>n;
	fflush(stdin);
	
	
for (int i = 0; i < n; i++)
	{

		cout<<"Please Enter name of Book: ";
		cin.getline(b_name,50);
		fflush(stdin);
		cout<<"\nPlease Enter name of Author: ";
		cin.getline(b_author,50);
		fflush(stdin);
		cout<<"\nPlease Enter name of Publisher: ";
		cin.getline(b_publish,50);
		
		fflush(stdin);
		cout<<"\nPlease Enter Serial No of Book: ";
		cin>>b_serial;
		cin.getline(b_serial,50);
		
		fflush(stdin);
	}
		
		
	
		cout<<"\nPlease View The data you entered \n\n";
		cout<<"Book Name: "<<b_name;
		cout<<"\nAuthor Name: "<<b_author;
		cout<<"\nPublisher Name: "<<b_publish;
		cout<<"\nSerial No: "<<b_serial;
		cout<<"\nPlease press entre for Countinue ";
}

	void my_gen()
	{
		
	
	ofstream fp_out;
		
		fp_out.open("General Book.txt",ios::out | ios::app);
		fp_out<<"Book name = "<<b_name;
		fp_out<<"\t";
		fp_out<<"Author name = "<<b_author;
		fp_out<<"\t";
		fp_out<<"Publisher name = "<<b_publish;
		fp_out<<"\t";
		fp_out<<"Serial No = "<<b_serial;
		fp_out<<"\n";
	
	}
	
	
	void my_ref()
	{
		
	
	ofstream fp_out;
		
		fp_out.open("Reference Book.txt",ios::out | ios::app);
		fp_out<<"Book name = "<<b_name;
		fp_out<<"\t";
		fp_out<<"Author name = "<<b_author;
		fp_out<<"\t";
		fp_out<<"Publisher name = "<<b_publish;
		fp_out<<"\t";
		fp_out<<"Serial No = "<<b_serial;
		fp_out<<"\n";
	
	}	

void show_book()
{
	

	cout<<"Which Type!!!!    (1)General_books (2)Refrence_Books: ";
	cin>>choice;
		
		if ( choice == 1)
		{
		
				ifstream my_in("General Book.txt",ios::in);
				
			if(my_in.is_open())	
			{
							
				while (!my_in.eof())
				{
				
				my_in >> temp1;
				cout << "\t" << temp1;
				
				
				}	


			
			}
				
		}
		if (choice = 2)
		{
		
				ifstream my_in1("Reference Book.txt",ios::in);
				
			if(my_in1.is_open())	
			{
							
				
					while (!my_in1.eof())
				{
				
				 my_in1 >> temp1 ;
				cout << "\t" << temp1;
				
				
				}	

			
			
			}
		}
		
		



}
		
	
	void search(char n[]) //specific book search ki hai
	{
		
		//string ch;
		
		ifstream in;
		in.open("Temp.txt");
		string temp;
		if(in.is_open())
		{
			while(!in.eof())
			
				{
				
					//if (strcmpi(point(),n)==0)
					//{
					
					//	b_show();
					
					//}
				}
				
		}
		in.close();
			
	}


};

int login(void) //login function for user and librain 
{
again:
	char name[10];
	char pass[10];
	char pass1[10];
	char camp[10];
	char str;
	cout<<"Login account(press 1)\n\n";
	cout<<"Signup account(press 2)\n\n";
	cin >> str;
	
if (str == '1')
{

		cout<<"\nWelcome dear user signin your account\n\n";
		cout<<"Enter your user login name:";
		cin>>name;
		cout<<"\nEnter your  login password:";
		cin>>pass;
		ifstream in;
		int c;
		char ch;
		in.open("login.txt");
		if(in.is_open());
		{
		
		while(!in.eof())
			{
				cin>>camp;
				c = strcmp(name,camp);
				
			if(c==0)
				{
					cout<<"------User Name Match------";
					c=1;
					cin >> camp;
					c = strcmp(pass,camp);
			if(c == 0)
				{
					cout<<" Password match successfully\n";
					system("cls");
					return 1;
				}
			else
			cout<<" but password incorrect\n";
			goto again;
				}
			}
		}	
		in.close();
		if(c!=0)
		{
			cout<<"\n\nNothing match try again\n\n";
			goto again;
		}

}	
if(str == '2')
	{

	
		signup:
		cout<<"\nSign up\n";
		ofstream out;
		cout<<"Enter your user login name:";
		cin>>name;
		cout<<"Enter your  login password:";
		cin>>pass;
		cout<<"Enter again login password:";
		cin>>pass1;
		int c1 = 0;
		c1 = strcmp(pass,pass1);
		if(c1!=0)
		{
			cout<<"Error in Password Matching Try Again\n\n";
			goto signup;
		}
		out.open("login.txt",ios::out | ios::app);
		out<<"Name: " << name; 
		out<<"Password"<< pass1;
		out.close();
		cout<<"\nSign Up Successfully\n\n";
		getchar();
		getchar();
		system("cls");
		goto again;
		
	}

}		



int main()
{




}
