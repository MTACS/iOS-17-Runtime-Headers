
@interface HDDemoDataFormula : NSObject

+ (double)computeBasalMetabolicRateFromWeight:(double)arg1 height:(double)arg2 age:(double)arg3 sex:(long long)arg4;
+ (double)computeBloodAlcoholContentForNumDrinks:(double)arg1 elapsedTime:(double)arg2 weight:(double)arg3 sex:(long long)arg4;
+ (double)computeBodyFatPercentageFromWeight:(double)arg1 leanBodyMass:(double)arg2;
+ (double)computeBodyMassIndexFromWeight:(double)arg1 height:(double)arg2;
+ (double)computeLeanBodyMassFromWeight:(double)arg1 height:(double)arg2 sex:(long long)arg3 waistCircumference:(double)arg4 forearmCircumference:(double)arg5 wristCircumference:(double)arg6 hipCircumference:(double)arg7;
+ (double)convertDegreeCelsiusToFahrenheit:(double)arg1;
+ (double)convertDegreeFahrenheitToCelsius:(double)arg1;

@end
