
@interface HealthKitDataUtils : NSObject

+ (void)addCycleFactors:(id)arg1 intoPhaseIngestor:(id)arg2 withLastDay:(long long)arg3;
+ (id)asynchronouslyLoadCycleFactorsIntoDictionary:(id)arg1 FromHKHealthStore:(id)arg2 upToLastDay:(long long)arg3 withAdditionalDayCount:(long long)arg4 withDispatchGroup:(id)arg5 withError:(id*)arg6;
+ (void)asynchronouslyLoadDayInputsIntoArray:(id*)arg1 fromHealthStore:(id)arg2 upToJulianDay:(long long)arg3 withAdditionalDayCount:(long long)arg4 useHeartRate:(bool)arg5 useWristTemperature:(bool)arg6 withDispatchGroup:(id)arg7 error:(id*)arg8;
+ (id)asynchronouslyLoadDaySummaryDayInputsIntoDictionary:(id)arg1 FromHealthStore:(id)arg2 upToJulianDay:(long long)arg3 withAdditionalDayCount:(long long)arg4 includeWristTemperature:(bool)arg5 withDispatchGroup:(id)arg6 error:(id*)arg7;
+ (id)asynchronouslyLoadHeartRateDayInputsIntoDictionary:(id)arg1 fromHealthStore:(id)arg2 upToJulianDay:(long long)arg3 withAdditionalDayCount:(long long)arg4 withDispatchGroup:(id)arg5 error:(id*)arg6;
+ (id)asynchronouslyLoadMostRecentBMIIntoNSNumber:(id*)arg1 FromHKHealthStore:(id)arg2 asOfJulianDay:(long long)arg3 withDispatchGroup:(id)arg4 withError:(id*)arg5;
+ (id)asynchronouslyLoadMostRecentBodyMassInGramsIntoNSNumber:(id*)arg1 FromHKHealthStore:(id)arg2 asOfJulianDay:(long long)arg3 withDispatchGroup:(id)arg4 withError:(id*)arg5;
+ (id)asynchronouslyLoadMostRecentHeightInMetersIntoNSNumber:(id*)arg1 FromHKHealthStore:(id)arg2 asOfJulianDay:(long long)arg3 withDispatchGroup:(id)arg4 withError:(id*)arg5;
+ (id)asynchronouslyLoadQuantityType:(id)arg1 IntoNSNumber:(id*)arg2 WithUnit:(id)arg3 FromHKHealthStore:(id)arg4 asOfJulianDay:(long long)arg5 withDispatchGroup:(id)arg6 withError:(id*)arg7;
+ (id)fuseDayInputsFromDaySummary:(id)arg1 heartRate:(id)arg2;
+ (id)getBirthDateFromHKHealthStore:(id)arg1 withError:(id*)arg2;
+ (id)getConsolidatedSleepHoursFromSleepSamples:(id)arg1;
+ (id)getDayStreamProcessorConfigFromConfig:(id)arg1 andLastJulianDay:(long long)arg2;
+ (id)getDayStreamProcessorConfigFromHKHealthStore:(id)arg1 asOfJulianDay:(long long)arg2 withError:(id*)arg3;
+ (id)getHKMCAnalysisWithHKHealthStore:(id)arg1 error:(id*)arg2;
+ (id)getHKMCDaySummaryWithHKHealthStore:(id)arg1 forDayIndexRange:(struct { long long x1; long long x2; })arg2 error:(id*)arg3;
+ (id)getHistoricalCyclesFromDayInputs:(id)arg1 andCycleFactors:(id)arg2 upToJulianDay:(long long)arg3 WithError:(id*)arg4;
+ (id)getMenstruationPredictionsFromDayInputs:(id)arg1 andDayStreamProcessorConfig:(id)arg2 andCycleFactors:(id)arg3 asOfJulianDay:(long long)arg4 includingHeartRate:(bool)arg5 includingWristTemperature:(bool)arg6 withError:(id*)arg7;
+ (id)getPercentile:(long long)arg1 valueFromArray:(id)arg2;
+ (id)getReducedDayInputsFromFullInputs:(id)arg1 includingHeartRate:(bool)arg2 includingWristTemperature:(bool)arg3 upToJulianDay:(long long)arg4;
+ (id)reduceCycleFactors:(id)arg1 withLastJulianDay:(long long)arg2;
+ (id)removeForwardLookingValuesFromDayInputs:(id)arg1;

@end
