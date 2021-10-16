//program for demonstrating the arrays and operations on them , written by justin.m on 16th october 2021
#include<iostream>
using namespace std;
//function for performing respeective operation in the array , this function alone handles all the operations
void ArrayHandler(int out, int array[], char opchar,int index,int size)
{
	if (opchar == '+')
	{   
		
		for (int i = index; i < size; i++)
		{
			out +=array[i];
		}
		cout << "Sum of elements in the array is   :" << out << "\n";
	}
	else if (opchar == '-')
	{

		for (int i = index; i < size; i++)
		{
			out -=array[i];
		}
		cout << "Difference of elements in the array is  : " << out << "\n";
	}
	else {
		for (int i = index; i < size; i++)
		{
			out *= array[i];
		}
		cout << "Product of elements  in the array  is   :" << out << "\n";

	}
}

int main()
{
	//variables for storing the size of the array , output of operations
	int size, output;
	//character variables for performing the opeartions and control flow
	char OperatorCharacter,ControlCharacter;
	cout << "How many elements you want to enter \n";
	cin >> size;
	//dynamically allocating the array
	int* array = new int[size]();
	cout << "Enter elements to the array\n";
	//Reading elements to the array
	for (int elementindex = 0; elementindex < size; elementindex++)
	{
		cin >> array[elementindex];
	}
	//creating  a boolean element for controlling the flow of  execution 
	bool flag = true;
	while (flag)
	{
		cout << "Enter the operation you wish to perform in the array\n";
		cout << "For addition '+'\n";
		cout << "For substraction '-'\n";
		cout << "For Multiplication '*'\n";
		cin >> OperatorCharacter;
		//following if statements decides which operation should be perfomed , they modify the params for calling the arrayparser fucntion
		if (OperatorCharacter == '+')
		{
			output = 0;
			int index = 0;
			ArrayHandler(output, array, OperatorCharacter,index,size);
		}
		else if (OperatorCharacter == '-')
		{
			output = array[0];
			int index = 1;
			ArrayHandler(output, array, OperatorCharacter, index,size);
		
		}
		else if (OperatorCharacter == '*')
		{
			output = 1;
			int index = 0;
			ArrayHandler(output, array, OperatorCharacter, index,size);
		}
		else
		{
			cout << "Entered character is invalid\n";
		}
		cout << "--------------------------------------------------------------------------------------\n";
		cout << "Do you want to perform any other operation on the array...??? , If so enter 'y' or 'Y' \n";
		cout << "--------------------------------------------------------------------------------------\n";
		cout << "Enter any other character for program termination\n";
		cout << "--------------------------------------------------------------------------------------\n";
		cin >> ControlCharacter;
		if (ControlCharacter == 'y' || ControlCharacter == 'Y')
		{
			flag = true;
		}
		//set flag to false , user no longer wish to continue
		else
		{
			flag = false;
		}
	}
	//freeing the memory created for the array
	delete array;
}
