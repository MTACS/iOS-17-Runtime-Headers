
@interface HKMedicalIDWeightPickerDataProvider : NSObject

+ (double)defaultKilogramValue;
+ (double)getWeightInKilogramsForRow:(long long)arg1;
+ (double)localWeightValueForRow:(long long)arg1;
+ (long long)numberOfRows;
+ (long long)rowForWeightInKilograms:(double)arg1;
+ (id)titleForRow:(long long)arg1;

@end
