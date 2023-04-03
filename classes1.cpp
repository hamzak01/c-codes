#include<iostream>
#include<string>


using namespace std;

class movie{
public:

int release_date;
string name;
int revenue;
string director;

void output(){
cout<<"\n\nRelease date: "<<release_date;
cout<<"\n\nName: "<<name;
cout<<"\n\nRevenue: $"<<revenue;
cout<<"\n\nDirector: "<<director;
}

};

int main()
{

movie movies;
movies.name="Armageadon";
movies.release_date=1999;
movies.director="Casey Williams";
movies.revenue=4000000;
movies.output();

    return 0;
}