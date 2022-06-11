// #include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//template <typename T >
// T getinput(string x,T y){
//	cout<<x;
//	cin>>y;
//	return y;
//}
//
//void Main_Menu(){
//int opt;
// cout<<"\t\t****Welcome****"<<endl;
// cout<<"\t\n\==========================="<<endl;
// cout<<"\t\t1->New Product"<<endl;
// cout<<"\t\t2->Purchase"<<endl;
// cout<<"\t\t3->Sale Product"<<endl;
// cout<<"\t\t4->Remove Product"<<endl;
// cout<<"\t\t5->Remove Purchase"<<endl;
// cout<<"\t\t6->Remove Sale"<<endl;
// cout<<"\t\tEnter Your Choice:";
// cin>>opt;
//// switch(opt){
//// 	case 1:
//// 		New_product();
//// 	case 2:
////	 	Purchase();
////	case 3:
////		Sale_Prodcut();
////	case 4:
////		Remove_Product();
////	case 5:
////		Remove_Purchase();
////	case 6:
////		Remove_Sale();				 	
//// }
//}
//
//class Generate_ID{
//	public:
//		virtual void Gen_id(string, fstream)= 0;
//};
//
//class File_Connection{
//	public:
//	int Product_ID;
//	string Product_Name;
//	string Dealer_Name;
//	string Company;
//	float Purchase_Rate;
//	float Sale_Rate;
//	
//	File_perations(){
//		void getter();
//		void savedata();
//		void Viewdata();
//		void Gen_ID();
//		void searchdata();
//		void deletedata();
//	}
//	
//void getter(){
//		fstream file1, file2;
//		char opt;
//		file1.open("Product_Descripiton.txt",ios_base::app);
//		file2.open("Product_Descripiton.txt",ios_base::in);
//		while(opt != 'y'){
//		while(!file2.eof()){
//		file2>>Product_ID>>Product_Name>>Company>>Purchase_Rate;
//		}
//		if(Product_ID==0){
//		Product_ID = 1;
//		}
//		else{
//		Product_ID+=1;
//		}	
//		cout<<"Product ID is Generated : "<<Product_ID<<endl;
//		cout<<"Enter Product Name : "<<endl;
//		cin>>Product_Name;
//		cout<<"Enter Company Name : "<<endl;
//		cin>>Company;
//		cout<<"Enter Dealer Name : "<<endl;
//		cin>>Dealer_Name;
//		cout<<"Enter Purchase Rate : "<<endl;
//		cin>>Purchase_Rate;
//		file1<<Product_ID<<" "<<Product_Name<<" "<<Company<<" "<<Purchase_Rate;
//		cout<<"Would you like to create another account:y/n.";
//		cin>>opt;
//		}
//		file1.close();
//		file2.close();
//	}
//void savedata(){
//	fstream file1;
//	getter();
//	Sale_Rate = 10 * Purchase_Rate;
//	file1.open("sale.txt",ios_base::app);   //end of file write kar na k lilay
//	file1<<Product_ID<<" "<<Product_Name<<" "<<Company<<" "<<Purchase_Rate<<" "<<Sale_Rate<<endl;
//	cout<<"Data is stored"<<endl;
//	file1.close();
//	}
//	
//void Viewdata(){
//	fstream file1;
//	file1.open("Sale.txt",ios_base::in);   //end of file write kar na k lilay
//	file1>>Product_ID>>Product_Name>>Company>>Purchase_Rate>>Sale_Rate;
//    cout<<Product_ID<<" "<<Product_Name<<" "<<Company<<" "<<Purchase_Rate<<" "<<Sale_Rate<<endl;
//	file1.close();
//	}
//	
//void searchdata(){
//	fstream file1;
//	int id;
//	cout<<"Enter the which you wnat to search:"<<endl;
//	cin>>id;
//	ofstream myfile;
//	myfile.open("Purchase.txt",ios_base::app);   //end of file write kar na k lilay
//	ifstream infile("sale.txt");
//	while(!infile.eof()){
//	infile>>Product_ID>>Product_Name>>Company>>Purchase_Rate>>Sale_Rate;
//	if(Product_ID==id){
//		cout<<"Your Given Id is found."<<endl;}	}
//	infile.close();
//	myfile.close();
//	}
//	
//void deletedata(){
//	int id;	
//	fstream file1;
//	getter();
//	cout<<"Enter id of that which you want to remove:"<<endl;
//	cin>>id;
//	ofstream myfile;
//	myfile.open("Purchase.txt",ios_base::app);   //end of file write kar na k lilay
//	ifstream infile("sale.txt");
//	while(!infile.eof()){
//	infile>>Product_ID>>Product_Name>>Company>>Purchase_Rate>>Sale_Rate;
//	if(!Product_ID==id){
//	cout<<Product_ID<<" "<<Product_Name<<" "<<Company<<" "<<Purchase_Rate<<" "<<Sale_Rate<<endl;
//	myfile<<endl<<Product_ID<<" "<<Product_Name<<" "<<Company<<" "<<Purchase_Rate<<" "<<Sale_Rate;}	}
//	infile.close();
//	myfile.close();
//	rename("Purchase.txt","sale.txt");//rename the temp.txt file to given DataFile.txt
//}
//};
// int main() {
// 	File_Connection fp1;
// 	fp1.savedata();
// 	int op;
// 	cout<<"Press \n1->For Show Data.\n2->For Search Data.\n3->For Remove Data."<<endl;
// 	cin>>op;
// 	switch(op){
//	case 1:
// 	fp1.Viewdata();
//	break; 
// 	case 2:
// 	fp1.searchdata();
// 	break;
//	case 3:
//	fp1.deletedata();
//	break;
//	}
//return 0;
//}
//
//class Product{
//	public:
//	int Product_ID;
//	string Product_Name;
//	string Dealer_Name;
//	string Company;
//	float Purchase_Rate;
//	float Sale_Rate;
//		Product(){
//				void New_Product();
//	void Purchase();
//	void Sale_Purchase();
//	void Remove_Product(); 	
//	void Remove_Purchase(); 
//	void Remove_Sale();	
//		}
//	
//
//void New_Product(){
//			fstream file1, file2;
//		char opt;
//		file1.open("Product_Descripiton.txt",ios_base::app);
//		file2.open("Product_Descripiton.txt",ios_base::in);
//		
//		while(!file2.eof()){
//		file2>>Product_ID>>Product_Name>>Company>>Purchase_Rate;
//		}
//		if(Product_ID==0){
//		Product_ID = 1;
//		}
//		else{
//		Product_ID+=1;
//		}	
//		cout<<"Product ID is Generated : "<<Product_ID<<endl;
//		cout<<"Enter Product Name : "<<endl;
//		cin>>Product_Name;
//		cout<<"Enter Company Name : "<<endl;
//		cin>>Company;
//		cout<<"Enter Dealer Name : "<<endl;
//		cin>>Dealer_Name;
//		cout<<"Enter Purchase Rate : "<<endl;
//		cin>>Purchase_Rate;
//		file1<<Product_ID<<" "<<Product_Name<<" "<<Company<<" "<<Purchase_Rate;
//		cout<<"Would you like to create another account:y/n.";
//		cin>>opt;
//		
//		file1.close();
//		file2.close();
//}
//
//void Purchase(){
//		fstream file1;
//	int id;
//	cout<<"Enter the which you wnat to search:"<<endl;
//	cin>>id;
//	ofstream myfile;
//	myfile.open("Purchase.txt",ios_base::app);   //end of file write kar na k lilay
//	ifstream infile("sale.txt");
//	while(!infile.eof()){
//	infile>>Product_ID>>Product_Name>>Company>>Purchase_Rate>>Sale_Rate;
//	if(Product_ID==id){
//		cout<<"Your Given Id is found."<<endl;}	}
//	infile.close();
//	myfile.close();
//	}
//
//
//void Remove_Purchase(){
//		int id;	
//	fstream file1;
//	
//	cout<<"Enter id of that which you want to remove:"<<endl;
//	cin>>id;
//	ofstream myfile;
//	myfile.open("Purchase.txt",ios_base::app);   //end of file write kar na k lilay
//	ifstream infile("sale.txt");
//	while(!infile.eof()){
//	infile>>Product_ID>>Product_Name>>Company>>Purchase_Rate>>Sale_Rate;
//	if(!Product_ID==id){
//	cout<<Product_ID<<" "<<Product_Name<<" "<<Company<<" "<<Purchase_Rate<<" "<<Sale_Rate<<endl;
//	myfile<<endl<<Product_ID<<" "<<Product_Name<<" "<<Company<<" "<<Purchase_Rate<<" "<<Sale_Rate;}	}
//	infile.close();
//	myfile.close();
//	rename("Purchase.txt","sale.txt");//rename the temp.txt file to given DataFile.txt
//}
//
//void Remove_Product(){
//		int id;	
//	fstream file1;
//	
//	cout<<"Enter id of that which you want to remove:"<<endl;
//	cin>>id;
//	ofstream myfile;
//	myfile.open("Purchase.txt",ios_base::app);   //end of file write kar na k lilay
//	ifstream infile("sale.txt");
//	while(!infile.eof()){
//	infile>>Product_ID>>Product_Name>>Company>>Purchase_Rate>>Sale_Rate;
//	if(!Product_ID==id){
//	cout<<Product_ID<<" "<<Product_Name<<" "<<Company<<" "<<Purchase_Rate<<" "<<Sale_Rate<<endl;
//	myfile<<endl<<Product_ID<<" "<<Product_Name<<" "<<Company<<" "<<Purchase_Rate<<" "<<Sale_Rate;}	}
//	infile.close();
//	myfile.close();
//	rename("Purchase.txt","sale.txt");//rename the temp.txt file to given DataFile.txt
//}
//
//void ove_Purchase(){
//		int id;	
//	fstream file1;
//	
//	cout<<"Enter id of that which you want to remove:"<<endl;
//	cin>>id;
//	ofstream myfile;
//	myfile.open("Purchase.txt",ios_base::app);   //end of file write kar na k lilay
//	ifstream infile("sale.txt");
//	while(!infile.eof()){
//	infile>>Product_ID>>Product_Name>>Company>>Purchase_Rate>>Sale_Rate;
//	if(!Product_ID==id){
//	cout<<Product_ID<<" "<<Product_Name<<" "<<Company<<" "<<Purchase_Rate<<" "<<Sale_Rate<<endl;
//	myfile<<endl<<Product_ID<<" "<<Product_Name<<" "<<Company<<" "<<Purchase_Rate<<" "<<Sale_Rate;}	}
//	infile.close();
//	myfile.close();
//	rename("Purchase.txt","sale.txt");//rename the temp.txt file to given DataFile.txt
//}
//	
//};


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

template <class T> T Get_Input(string n){
	T a;
	cout<<n;
	cin>>a;
	return a;
}
class Generate_ID{
	public:
		virtual int Gen_ID(string file) = 0;
};
class File_Connection : public Generate_ID{
	public:
		int Save_Data(string data, string file){
			fstream fm;
			fm.open(file.c_str(), ios_base::app | ios_base::in);
			fm<<endl<<data;
			return 1;
			fm.close();
		}
		string Search_Data(int id, string file){
			int ID, quantity, count=0;
			string name, data, strId, strQuantity, strPrice;
			float price;
			fstream fm;
			fm.open(file.c_str(), ios_base::app | ios_base::in);
			while(!fm.eof()){
				fm>>ID>>name>>price>>quantity;
				if(ID == id){
//					strId=to_string(ID);
//					strQuantity=to_string(quantity);
//					strPrice=to_string(price);
					data=strId+" "+name+" "+strQuantity+" "+strPrice;
					count++;
					break;
				}
			}
			if(count == 0){
				data="Record data not available inside the file";
			}
			return data;
			fm.close();
		}
		int Delete_Data(int id, string file){
			int ID, quantity, count=0;
			string name, data, strId, strQuantity, strPrice;
			float price;
			fstream fm, mf;
			mf.open("temp.txt", ios_base::app | ios_base::in);
			fm.open(file.c_str(), ios_base::app | ios_base::in);
			while(!fm.eof()){
				fm>>ID>>name>>price>>quantity;
//				strId=to_string(ID);
//				strQuantity=to_string(quantity);
//				strPrice=to_string(price);
				data=strId+" "+name+" "+strQuantity+" "+strPrice;
				if(ID == id){
					cout<<"Your deleted data: "<<endl;
					cout<<data;
					count++;
				} else {
					mf<<endl<<data;
				}
			}
			fm.close();
			mf.close();
			remove(file.c_str());
			rename("temp.txt" , file.c_str());
			if(count == 0){
				return 0;
			} else {
				return 1;
			}
		}
		int Gen_ID(string file){
			int ID, p;
			string n;
			float q;
			fstream fm;
			fm.open(file.c_str(), ios_base::app | ios_base::in);
			while(!fm.eof()){
				fm>>ID>>n>>p>>q;
//				data=strId+" "+name+" "+strQuantity+" "+strPrice;
			}
			if(ID == 0){
				ID=1;
			} else {
				ID++;
			}
			fm.close();
			return ID;
		}
		View_Data(string file){
			int ID,count=1;
			float pr, sr;
			string name,company,dealer, data, strId, strQuantity, strPrice;
			float price;
			fstream fm;
			fm.open(file.c_str(), ios_base::app | ios_base::in);
			while(!fm.eof()){
				fm>>ID>>name>>company>>dealer>>pr>>sr;
				cout<<"==== PRODUCT NO"<<count<<": \n";
				cout<<"ID= "<<ID<<endl;
				cout<<"NAME= "<<name<<endl;
				cout<<"COMPANY= "<<company<<endl;
				cout<<"DEALER= "<<dealer<<endl;
				cout<<"PURCHASE RATE= "<<pr<<endl;
				cout<<"SALE RATE= "<<sr<<endl;
				count++;
			}
			fm.close();
		}
};
class Product : public File_Connection{
	const string file1 = "Product_Description.txt";
	const string file2 = "Sale.txt";
	const string file3 = "Purchase.txt";
	int ID,Purchase_ID,Product_ID,Qty_Purchase;
	string Product_Name, Company, Dealer_Name, data,Date;
	float Purchase_Rate, Sale_Rate;
	public:
		Product(){
			fstream fm1, fm2, fm3;
			fm1.open(file1.c_str(), ios_base::app | ios_base::in);
			fm2.open(file2.c_str(), ios_base::app | ios_base::in);
			fm3.open(file3.c_str(), ios_base::app | ios_base::in);
			fm1.close();
			fm1.close();
			fm1.close();
		}
		New_Product(string pn, string c, string dn, float pr){
			int result;
			string strId, strPurRate, strSaleRate;
			ID=Gen_ID(file1);
			Product_Name=pn;
			Company=c;
			Dealer_Name=dn;
			Purchase_Rate=pr;
			Sale_Rate=Purchase_Rate + (Purchase_Rate*0.1);
//			strId=to_string(ID);
//			strPurRate=to_string(Purchase_Rate);
//			strSaleRate=to_string(Sale_Rate);
			data = strId+" "+Product_Name+" "+Company+" "+Dealer_Name+" "+strPurRate+" "+strSaleRate;
			result=Save_Data(data, file1);
			if(result == 1){
				cout<<"DATA SAVED SUCCESSFULLY"<<endl;
			}
		}
		Purchase(int proId, int qtyPur, string date){
			string strPurId,strProId,strQtyPurId;
			View_Data(file1);
			Purchase_ID= Gen_ID(file3);
			Product_ID=proId;
			Qty_Purchase=qtyPur;
			Date=date;
//			strPurId=to_string(Purchase_ID);
//			strProId=to_string(Product_ID);
//			strQtyPurId=to_string(Qty_Purchase);
			data= strPurId+" "+strProId+" "+strQtyPurId+" "+Date;
			Save_Data(data, file3);
		}
		remove_product(int id){
			View_Data(file1);
			Delete_Data(id, file1);
		}
};
int main(){
	Product p;
	int opt, proId, qty;
	string pn, cn, dn, date;
	float pr;
	char choice='y';
	cout<<"PRESS 1 TO 'ADD NEW PRODUCT'\nPRESS 2 TO 'PURCHASE PRODUCT'\nPRESS 3 TO 'SALE PRODUCT'\nPRESS 4 TO 'REMOVE PRODUCT'\n";
	cout<<"PRESS 5 TO 'REMOVE PURCHASE PRODUCT'\nPRESS 6 TO 'REMOVE SALE PRODUCT'\nPRESS 7 TO END\n";
	cin>>opt;
	while(opt != 6){
		switch(opt){
			case 1:
				choice='y';
				while(choice == 'y' || choice == 'Y'){
					if(choice == 'y' || choice == 'Y'){
						cout<<"ENTER PRODUCT NAME";
						cin>>pn;
						cout<<"ENTER COMPANY";
						cin>>cn;
						cout<<"ENTER DEALER NAME";
						cin>>dn;
						cout<<"ENTER PURCHASE RATE";
						cin>>pr;
						p.New_Product(pn, cn, dn, pr);
					} else {
						cout<<"INVALID"<<endl;
					}
					cout<<"DO YOU WANT TO ENTER MORE PRODUCTS(y or n): ";
					cin>>choice;
				}
				break;
			case 2:
				choice='y';
				while(choice == 'y' || choice == 'Y'){
					if(choice == 'y' || choice == 'Y'){
						cout<<"ENTER PRODUCT ID: ";
						cin>>proId;
						cout<<"ENTER PRODUCT QUANTITY: ";
						cin>>qty;
						cout<<"ENTER DATE: ";
						cin>>date;
						p.Purchase(proId, qty, date);
					} else {
						cout<<"INVALID"<<endl;
					}
					cout<<"DO YOU WANT TO PURCHASE MORE PRODUCTS(y or n): ";
					cin>>choice;
				}
				break;
			case 3:
				choice='y';
				while(choice == 'y' || choice == 'Y'){
					if(choice == 'y' || choice == 'Y'){
//						Sale();
					} else {
						cout<<"INVALID"<<endl;
					}
					cout<<"DO YOU WANT TO SALE MORE PRODUCTS(y or n): ";
					cin>>choice;
				}
				break;
			case 4:
				choice='y';
				while(choice == 'y' || choice == 'Y'){
					if(choice == 'y' || choice == 'Y'){
						cout<<"ENTER PRODUCT ID YOU WANT TO DELETE: ";
						cin>>proId;
						p.remove_product(proId);
					} else {
						cout<<"INVALID"<<endl;
					}
					cout<<"DO YOU WANT TO REMOVE MORE PRODUCTS(y or n): ";
					cin>>choice;
				}
				break;
			case 5:
				choice='y';
				while(choice == 'y' || choice == 'Y'){
					if(choice == 'y' || choice == 'Y'){
//						remove_purchase();
					} else {
						cout<<"INVALID"<<endl;
					}
					cout<<"DO YOU WANT TO REMOVE MORE PURCHASES(y or n): ";
					cin>>choice;
				}
				break;
			case 6:
				choice='y';
				while(choice == 'y' || choice == 'Y'){
					if(choice == 'y' || choice == 'Y'){
//						remove_sale();
					} else {
						cout<<"INVALID"<<endl;
					}
					cout<<"DO YOU WANT TO REMOVE MORE SALES(y or n): ";
					cin>>choice;
				}
				break;
			default:
				cout<<"INVALID OPTION"<<endl;
		}
		cout<<"PRESS 1 TO 'ADD NEW PRODUCT'\nPRESS 2 TO 'PURCHASE PRODUCT'\nPRESS 3 TO 'SALE PRODUCT'\nPRESS 4 TO 'REMOVE PRODUCT'\n";
		cout<<"PRESS 5 TO 'REMOVE PURCHASE PRODUCT'\nPRESS 6 TO 'REMOVE SALE PRODUCT'\nPRESS 7 TO END\n";
		cin>>opt;
	}
}
