#include<iostream>
using namespace std;

main()

{   
		string input;
	int Amount=0,Count=0,R=0,C=0,B=0;
	int car=0,rikshaw=0,bus=0;
	int seprate_amount_of_vehicles=0;
	
		cout<<"This Program is use for Car Parking And You Can Only 20 Vehicles Can Park in This Parking Area"<<endl;

		while(1)
		{
			cout<<"\t\t\t\t#####################################";
			cout<<"\n\t\t\t\t#  Press 1 for Rikshaw [Rupees=100] #"<<endl;
			cout<<"\t\t\t\t#  Press 2 for Car [Rupees=200]     #"<<endl;
			cout<<"\t\t\t\t#  Press 3 for Bus [Rupees=300]     #"<<endl;
			cout<<"\t\t\t\t#  Press 4 for Show the Amount      #"<<endl;
			cout<<"\t\t\t\t#  Press 5 for DELETE the Record    #"<<endl;
			cout<<"\t\t\t\t#  Press 6 for Exit the program     #"<<endl;
			cout<<"\t\t\t\t#####################################"<<endl;
			cin>>input;
		
		if( input == "1" )
			{
				if(Count<20)
				{
					Amount = Amount + 100;
					Count = Count + 1;
					rikshaw = rikshaw + 1;
					seprate_amount_of_vehicles = Amount;
					R = R + 100;
					cout<<"#####################################"<<endl;
					cout<<"#  Record is Added for Rikshaw!"<<endl;
					cout<<"#  The total Rikshaw are = "<<rikshaw<<endl;
					cout<<"#  The amount for Rikshaw is 100"<<endl;
					cout<<"#  The total "<<rikshaw<<" Rikshaw are Added "<<endl;
					cout<<"#  The Total amount for Rikshaw = "<<R<<endl;
					cout<<"#####################################"<<endl;
				}
				else
				{
					cout<<"#####################################"<<endl;
					cout<<"#    No mare Rikshaw's are added!   #"<<endl;
					cout<<"#####################################"<<endl;
				}
			}
		
		
		else if( input == "2" )
			{	
				if(Count<20)
				{
					Amount = Amount + 200;
					Count = Count + 1;
					car = car + 1;
					seprate_amount_of_vehicles = Amount;
					C = C + 200;
					cout<<"#####################################"<<endl;
					cout<<"#  Record is Added for Car!"<<endl;
					cout<<"#  Total Car's are = "<<car<<endl;
					cout<<"#  The total Amount for Car is 200"<<endl;
					cout<<"#  The total "<<car<<" Car are Added "<<endl;
					cout<<"#  The total Amount for Car is = "<<C<<endl;
					cout<<"#####################################"<<endl;
				}
				else
				{
					cout<<"#####################################"<<endl;
					cout<<"#     No mare car's are added!      #"<<endl;
					cout<<"#####################################"<<endl;
				}
			}
		
		
		else if( input == "3" )
			{	
				if(Count<20)
				{
					Amount = Amount + 300;
					Count = Count + 1;
					bus = bus + 1;
					seprate_amount_of_vehicles = Amount;
					B = B + 300;
					cout<<"\n#####################################"<<endl;
					cout<<"#  Record is Added for Bus...!"<<endl;
					cout<<"#  The total Bus are = "<<bus<<endl;
					cout<<"#  The total amount for Bus 300 "<<endl;
					cout<<"#  The total "<<bus<<" Bus  are Added "<<endl;
					cout<<"#  The total amount for Bus are = "<<B<<endl;
					cout<<"#####################################"<<endl;
				}
				else
				{
					cout<<"#####################################"<<endl;
					cout<<"#      No mare Buse's are added!    #"<<endl;
					cout<<"#####################################"<<endl;
				}
			}
		
		
		else if( input == "4" )
			{
				cout<<"\n\n\n################################################"<<endl;
				cout<<"#         TOTAL RECORD'S ARE    "<<endl;
				cout<<"#	Total Amount are: = "<<Amount<<endl;
				cout<<"#	The Total number of vehicles is = "<<Count<<endl;
				cout<<"#	The total number of Car's are = "<<car<<endl;
				cout<<"#	The total number of Rikshaw are = "<<rikshaw<<endl;
				cout<<"#	The total number of Bus are = "<<bus<<endl;
				cout<<"#	Total Rikshaw Amount is = "<<R<<endl;
				cout<<"#	Total car Amount is = "<<C<<endl;
				cout<<"#	Total Bus Amount is = "<<B<<endl;
				cout<<"################################################"<<"\n\n"<<endl;
			}
		
		
		else if( input == "5" )
			{
				cout<<"\n#################################"<<endl;
				cout<<"# RECORD'S DELETED SUCCESSFULLY #"<<endl;
				cout<<"#################################"<<endl;
				Amount = 0;
				Count = 0;
				C = 0;
				B = 0;
				R = 0;
				bus = 0;
				car = 0;
				rikshaw = 0;
				seprate_amount_of_vehicles=0;
			}
			else if( input == "6")
			{
				exit(0);
			}
			
		else
			{
				cout<<"\n#################################"<<endl;
				cout<<"#        Invalid Input!         #"<<endl;
				cout<<"#################################"<<endl;
			}
		}
		
return 0;
		
}



