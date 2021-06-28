#include <iostream>

using namespace std;

enum MenuSelectionEnum {
  MENU_NONE = 0,
  MENU_ADD = 1,
  MENU_SUBTRACT = 2,
  MENU_MULTIPLY = 3,
  MENU_DIVIDE = 4,
  MENU_QUIT = 5,
  MENU_END = 6
};

int menu1();
void menu();
void addFractions(int num1, int num2, int den1, int den2, int &resultNum, int &resultDen);
void subtractFractions(int num1, int num2, int den1, int den2, int &resultNum, int &resultDen);
void multiplyFractions(int num1, int num2, int den1, int den2, int &resultNum, int &resultDen);
void divideFractions(int num1, int num2, int den1, int den2, int &resultNum, int &resultDen);
void outputResults(int num1, int num2, int den1, int den2, int resultNum, int resultDen, int operation);
void inputFractionValuesFromUser(int &num1, int &num2, int &den1, int &den2);

int main()
{
  int menuSelect = MENU_NONE;
  int num1 = 0, num2 = 0, den1 = 0, den2 = 0;
  int resultNum = 0, resultDen = 0;

  do{
    menuSelect = menu1();
    inputFractionValuesFromUser(num1, num2, den1,den2);
    if (menuSelect == MENU_ADD)
    {
      addFractions(num1, num2, den1,den2, resultNum, resultDen);
    }
if (menuSelect == MENU_SUBTRACT)
    {
      subtractFractions(num1, num2, den1,den2, resultNum, resultDen);
    }
    if (menuSelect == MENU_MULTIPLY)
    {
      multiplyFractions(num1, num2, den1,den2, resultNum, resultDen);
    }
    if (menuSelect == MENU_DIVIDE)
    {
      divideFractions(num1, num2, den1,den2, resultNum, resultDen);
    }
    outputResults(num1, num2, den1, den2, resultNum, resultDen, menuSelect);
  }
  while(menuSelect != MENU_QUIT);
  system("pause");
}
int menu1()
{
  int menuItemSelect = 0;

  do{
    cout << "Fraction Calculator App" << endl;
    cout <<"1) Add Fractions" << endl;
	cout <<"2) Subtract Fractions" << endl;
    cout <<"3) Multiply Fractions" << endl;
    cout <<"4) Divide Fractions" <<endl;
    cout <<"5) Quit" <<endl;
    cout <<"Please make a selection:" << endl;
    cin >> menuItemSelect;
    if(menuItemSelect <= MENU_NONE || menuItemSelect >= MENU_END)
    cout << "Invalid menu selection. Please try again." <<endl;
  }
  while(menuItemSelect <= MENU_NONE || menuItemSelect >= MENU_END);
  return menuItemSelect;
}


void addFractions(int num1, int num2, int den1, int den2, int &resultNum, int &resultDen)
{
  resultNum = (num1 * den2) + (num2 * den1);
  resultDen = (den1 * den2);
}

void subtractFractions(int num1, int num2, int den1, int den2, int &resultNum, int &resultDen)
{
  resultNum = (num1 * den2) - (num2 * den1);
  resultDen = (den1 * den2);
}

void multiplyFractions(int num1, int num2, int den1, int den2, int &resultNum, int &resultDen)
{
  resultNum = (num1 * num2);
  resultDen = (den1 * den2);
}

void divideFractions(int num1, int num2, int den1, int den2, int &resultNum, int &resultDen)
{
  resultNum = (num1 * den2);
  resultDen = (den1 * num2);
}

void outputResults(int num1, int num2, int den1, int den2, int resultNum, int resultDen, int operation)
{
  if(operation == MENU_ADD)
  {
    cout << num1 << '/' << den1 << '+' << num2 << '/' << den2 << '=' << resultNum << '/' << resultDen << endl;
  }

  if(operation == MENU_SUBTRACT)
  {
    cout << num1 << '/' << den1 << '-' << num2 << '/' << den2 << '=' << resultNum << '/' << resultDen << endl;
  }

  if(operation == MENU_MULTIPLY)
  {
    cout << num1 << '/' << den1 << '*' << num2 << '/' << den2 << '=' << resultNum << '/' << resultDen << endl;
  }

  if(operation == MENU_DIVIDE)
  {
    cout << num1 << '/' << den1 << '/' << num2 << '/' << den2 << '=' << resultNum << '/' << resultDen << endl;
  }
}

void inputFractionValuesFromUser(int &num1, int &num2, int &den1, int &den2)
{
cout << endl;
cout << "Please enter numerator for first fraction: ";
cin >> num1;
cout << "Please enter denominator for first fraction: ";
cin >> den1;
cout <<"Please enter numerator for second fraction: ";
cin >> num2;
cout <<"Please enter denominator for second fraction: ";
cin >> den2;


}



