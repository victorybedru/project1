#include<iostream>
#include<string>
using namespace std;
int add(int a, int b){
    return a+b;
}
double add(double a, double b){
    return a+b;
}
template <class T>
    T operate(T x, T z) {
        if(z==0){
            cout<<"Enter a vald divisor."<<endl;
        return 0;}
        return x / z;
    }
namespace calculation{
    int subtract(int a, int b){
        return a-b;}
}
namespace operation{
    float multiply(float a, float b){
    return a*b;}
}
struct movie{
    string title;
    string director;
    int year;
    double money;
};
int main(){
    cout<< "Sum is: "<<add(3.45, 9.07)<<endl;
    cout<<"sum is: "<< add(39, 98)<<endl;
    cout << "division of integers: " << operate(24, 6) << endl;
    cout << "Operation on floats: " << operate(22.5, 6.05) << endl;
    cout<< "Difference is: "<<calculation::subtract(100,36)<<endl;
    cout<< "Product is: "<< operation::multiply(23.56,87.9)<<endl;
    movie favmovie;
    cout<<"What is your favorite movie? "<<endl;
    getline(cin,favmovie.title);
    cout<<"Who is the director? "<<endl;
    getline(cin,favmovie.director);
    cout<<"What year was it realeased in? "<<endl;
    cin>>favmovie.year;
    cout<<"how much did they make from boxoffice?? "<<endl;
    cin>>favmovie.money;
    cout<<"Movie summary: "<<endl;
    cout<< "Title: "<<favmovie.title<<endl;
    cout<< "Director: "<<favmovie.director<<endl;
    cout<< "Published year: "<<favmovie.year<<endl;
    cout<< "Total money generated: "<<favmovie.money<<"million"<<endl;

    
    return 0;
}
