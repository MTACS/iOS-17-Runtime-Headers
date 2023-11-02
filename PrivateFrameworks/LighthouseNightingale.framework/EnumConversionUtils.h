
@interface EnumConversionUtils : NSObject

+ (unsigned char)HAMenstrualAlgorithmsFlowFromHKMCMenstrualFlow:(long long)arg1;
+ (unsigned char)HAMenstrualAlgorithmsOvulationTestResultFromHKMCOvulationTestResult:(long long)arg1;
+ (long long)HKMCMenstrualFlowFromHAMenstrualAlgorithmsFlow:(unsigned char)arg1;
+ (long long)HKMCOvulationTestResultFromHAMenstrualAlgorithmsOvulationTestResult:(unsigned char)arg1;
+ (long long)HKMCPredictionPrimarySourceFromHAMenstrualAlgorithmsPrimarySource:(unsigned char)arg1;
+ (id)getStringRepresentationOfHAMenstrualAlgorithmsPrimarySource:(unsigned char)arg1;
+ (id)stringFromHKMCPredictionPrimarySource:(long long)arg1;

@end
