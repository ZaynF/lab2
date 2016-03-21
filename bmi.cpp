#include"bmi.h"
float BMI::bmi(float h,float w){
	return w/(h/100)/(h/100);
}

string BMI::category(float h,float w){
	float b=bmi(h,w);
	if(b<15)
		return "Very severely underweight";
	else if(15<=b && b<16)
		return "Severely underweight";
	else if(16<=b && b<18.5)
		return "Underweight";
	else if(18.5<=b && b<25)
	 	return "Normal";
	else if(25<=b && b<30)
		return "Overweight";
	else if(30<=b && b<35)
		return "Obese Class I (Moderately obese)";
	else if(35<=b && b<40)
		return "Obese Class II (Severely obese)";
	else
		return "Obese Class III (Very severely obese)";
	 }
