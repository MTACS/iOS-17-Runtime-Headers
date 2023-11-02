
@interface MetricsUtils : NSObject

+ (id)daysSinceFactorsRemovedFromCycleFactors:(id)arg1 andLastJulianDay:(long long)arg2;
+ (double)getAbsErrOfPrediction:(id)arg1 givenCycle:(id)arg2;
+ (double)getLeftLightRedDaysFromPrediction:(id)arg1;
+ (double)getMeanOfValuesInArray:(id)arg1;
+ (id)getMetricsFromDayInputs:(id)arg1 startingAtJulianDay:(long long)arg2 andEndingAtJulianDay:(long long)arg3;
+ (double)getPopulationStandardDeviationOfValuesInArray:(id)arg1;
+ (double)getPredictionErrorFromHistoricalCycle:(id)arg1 andPrediction:(id)arg2;
+ (double)getRightLightRedDaysFromPrediction:(id)arg1;
+ (id)getRollingMeanWithoutOutliers:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3;
+ (id)getRollingSDWithoutOutliers:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3;
+ (double)getWastageFromHistoricalCycle:(id)arg1 andPrediction:(id)arg2;
+ (long long)getWidthFromPrediction:(id)arg1;

@end
