
@interface HKCardioFitnessClassificationUtilities : NSObject

+ (id)_cardioFitnessLevelTransitionDatesForDateInterval:(id)arg1 biologicalSex:(long long)arg2 dateOfBirth:(id)arg3;
+ (id)_cardioFitnessLevels;
+ (id)_flattenedThresholdsForLevelData:(id)arg1;
+ (id)_parseCoreMotionClassificationData:(id)arg1;
+ (id)_queryCoreMotionClassifications;
+ (id)_queryCoreMotionClassificationsForBiologicalSex:(long long)arg1 age:(long long)arg2;
+ (id)_stubbedCardioFitnessLevelData;
+ (id)analyticsStringForLevel:(long long)arg1;
+ (id)cardioFitnessDataForBiologicalSex:(long long)arg1;
+ (id)cardioFitnessDataForBiologicalSex:(long long)arg1 age:(long long)arg2;
+ (id)cardioFitnessDataForLevel:(long long)arg1 biologicalSex:(long long)arg2 age:(long long)arg3;
+ (id)cardioFitnessDataForLevel:(long long)arg1 date:(id)arg2 healthStore:(id)arg3;
+ (id)cardioFitnessDataForVO2Max:(double)arg1 biologicalSex:(long long)arg2 age:(long long)arg3;
+ (id)cardioFitnessLevelDateIntervalsWithDateInterval:(id)arg1 healthStore:(id)arg2;
+ (long long)cardioFitnessLevelForVO2Max:(double)arg1 biologicalSex:(long long)arg2 age:(long long)arg3;
+ (long long)cardioFitnessLevelForVO2MaxSample:(id)arg1 inHealthStore:(id)arg2;
+ (id)cardioFitnessPropertiesForDate:(id)arg1 healthStore:(id)arg2;
+ (id)flattenedCardioFitnessDataForBiologicalSex:(long long)arg1;

@end
