#include <iostream> // let us p[rint to console (cout)
#include <conio.h> // give us _getch()
#include <string>

int GetLengthFromUser();
int GetWidthFromUser();
int CalculateArea(int Length, int Width);
void PriDisplayArea(int Area);


using namespace std;


int main()
{
  int Length =  GetLengthFromUser();
  int Width = GetWidthFromUser();
 int Area = CalculateArea(Length, Width);
   PriDisplayArea(Area);

    (void)_getch();
    return 0;
}

int GetLengthFromUser()
{
    int Length = 0;

    cout << "Enter the length of the rectangle ";
    cin >> Length;
    return Length;
}
int GetWidthFromUser()
{
    int Width = 0;

    cout << "Enter the Width of the rectangle ";
    cin >> Width;
    return Width;

}
int CalculateArea(int Length, int Width)
{
  return Length* Width;
}
void PriDisplayArea(int Area)
{
    cout <<"Area "<< Area;
}