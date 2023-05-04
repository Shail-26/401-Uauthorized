#include <iostream>
#include <iomanip>
using namespace std;

class BMI
{
public:
    float weight, heightf, heightm, bmi;
    float min_weight, max_weight;

    void welcome()
    {
        cout << "\n\n" << endl;
        cout << "***       ***       ***   ********   ***        ********   *******   ****       ****   ******** " << endl;
        cout << " ***     *****     ***    ***        ***        ***        **   **   *****     *****   ***      " << endl;
        cout << "  ***   *** ***   ***     ********   ***        ***        **   **   *** **   ** ***   ******** " << endl;
        cout << "   *** ***   *** ***      ***        ********   ***        **   **   ***  ** **  ***   ***      " << endl;
        cout << "    *****     *****       ********   ********   ********   *******   ***   ***   ***   ******** " << endl;
        cout << "\n\n" <<endl;
        cout << "WELCOME to our project.\nTo check your BMI give the following details:\n" << endl;
    }

    void get()
    {
        cout << "Enter your weight in kilograms: ";
        cin >> weight;

        cout << "Enter your height in centimeters: ";
        cin >> heightf;
    }
    void change()
    {
        heightm = heightf * 0.01;
    }
    void bmioutput()
    {
        if(weight<=0 || heightf<=0){
            cout << "Please enter the data correctly." << endl;
            cout << endl;
            get();
        } else {
            // BMI Formula
            bmi = weight / (heightm * heightm);

            // Result
            cout << "Your BMI is: " << fixed << setprecision(2) << bmi << endl;
        }
    }
    void output()
    {
        // Determine the BMI category
        if (bmi < 18.5) {
            cout << "You are underweight." << endl;
            // Calculate the minimum weight needed to reach normal weight
            min_weight = 18.5 * heightm * heightm;
            cout << "To reach normal weight, you need to gain at least " << min_weight - weight << " kilograms." << endl;
        } else if (bmi < 25) {
            cout << "You are normal weight." << endl;
        } else if (bmi < 30) {
            cout << "You are overweight." << endl;
            // Calculate the maximum weight allowed to reach normal weight
            max_weight = 24.9 * heightm * heightm;
            cout << "To reach normal weight, you need to lose at least " << weight - max_weight << " kilograms." << endl;
        } else {
            cout << "You are obese." << endl;
            // Calculate the maximum weight allowed to reach overweight category
            max_weight = 29.9 * heightm * heightm;
            cout << "To reach overweight category, you need to lose at least " << weight - max_weight << " kilograms." << endl;
        }
    }
};
int main()
{
    BMI B;
    B.welcome();
    B.get();
    B.change();
    cout << endl;
    cout << "***************************" << endl;
    B.bmioutput();
    B.output();
    cout << endl;
    cout << "This mini project is done by 22CS001 - Amit Kumar,\n\t\t\t     22CS002 - Aditya Pomal,\n\t\t\t     22CS035 - Shail Macwan." << endl;
    cout << endl;
    cout << "------------THANK YOU------------" << endl;
    return 0;
}
