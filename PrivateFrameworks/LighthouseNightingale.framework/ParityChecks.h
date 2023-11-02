
@interface ParityChecks : NSObject

+ (bool)checkDaySummaryParityWithHKStore:(id)arg1 asOfJulianDay:(long long)arg2 error:(id*)arg3;
+ (bool)checkPredictionParityWithHKHealthStore:(id)arg1 withDayInputs:(id)arg2 asOfJulianDay:(long long)arg3 error:(id*)arg4;

@end
