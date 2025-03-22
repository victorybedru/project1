#include<iostream>
#include<string>
#define tax_rate 0.05f // preprocessor directive
using namespace std;
const float taxrate= 0.05f; // using const keyword
int main(){
	// An introductory message
	cout<< "We are delighted to have you in our product sales and inventory analysis program. \n";
	cout<< "This program is designed to compute total sales and adjust inventory based on product transactions.\n";
	cout<< " Note: Make sure to compile the code before running it as C++ is a compiled language. \n";
	//Variable declaration
	string product_name= "Items"; // Direct initialization
	int product_category; //assignment after declaration
	int inventory_quantity{100}; //List initialization
	float product_price = 89.8f; // Direct initialization
	int item_sold;
	int new_inventory;
	float total_sales;
	string inventory_status;
	//creating helper variable using type deduction
	auto sales_copy= total_sales; // using auto keyword
decltype(inventory_quantity)supply_amount= 80; // using decltype keyword

	//declare computed value for variables
new_inventory= inventory_quantity;
new_inventory-=item_sold;
	float total_sale=item_sold*product_price;
// input from the user
cout<< "Provide product name(single word):"<<endl;
cin>>product_name;
cout<<"Provide product category(1-5):"<<endl;
cin>>product_category;
while(product_category<1 || product_category>5){
	cout<<"Enter a valid product category between 1 and 5."<<endl;
	cin>>product_category;}
switch(product_category){
	case 1:
	    cout<< "Electronics"<< endl;
	    break;
	 case 2:
	     cout<< "Groceries"<< endl;
	     break;
	 case 3:
	     cout<< "Clothing"<< endl;
	     break;
	 case 4:
	     cout<< "Stationary"<<endl;
	     break;
	 case 5:
	     cout<<"Miscellaneous"<<endl;
	     break;}
cout<<"Provide initial inventory quantity"<<endl;
cin>> inventory_quantity;
cout<< "Enter product price"<<endl;
cin>>product_price;
cout<<"Enter the number of items sold"<< endl;
cin>>item_sold;
//perform calculations
new_inventory= item_sold- inventory_quantity;
total_sales= item_sold* product_price;

//conditional operator
inventory_status= (new_inventory<10) ? "Low inventory": "Sufficient inventory";
//summary on product detail
cout<< "Product name: \n"<< product_name<<endl;
cout<< "Product category: \n"<< product_category<<endl;
cout<<"Initial inventory quantity: \n"<< inventory_quantity<<endl;
cout<<"Product price: \n"<< product_price<<endl;
cout<<"Number of items sold: \n"<< item_sold<<endl;
//Summary of computed values
cout<<"New inventory: \n"<< new_inventory<<endl;
cout<<"Total_sales: \n"<< total_sales<<endl;
//Summary of inventory status
cout<< "Inventory status: \n"<< inventory_status<<endl;
//Summary of helper variable value
cout<< "Sales copy(using auto keyword): \n"<< sales_copy<<endl;
cout<< "Supply amount(using decltype keyword): \n"<< supply_amount<<endl;
// Tax rate output
cout<< "Tax rate(preprocessor directive): \n"<< tax_rate<<endl;
cout<< "Tax rate(const keyword): \n"<< taxrate<<endl;
//Creating a for loop to display item and price
for(int i=1; i<= item_sold; ++i)
{
cout<<"Item"<< i<<":Price-"<< product_price<<endl;
}



	
	return 0;
}
