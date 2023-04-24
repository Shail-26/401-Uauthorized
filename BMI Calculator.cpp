#include <iostream>
#include <iomanip>
using namespace std;

class BMI
{
public:
    float weight, height, bmi;
    float min_weight, max_weight;

    void get()
    {
        cout << "Enter your weight in kilograms: ";
        cin >> weight;

        cout << "Enter your height in meters: ";
        cin >> height;
    }
    void bmioutput()
    {
        if(weight<=0 || height<=0){
            cout << "Please enter the data correctly." << endl;
            cout << endl;
            get();
        } else {
            // Calculate the BMI
            bmi = weight / (height * height);

            // Output the result
            cout << "Your BMI is: " << bmi << endl;
        }
    }
    void output()
    {
        // Determine the BMI category
        if (bmi < 18.5) {
            cout << "You are underweight." << endl;
            // Calculate the minimum weight needed to reach normal weight
            min_weight = 18.5 * height * height;
            cout << "To reach normal weight, you need to gain at least " << min_weight - weight << " kilograms." << endl;
        } else if (bmi < 25) {
            cout << "You are normal weight." << endl;
        } else if (bmi < 30) {
            cout << "You are overweight." << endl;
            // Calculate the maximum weight allowed to reach normal weight
            max_weight = 24.9 * height * height;
            cout << "To reach normal weight, you need to lose at least " << weight - max_weight << " kilograms." << endl;
        } else {
            cout << "You are obese." << endl;
            // Calculate the maximum weight allowed to reach overweight category
            max_weight = 29.9 * height * height;
            cout << "To reach overweight category, you need to lose at least " << weight - max_weight << " kilograms." << endl;
        }
    }
};
int main()
{
    BMI B;
    B.get();
    B.bmioutput();
    B.output();
    return 0;
}
