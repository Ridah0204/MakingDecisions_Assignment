#include<iostream>

using namespace std;

int main() {

	float height, weight;
	float bmi;
	const float INCHES_TO_METERS = 0.0254f;
	const float POUNDS_TO_KILOGRAMS = 0.453592f;

	
	cout << " Please enter height in inches: ";
	cin >> height;

    cout << "Please enter weight in pounds: ";
	cin >> weight;

	height = height * INCHES_TO_METERS;

	weight = weight * POUNDS_TO_KILOGRAMS;



	bmi = (weight) / (height * height);

	cout << " \n########### BMI Calculator ##########\n\n";
	cout << " The Body Mass Index is: " << bmi << endl;

	if (bmi >= 30.0) {
		if (bmi > 30.0 && bmi < 34.9) {
			cout << " The classification is: Obese class I \n";
		}
		else if (bmi > 35.0 && bmi < 39.9) {
			cout << " The classification is: Obese class II \n";
		}
		else {
			cout << " The classification is: Obese class III \n";
		}
		
	
}
	else if (bmi > 25) {
		cout << " The classification is: Overweight";
	}
	else if (bmi < 25 && bmi > 18.5) {
		cout << " The classification is: Optimal ";
	}
	else
		cout << " The classification is: Underweight ";
	cout << "\n\n############## The end ############\n\n";




	return 0;
}