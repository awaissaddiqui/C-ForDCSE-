#include <iostream>
using namespace std;

int main(){
	int max=0, i=0, size=0;
	cout << "How many elements are you entering: ";
	cin >> size;
	if (size < 2){
		cout << "\nFor Comparison you must have to enter more than 2 elements.\n";
	}else{
		int inputArr[size];
		cout<< "\nEnter " << size <<" elements.\n";
		while(i < size){
			cout<<"Enter number in ["<<i<<"]: ";
			cin>>inputArr[i];
			i++;
		}
		max=inputArr[0];
		for (i=0; i<size; i++){
			if (max < inputArr[i])
				max=inputArr[i];
		}
		cout << "\nThe maximum number in this array is: "<<max;	
	}
	return 0;
}
