
@interface HKCardioFitnessUtilities : NSObject <HKHealthChartFactoryViewControllerProviderClass>

+ (id)_localizationKeyForCardioFitnessLevel:(long long)arg1 keyVariant:(id)arg2;
+ (id)cardioFitnessDataForBiologicalSex:(long long)arg1;
+ (id)cardioFitnessDataForBiologicalSex:(long long)arg1 age:(long long)arg2;
+ (id)cardioFitnessDataForLevel:(long long)arg1 biologicalSex:(long long)arg2 age:(long long)arg3;
+ (id)cardioFitnessDataForLevel:(long long)arg1 date:(id)arg2 healthStore:(id)arg3;
+ (id)cardioFitnessDataForVO2Max:(double)arg1 biologicalSex:(long long)arg2 age:(long long)arg3;
+ (id)cardioFitnessInteractiveChartViewControllerWithDisplayDate:(id)arg1 applicationItems:(id)arg2 preferredOverlay:(long long)arg3 analyticsDelegate:(id)arg4 restorationUserActivity:(id)arg5 trendModel:(id)arg6 additionalChartOptions:(unsigned long long)arg7;
+ (bool)cardioFitnessLevelChartShouldDisplayLowerBound:(long long)arg1;
+ (bool)cardioFitnessLevelChartShouldDisplayUpperBound:(long long)arg1;
+ (id)cardioFitnessLevelDataForChartData:(id)arg1;
+ (id)cardioFitnessLevelDateIntervalsWithDateInterval:(id)arg1 healthStore:(id)arg2;
+ (long long)cardioFitnessLevelForVO2Max:(double)arg1 biologicalSex:(long long)arg2 age:(long long)arg3;
+ (long long)cardioFitnessLevelForVO2MaxSample:(id)arg1 inHealthStore:(id)arg2;
+ (id)cardioFitnessLookupPropertiesForChartData:(id)arg1;
+ (id)classificationIdentifierForIndex:(long long)arg1;
+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 additionalChartOptions:(unsigned long long)arg8;
+ (id)effectiveChartPointDateWithStatisticsInterval:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)flattenedCardioFitnessDataForBiologicalSex:(long long)arg1;
+ (id)localizationKeyForCardioFitnessLevel:(long long)arg1;
+ (id)localizedStringForCardioFitnessDescription:(long long)arg1 age:(long long)arg2;
+ (id)localizedStringForCardioFitnessLevel:(long long)arg1;
+ (id)localizedStringForCardioFitnessLevelName:(long long)arg1;
+ (id)localizedStringForCardioFitnessTitle:(long long)arg1;
+ (id)vo2MaxInteractiveChartViewControllerWithDisplayDate:(id)arg1 applicationItems:(id)arg2 restorationUserActivity:(id)arg3 trendModel:(id)arg4 additionalChartOptions:(unsigned long long)arg5;

@end
