#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
    int j,beds,c,s,d,l,buy;
    char adr[40],nam[20],newe[20];
    char g[12];
using namespace std;
//to show all houses
void for_all_houses(){

	fstream all_houses;
			all_houses.open("all_record.txt",ios::in);
			string page;
			while(!all_houses.eof()){
				getline(all_houses,page);
				cout<<page<<endl;
			}
			all_houses.close();
		
}
//to show beds according to area--costumer
void for_rent1(){
	int b;
	system("cls");
	
cout<<"we have apartment in these area "<<endl;

		
		cout<<"1.GULBERG "<<endl;
		cout<<"2.UNIVERSITY TOWN"<<endl;
		cout<<"3.RAHATABAD"<<endl;
		cout<<"4.HAYATABAD"<<endl;
		cout<<"5.YAKATOOT"<<endl;
		cout<<"6.GULBAHAR"<<endl;
		cout<<"7.DORANPUR"<<endl;
		cout<<"8.SADAR"<<endl;
		
		cin>>b; 
		switch(b){
	case 1:{
	

	cout<<"Following are the properties Avialable for rent in GULBERG"<<endl;
		
			string line;
			ifstream file;
			file.open("gulberg_rent.txt");
		
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
			break;
			
}
		
case 2:{

	cout<<"Following are the properties Avialable for rent in University Town"<<endl;
			
			string line;
			ifstream file;
			file.open("universty_rent.txt");
			
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
				break;	
}
case 3:{
	


cout<<"Following are the properties Avialable for rent in Rahatabad"<<endl;
		
			string line;
			ifstream file;
			file.open("rahatabad_rent.txt");
			
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
		break;
}
case 4:{
	


cout<<"Following are the properties Avialable for rent in Hayatabad"<<endl;
			string line;
			ifstream file;
			file.open("Hayatabad_rent.txt");
			
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
		break;
				
}
case 5:{
	

cout<<"Following are the properties Avialable for rent in Yakatoot"<<endl;
		
			string line;
			ifstream file;
			file.open("yakatoot_rent.txt");
		
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
		
	break;
}
case 6:{



cout<<"Following are the properties Avialable for rent in Gulbahar"<<endl;
			
			string line;
			ifstream file;
			file.open("gulbahar.txt");
			
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
		break;
	
	}
case 7:{
	

cout<<"Following are the properties Avialable for rent in Doranpur"<<endl;
			
			string line;
			ifstream file;
			file.open("doranpur.txt");
			
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
		break;
}
case 8:{


cout<<"Following are the properties Avialable for rent in Sadar"<<endl;
			
			string line;
			ifstream file;
			file.open("sadar.txt");
			
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
	break;
}



case 9:
	cout<<"Following are the properties Avialable for rent in Random Areas"<<endl;
			
			string line;
			ifstream file;
			file.open("random_rate.txt");
			
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
break;
}
}
//for rent according to beds--costumer
void for_rent_beds(){
int beds;
cout<<"we have apparments with 2 , 3, up to 10  except 6 beded apartment  "<<endl;
			beds:
			cout<<"how many  beds do you want "<<endl;
			cin>>beds;
			if(beds==2)
		{
		
				fstream beds;
				beds.open("beds2.txt",ios::in);
				string line;
				while(!beds.eof()){
					getline(beds,line);
					cout<<line<<endl;
				}
				beds.close();}
			
				
				if(beds==3){
					fstream beds3;
					beds3.open("beds3.txt",ios::in);
					string page;
					while(!beds3.eof()){
						getline(beds3,page);
						cout<<page<<endl;
					}
					beds3.close();
				}
				if(beds==4){
					fstream beds4;
					beds4.open("beds4.txt",ios::in);
					string lin;
					while(!beds4.eof()){
						getline(beds4,lin);
						cout<<lin<<endl;
					}
					beds4.close();
				}				
				
				if(beds==5){
					fstream beds5;
					beds5.open("beds5.txt",ios::in);
					string lin;
					while(!beds5.eof()){
						getline(beds5,lin);
						cout<<lin<<endl;
					}
					beds5.close();
				}
				
					
					if(beds==7){
					fstream beds7;
					beds7.open("beds7.txt",ios::in);
					string lin;
					while(!beds7.eof()){
						getline(beds7,lin);
						cout<<lin<<endl;
					}
					beds7.close();
				}
					if(beds==8){
					fstream beds8;
					beds8.open("beds8.txt",ios::in);
					string lin;
					while(!beds8.eof()){
						getline(beds8,lin);
						cout<<lin<<endl;
					}
					beds8.close();
				}
				if(beds==9){
					fstream beds9;
					beds9.open("beds9.txt",ios::in);
					string lin;
					while(!beds9.eof()){
						getline(beds9,lin);
						cout<<lin<<endl;
					}
					beds9.close();
				}
				if(beds==10){
					fstream beds10;
					beds10.open("beds10.txt",ios::in);
					string lin;
					while(!beds10.eof()){
						getline(beds10,lin);
						cout<<lin<<endl;
					}
					beds10.close();}
							
}
				
for_sale_area(){
	
	int b;
	system("cls");
	
cout<<"we have apartment in these area "<<endl;

		
		cout<<"1.GULBERG "<<endl;
		cout<<"2.UNIVERSITY TOWN"<<endl;
		cout<<"3.RAHATABAD"<<endl;
		cout<<"4.HAYATABAD"<<endl;
		cout<<"5.YAKATOOT"<<endl;
		cout<<"6.GULBAHAR"<<endl;
		cout<<"7.DORANPUR"<<endl;
		cout<<"8.SADAR"<<endl;
		
		cin>>b; 
		switch(b){
	case 1:{
	

	cout<<"Following are the properties Avialable for rent in GULBERG"<<endl;
		
			string line;
			ifstream file;
			file.open("gulberg_sale.txt");
		
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
		else 
		cout<<"Error-Unable to open file"<<endl;	
break;
			
}
		
case 2:{

	cout<<"Following are the properties Avialable for rent in University Town"<<endl;
			
			string line;
			ifstream file;
			file.open("universty_sale.txt");
			
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
		else 
		cout<<"Error-Unable to open file"<<endl;	
	break;		
}
case 3:{
	


cout<<"Following are the properties Avialable for rent in Rahatabad"<<endl;
		
			string line;
			ifstream file;
			file.open("rahatabad_sale.txt");
			
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
		else 
		cout<<"Error-Unable to open file"<<endl;	
	break;
}
case 4:{
	


cout<<"Following are the properties Avialable for rent in Hayatabad"<<endl;
			string line;
			ifstream file;
			file.open("Hayatabad_sale.txt");
			
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
		else 
		cout<<"Error-Unable to open file"<<endl;	
		break;				
}
case 5:{
	

cout<<"Following are the properties Avialable for rent in Yakatoot"<<endl;
		
			string line;
			ifstream file;
			file.open("yakatoot_sale.txt");
		
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
		
		else 
		cout<<"Error-Unable to open file"<<endl;	
	
	break;
}
case 6:{



cout<<"Following are the properties Avialable for rent in Gulbahar"<<endl;
			
			string line;
			ifstream file;
			file.open("gulbahar_sale.txt");
			
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
		else 
		cout<<"Error-Unable to open file"<<endl;	
		break;	
	}
case 7:{
	

cout<<"Following are the properties Avialable for rent in Doranpur"<<endl;
			
			string line;
			ifstream file;
			file.open("doranpur_sale.txt");
			
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
		else 
		cout<<"Error-Unable to open file"<<endl;	
		break;		
}
case 8:{


cout<<"Following are the properties Avialable for rent in Sadar"<<endl;
			
			string line;
			ifstream file;
			file.open("sadar_sale.txt");
			
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
		else 
		cout<<"Error-Unable to open file"<<endl;	
			break;
}

case 9:
{
cout<<"Following are the properties Avialable for rent in Random Areas"<<endl;
			
			string line;
			ifstream file;
			file.open("random_sale.txt");
			
			if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
		else 
		cout<<"Error-Unable to open file"<<endl;	
			break;	
	
	break;
}
}
}
	
	
	
	

void for_sale_beds(){
int beds;
cout<<"we have apparments with 2 , 3, up to 10  except 6 beded apartment avilable for sale "<<endl;
			beds:
			cout<<"how many  beds do you want "<<endl;
			cin>>beds;
			if(beds==2)
		{
		
				fstream beds;
				beds.open("BUYb2.txt",ios::in);
				string line;
				while(!beds.eof()){
					getline(beds,line);
					cout<<line<<endl;
				}
				beds.close();}
			
				
				if(beds==3){
					fstream beds3;
					beds3.open("buyB3.txt",ios::in);
					string page;
					while(!beds3.eof()){
						getline(beds3,page);
						cout<<page<<endl;
					}
					beds3.close();
				}
				if(beds==4){
					fstream beds4;
					beds4.open("buyB4.txt",ios::in);
					string lin;
					while(!beds4.eof()){
						getline(beds4,lin);
						cout<<lin<<endl;
					}
					beds4.close();
				}				
				
				if(beds==5){
					fstream beds5;
					beds5.open("buyB5.txt",ios::in);
					string lin;
					while(!beds5.eof()){
						getline(beds5,lin);
						cout<<lin<<endl;
					}
					beds5.close();
				}
				
					
					if(beds==7){
					fstream beds7;
					beds7.open("buyB7.txt",ios::in);
					string lin;
					while(!beds7.eof()){
						getline(beds7,lin);
						cout<<lin<<endl;
					}
					beds7.close();
				}
					if(beds==8){
					fstream beds8;
					beds8.open("buyB8.txt",ios::in);
					string lin;
					while(!beds8.eof()){
						getline(beds8,lin);
						cout<<lin<<endl;
					}
					beds8.close();
				}
				if(beds==9){
					fstream beds9;
					beds9.open("buyB9.txt",ios::in);
					string lin;
					while(!beds9.eof()){
						getline(beds9,lin);
						cout<<lin<<endl;
					}
					beds9.close();
				}
				if(beds==10){
					fstream beds10;
					beds10.open("buyB10.txt",ios::in);
					string lin;
					while(!beds10.eof()){
						getline(beds10,lin);
						cout<<lin<<endl;
					}
					beds10.close();}
			
			
				
}
				

for_adding_house_rent(){
	cout<<"Welcome,Please select from the options below  :\
	1.GULBERG\n\
	2.UNIVERSITY TOWN\n\
	3.RAHATABAD\n\
	4.HAYATABAD\n\
	5.YAKATOOT\n\
	6.GULBAHAR\n\
	7.DORANPUR\n\
	8.SADAR\n\
	9.Add a new location"<<endl;
	cin>>j;
	
	if(j==1){
	ofstream gulbrg;
	gulbrg.open("gulberg_rent.txt",ios::app);

	cout<<"Gulberg"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter rent per month in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.ignore();
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		gulbrg<<"*************"<<endl;
		gulbrg<<"Covered Area : "<<c<<endl;
		gulbrg<<"Bedrooms:"<<l<<endl;
		gulbrg<<"Washrooms:"<<s<<endl;
		gulbrg<<"Address :"<<adr<<endl;
		gulbrg<<"Rent:"<<d<<endl;
		gulbrg<<"Name:"<<nam<<endl;
		gulbrg<<"Contact"<<g<<endl;
		gulbrg<<"*************"<<endl;
		
		gulbrg.close();
		
	
		
	}
	if(j==2){
	ofstream utown;
	utown.open("university_rent.txt",ios::app);

	cout<<"University Town"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter rent per month in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		utown<<"*************"<<endl;
		utown<<"Covered Area : "<<c<<endl;
		utown<<"Bedrooms:"<<l<<endl;
		utown<<"Washrooms:"<<s<<endl;
		utown<<"Address :"<<adr<<endl;
		utown<<"Rent:"<<d<<endl;
		utown<<"Name:"<<nam<<endl;
		utown<<"Contact"<<g<<endl;
		utown<<"*************"<<endl;
		
		utown.close();
		
		return 0;
		
	}
	
if(j==3){
	ofstream rahat;
	rahat.open("rahatabad_rent.txt",ios::app);

	cout<<"Rahatabad"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter rent per month in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		rahat<<"*************"<<endl;
		rahat<<"Covered Area : "<<c<<endl;
		rahat<<"Bedrooms:"<<l<<endl;
		rahat<<"Washrooms:"<<s<<endl;
		rahat<<"Address :"<<adr<<endl;
		rahat<<"Rent:"<<d<<endl;
		rahat<<"Name:"<<nam<<endl;
		rahat<<"Contact"<<g<<endl;
		rahat<<"*************"<<endl;
		
		rahat.close();
		
		return 0;
		
	}

if(j==4){
	ofstream prop;
	prop.open("hayatabad_rent.txt",ios::app);

	cout<<"Hayatabad"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter rent per month in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		prop<<"*************"<<endl;
		prop<<"Covered Area : "<<c<<endl;
		prop<<"Bedrooms:"<<l<<endl;
		prop<<"Washrooms:"<<s<<endl;
		prop<<"Address :"<<adr<<endl;
		prop<<"Rent:"<<d<<endl;
		prop<<"Name:"<<nam<<endl;
		prop<<"Contact"<<g<<endl;
		prop<<"*************"<<endl;
		
		prop.close();
		
		return 0;
		
	}

if(j==5){
	ofstream prop;
	prop.open("yakatoot_rent.txt",ios::app);

	cout<<"Yakatoot"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter rent per month in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		prop<<"*************"<<endl;
		prop<<"Covered Area : "<<c<<endl;
		prop<<"Bedrooms:"<<l<<endl;
		prop<<"Washrooms:"<<s<<endl;
		prop<<"Address :"<<adr<<endl;
		prop<<"Rent:"<<d<<endl;
		prop<<"Name:"<<nam<<endl;
		prop<<"Contact"<<g<<endl;
		prop<<"*************"<<endl;
		
		prop.close();
		
		return 0;
		
	}
	if(j==7){
	ofstream prop;
	prop.open("gulbahar_rent.txt",ios::app);

	cout<<"Gulbahar"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter rent per month in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		prop<<"*************"<<endl;
		prop<<"Covered Area : "<<c<<endl;
		prop<<"Bedrooms:"<<l<<endl;
		prop<<"Washrooms:"<<s<<endl;
		prop<<"Address :"<<adr<<endl;
		prop<<"Rent:"<<d<<endl;
		prop<<"Name:"<<nam<<endl;
		prop<<"Contact"<<g<<endl;
		prop<<"*************"<<endl;
		
		prop.close();
		
		return 0;
		
	}
	
if(j==7){
	ofstream prop;
	prop.open("doranpur_rent.txt",ios::app);

	cout<<"Doranpur"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter rent per month in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		prop<<"*************"<<endl;
		prop<<"Covered Area : "<<c<<endl;
		prop<<"Bedrooms:"<<l<<endl;
		prop<<"Washrooms:"<<s<<endl;
		prop<<"Address :"<<adr<<endl;
		prop<<"Rent:"<<d<<endl;
		prop<<"Name:"<<nam<<endl;
		prop<<"Contact"<<g<<endl;
		prop<<"*************"<<endl;
		
		prop.close();
		
		return 0;
		
	}	
	
if(j==8){
	ofstream prop;
	prop.open("sadar_rent.txt",ios::app);

	cout<<"Sadar"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter rent per month in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		prop<<"*************"<<endl;
		prop<<"Covered Area : "<<c<<endl;
		prop<<"Bedrooms:"<<l<<endl;
		prop<<"Washrooms:"<<s<<endl;
		prop<<"Address :"<<adr<<endl;
		prop<<"Rent:"<<d<<endl;
		prop<<"Name:"<<nam<<endl;
		prop<<"Contact"<<g<<endl;
		prop<<"*************"<<endl;
		
		prop.close();
		
		return 0;
		
	}	

if(j==9){
	ofstream prop;
	prop.open("random_rent.txt",ios::app);

	cout<<"Enter Area Name"<<endl;
	cin.ignore();
	cin.getline(newe,20);
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter rent per month in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.ignore();
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin.ignore();
	cin.getline(g,12);
		
		prop<<newe<<endl;
		prop<<"*************"<<endl;
		prop<<"Covered Area : "<<c<<endl;
		prop<<"Bedrooms:"<<l<<endl;
		prop<<"Washrooms:"<<s<<endl;
		prop<<"Address :"<<adr<<endl;
		prop<<"Rent:"<<d<<endl;
		prop<<"Name:"<<nam<<endl;
		prop<<"Contact :"<<g<<endl;
		prop<<"*************"<<endl;
		
		prop.close();
		
		return 0;
		
	}	
	
	
}

for_add_sale(){

	cout<<"Welcome,Please select parent address from the options below  :\
	1.GULBERG\n\
	2.UNIVERSITY TOWN\n\
	3.RAHATABAD\n\
	4.HAYATABAD\n\
	5.YAKATOOT\n\
	6.GULBAHAR\n\
	7.DORANPUR\n\
	8.SADAR\n\
	9.Add a new location"<<endl;
	cin>>j;
	
	if(j==1){
	ofstream gulbrg;
	gulbrg.open("gulberg_sale.txt",ios::app);

	cout<<"Gulberg"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter price in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		gulbrg<<"*************"<<endl;
		gulbrg<<"Covered Area : "<<c<<endl;
		gulbrg<<"Bedrooms:"<<l<<endl;
		gulbrg<<"Washrooms:"<<s<<endl;
		gulbrg<<"Address :"<<adr<<endl;
		gulbrg<<"Rent:"<<d<<endl;
		gulbrg<<"Name:"<<nam<<endl;
		gulbrg<<"Contact"<<g<<endl;
		gulbrg<<"*************"<<endl;
		
		gulbrg.close();
		
		return 0;
		
	}
	if(j==2){
	ofstream utown;
	utown.open("university_sale.txt",ios::app);

	cout<<"University Town"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter price in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		utown<<"*************"<<endl;
		utown<<"Covered Area : "<<c<<endl;
		utown<<"Bedrooms:"<<l<<endl;
		utown<<"Washrooms:"<<s<<endl;
		utown<<"Address :"<<adr<<endl;
		utown<<"Rent:"<<d<<endl;
		utown<<"Name:"<<nam<<endl;
		utown<<"Contact"<<g<<endl;
		utown<<"*************"<<endl;
		
		utown.close();
		
		return 0;
		
	}
	
if(j==3){
	ofstream rahat;
	rahat.open("rahatabad_sale.txt",ios::app);

	cout<<"Rahatabad"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter price in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		rahat<<"*************"<<endl;
		rahat<<"Covered Area : "<<c<<endl;
		rahat<<"Bedrooms:"<<l<<endl;
		rahat<<"Washrooms:"<<s<<endl;
		rahat<<"Address :"<<adr<<endl;
		rahat<<"Rent:"<<d<<endl;
		rahat<<"Name:"<<nam<<endl;
		rahat<<"Contact"<<g<<endl;
		rahat<<"*************"<<endl;
		
		rahat.close();
		
		return 0;
		
	}

if(j==4){
	ofstream prop;
	prop.open("hayatabad_sale.txt",ios::app);

	cout<<"Hayatabad"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter price in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		prop<<"*************"<<endl;
		prop<<"Covered Area : "<<c<<endl;
		prop<<"Bedrooms:"<<l<<endl;
		prop<<"Washrooms:"<<s<<endl;
		prop<<"Address :"<<adr<<endl;
		prop<<"Rent:"<<d<<endl;
		prop<<"Name:"<<nam<<endl;
		prop<<"Contact"<<g<<endl;
		prop<<"*************"<<endl;
		
		prop.close();
		
		return 0;
		
	}

if(j==5){
	ofstream prop;
	prop.open("yakatoot_sale.txt",ios::app);

	cout<<"Yakatoot"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter rent price in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		prop<<"*************"<<endl;
		prop<<"Covered Area : "<<c<<endl;
		prop<<"Bedrooms:"<<l<<endl;
		prop<<"Washrooms:"<<s<<endl;
		prop<<"Address :"<<adr<<endl;
		prop<<"Rent:"<<d<<endl;
		prop<<"Name:"<<nam<<endl;
		prop<<"Contact"<<g<<endl;
		prop<<"*************"<<endl;
		
		prop.close();
		
		return 0;
		
	}
	if(j==7){
	ofstream prop;
	prop.open("gulbahar_sale.txt",ios::app);

	cout<<"Gulbahar"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter price in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		prop<<"*************"<<endl;
		prop<<"Covered Area : "<<c<<endl;
		prop<<"Bedrooms:"<<l<<endl;
		prop<<"Washrooms:"<<s<<endl;
		prop<<"Address :"<<adr<<endl;
		prop<<"Rent:"<<d<<endl;
		prop<<"Name:"<<nam<<endl;
		prop<<"Contact"<<g<<endl;
		prop<<"*************"<<endl;
		
		prop.close();
		
		return 0;
		
	}
	
if(j==7){
	ofstream prop;
	prop.open("doranpur_sale.txt",ios::app);

	cout<<"Doranpur"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter price in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		prop<<"*************"<<endl;
		prop<<"Covered Area : "<<c<<endl;
		prop<<"Bedrooms:"<<l<<endl;
		prop<<"Washrooms:"<<s<<endl;
		prop<<"Address :"<<adr<<endl;
		prop<<"Rent:"<<d<<endl;
		prop<<"Name:"<<nam<<endl;
		prop<<"Contact"<<g<<endl;
		prop<<"*************"<<endl;
		
		prop.close();
		
		return 0;
		
	}	
	
if(j==8){
	ofstream prop;
	prop.open("sadar_sale.txt",ios::app);

	cout<<"Sadar"<<endl;
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter rent price in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		prop<<"*************"<<endl;
		prop<<"Covered Area : "<<c<<endl;
		prop<<"Bedrooms:"<<l<<endl;
		prop<<"Washrooms:"<<s<<endl;
		prop<<"Address :"<<adr<<endl;
		prop<<"Rent:"<<d<<endl;
		prop<<"Name:"<<nam<<endl;
		prop<<"Contact"<<g<<endl;
		prop<<"*************"<<endl;
		
		prop.close();
		
		return 0;
		
	}	

if(j==9){
	ofstream prop;
	prop.open("random_sale.txt",ios::app);

	cout<<"Enter Area Name"<<endl;
	cin.ignore();
	cin.getline(newe,20);
	cout<<"Enter Covered Area in Marla's:"<<endl;
	cin>>c;
	cout<<"Enter Number of Bedrooms"<<endl;
	cin>>l;
	cout<<"Enter Number of Washrooms"<<endl;
	cin>>s;
	cout<<"Enter Address :"<<endl;
	cin.ignore();
	cin.getline(adr,25);
	cout<<"Enter rent price in pkr"<<endl;
	cin>>d;
	cout<<"Enter your Name :"<<endl;
	cin.getline(nam,29);
	cout<<"Enter contact Number :"<<endl;
	cin>>g;
		
		prop<<newe<<endl;
		prop<<"*************"<<endl;
		prop<<"Covered Area : "<<c<<endl;
		prop<<"Bedrooms:"<<l<<endl;
		prop<<"Washrooms:"<<s<<endl;
		prop<<"Address :"<<adr<<endl;
		prop<<"Rent:"<<d<<endl;
		prop<<"Name:"<<nam<<endl;
		prop<<"Contact"<<g<<endl;
		prop<<"*************"<<endl;
		
		prop.close();
		
		return 0;
		
	}	
	
	
}
	
	
//for giving feedback--costumer
void feedback(){
char fback[150];
char name[20];
	cout<<"We are very happy for you enrolment in using our services,\n please help us improve our\
program with your valuable feedback : "<<endl;
	ofstream fdback;
	fdback.open("feedback.txt",ios::app);
	cin.ignore();
	cout<<"please enter your name"<<endl;
	cin.getline(name,20);
	cout<<"enter your feedback"<<endl;
	cin.getline(fback,90);
	
	fdback<<"*******"<<name<<"********"<<endl;
	fdback<<fback;
	
	fdback<<endl;
	fdback.close();
	cout<<"Thank you "<<name<<" for providing us with your feedback.";
	
}


void for_about(){
string line;
	ifstream file;
	file.open("About_us.txt",ios::in);	
		if(file){
			
			while(getline(file,line))
			{
				cout<<line<<endl;
				
			}
			
		}
		else 
		cout<<"Error-Unable to open file"<<endl;			
	
	
	
	
	
	
}	

int main()
{
	system("color 70");
	
	system("pause");



	cout<<"\t\t\t\t                                                   &%&                  "<<endl;                   
    cout<<"\t\t\t\t                                                &&&&%&&%%                                       "<<endl;        
    cout<<"\t\t\t\t                                             #%&&%&&%%&&%&&%                                    "<<endl;
    cout<<"\t\t\t\t                            %&&&%&&&%     %%%&&%&&%&&&%&&&%&%%&%                                "<<endl;
    cout<<"\t\t\t\t                            %&%&%%&&%  %%&&&%&&&%&%   (%%&&%%&%&%&%                             "<<endl;
    cout<<"\t\t\t\t                            %&&%&&%&&&%&&&%&%%&%          &&%&&&%&&%&%                          "<<endl;
    cout<<"\t\t\t\t                            %&&&%&&&%&&%&&&%/                %&&&%&&%&&&%&                      "<<endl;
    cout<<"\t\t\t\t                           (%%&&&%&&&&&&%                       #&%&&%&&&%&&&                   "<<endl;
    cout<<"\t\t\t\t                         /%%%&%&%&%&%%                             *%&%&%&%&%&%%                "<<endl;
    cout<<"\t\t\t\t                      %&%&&&%&&&&&(                                    %&&&%%&&%&&%             "<<endl;
    cout<<"\t\t\t\t                   %%&%&&%&&%%%                                           %&%&&&%&&&%&          "<<endl;
    cout<<"\t\t\t\t                 &&%&&&%&&%&(                 &&%&&    &&&&%                 &&&&%&&&%&&        "<<endl;
    cout<<"\t\t\t\t                 &&&%&&&%&&&/                 %&%%&    &%%&%                 &&%%&%&%&%%        "<<endl;
    cout<<"\t\t\t\t                       #&%&&/                                                &&&%&              "<<endl;
    cout<<"\t\t\t\t                       #&&%&(                 &&%&&    %&&&%                 %&&&%              "<<endl;
    cout<<"\t\t\t\t                       #%&&%(                 &&&%&    &&&&%                 &%&&&              "<<endl;
    cout<<"\t\t\t\t                       #%%%%(                                                %%%%%              "<<endl;
    cout<<"\t\t\t\t                       #&&%&(                                                %&&&&              "<<endl;
    cout<<"\t\t\t\t %&&%%&&&%&&%&&&#                                                            &%&&&              "<<endl;
    cout<<"\t\t\t\t #&%&&%&&&%&%&&&&%%%%%&&&&&&%%%%\                                            &&%&&              "<<endl;
    cout<<"\t\t\t\t *&&%&&%%&&%%&&&%&%&%&%&%&&&%%&&%%&&%&&&%                                    &&&%&              "<<endl;
    cout<<"\t\t\t\t  &&&%&&%&&&%&&&%&&%&&&%&&&%%&%&&&%&&&%&&%&&%%%                              &%&%&              "<<endl;
    cout<<"\t\t\t\t  (&%&%&&&&&%%&&&%&&%&&&%&&&%&&%&&&%%&&%&&%&%&%&&&%&%%&&&%&&%%&&                      %&&&%     "<<endl;
    cout<<"\t\t\t\t   %&&&%&&&%%&%&&&%&&&%&&%&&%%&&&%&&%&&&%&&%%&&%&&&%&&%&&&%&%&%&&%            #%&&&%&&%&&&%    "<<endl;
    cout<<"\t\t\t\t    %&%&%&%&%&%&%&%%%&%%%&%&%&%&%&%&%%%&%%%&%%%&%&%&%&%&%&%%%&%%%%       %%&%&%&%%%&%%%&%/      "<<endl;
    cout<<"\t\t\t\t     &%&&%&&%%&&&%&&%&&&%&&%%&&%&&&%&&%&&%%                         %&&%&&&%%&&%&&%&/           "<<endl;
    cout<<"\t\t\t\t      &%&&%&%&%&&&%&%%&&&%&&%&&&%&&&%&&&&                   (#%%%%&&%%&&%&&&%&&%/               "<<endl;
    cout<<"\t\t\t\t       &%&&%%&&%&&&%&&%&&&%&%&%&&%&&&%&&&%&&%&&&%&&&%&&%&&&%%&%%&&%&&&%&&%&/                    "<<endl;
    cout<<"\t\t\t\t        /%&&%%&&%/ \%&&&%&&%%&&%%&&&%&%&%&%&%%&&%%&&%%&&%&&&%&&&%&&%%&/                         "<<endl;
    cout<<"\t\t\t\t          %%%%%%/           \%&&%&&&%&&%&&&%%&&%&&%&&&%&&&%&%%&&&%/                             "<<endl;
    cout<<"\t\t\t\t                                    \%%&%&&&%&&&%&&%%&&%&&&%%/                                   "<<endl;
    cout<<"\t\t\t\t                                              (%%%&&%%%)                                        "<<endl;
   
cout<<"\t\t\t   ========================================================================================================== "<<endl;    
cout<<"\t\t\t       ####  ##    ##  ##  ########  ######   ######  ##        ##   ##  ######  ###      ###  #####  ######    "<<endl;
cout<<"\t\t\t     ##      ##    ##         ##     ##  ##   ##  ##  ##        ##   ##  ##  ##  ####    ####  ##     ##        "<<endl;
cout<<"\t\t\t    ##       ########  ##     ##     #####    ######  ##        #######  ##  ##  ## ##  ## ##  #####  ######    "<<endl;
cout<<"\t\t\t     ##      ##    ##  ##     ##     ##  ##   ##  ##  ##        ##   ##  ##  ##  ##  ####  ##  ##         ##    "<<endl;
cout<<"\t\t\t       ####  ##    ##  ##     ##     ##   ##  ##  ##  #####     ##   ##  ######  ##   ##   ##  #####  ######    "<<endl;
cout<<"\t\t\t   ========================================================================================================== "<<endl;
    
      
	cout<<"\n";
	cout<<"\t\t\t\t\t\t\t\tLOADING ";
	char x= 219;
	for(int i=0; i<35; i++){
		cout<<x;
		if(i<10)
		Sleep(400);
		if(i>=10 && i<20)
		Sleep(180);
		if(i>=20)
		Sleep(50);
		

	
	}
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";  
	
	
	
	
	
	
	
	
	
	
	
	
		int c,i,d,e,g,f,k,l,o,z,y,j,beds;
	string user,pass;
	char ch,cc;
	
	int choice,rent,m;
	char a,t,b;
cout<<"WELCOME TO CHITRAL REAL ESTATE"<<endl;
cout<<"would you like to take a look at what we have to offer"<<endl;

cout<<"enter your choice"<<endl;
cin>>a;
system("cls");
meanu:
if(a=='y'||a=='Y'){
	cout<<"What would you like to do"<<endl;
	cout<<"Enter your choice"<<endl;
	cout<<"1.To rent a house "<<endl;
	cout<<"2.To buy a house"<<endl;
	cout<<"3.To see all avaiable properties"<<endl;
	cout<<"4.Add Property for sale"<<endl;
	cout<<"5.give feedback "<<endl;
	cout<<"6.About us"<<endl;
	cin>>choice;
	switch(choice){
				
		
		

			case 1:{
				cout<<"what would you like to do"<<endl;
				cout<<"press 1 to search by area "<<endl;
				cout<<"press 2 to search by no of beds"<<endl;
			cin>>rent;
			if(rent==1){
				
				for_rent1();
				
			}
	
		if(rent==2){
		for_rent_beds();
		}
		break;
		}
		
		
	case 2:{
			
			cout<<"Following are your options"<<endl;
			cout<<"Enter 1 for search by Area."<<endl;
			cout<<"Enter 2 for search by Beds."<<endl;
			cin>>buy;
			if(buy==1){
				for_sale_area();
				}
				
			
			if(buy==2){
				
			for_sale_beds();
					
			}
			
			break;
		}
		
		
				
	case 3:{
			for_all_houses();
			
			break;
		}
		
	case 4:{
		cout<<"Enter 1 for rent and 2 for sale"<<endl;
		cin>>f;
		if(f==1){
		
		for_adding_house_rent();
	}
	if(f==2){
		for_add_sale();
	}
		break;
	}
	
	
	case 5:{
				feedback();
				
				break;
	}
case 6:{
	
	for_about();
	
	break;
}
}
cout<<"do you want to go back to main menu"<<endl;
				cin>>a;
				if(a=='y'||a=='Y'){
					system("cls");
					
					goto meanu;
				}






return 0;

}
}
