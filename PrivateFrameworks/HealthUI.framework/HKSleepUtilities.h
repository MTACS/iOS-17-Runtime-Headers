
@interface HKSleepUtilities : NSObject

+ (void)_applyModificationsToSleepSeries:(id)arg1 sleepSeriesType:(long long)arg2 sleepDisplayType:(id)arg3 timeScope:(long long)arg4 unitController:(id)arg5 numericAxisConfigurationOverrides:(id)arg6;
+ (long long)_axisPurposeForSleepSeriesType:(long long)arg1;
+ (struct CGSize { double x1; double x2; })_barCornerRadiusForCurrentDevice;
+ (id)_fillStylesFromColors:(id)arg1;
+ (id)_findOrCreateSleepChartCacheForSleepDisplayType:(id)arg1 cacheIdentifier:(id)arg2 cacheController:(id)arg3 dataSourceProvider:(id /* block */)arg4;
+ (id)_generateComparisonSleepSeriesForTimeScope:(long long)arg1;
+ (id)_generateDailyTimePeriodSeriesForTimeScope:(long long)arg1;
+ (id)_generateDailyTimePeriodSeriesWithSchedulesForTimeScope:(long long)arg1;
+ (id)_generateDurationSleepGoalSeriesForTimeScope:(long long)arg1;
+ (id)_generateDurationSleepSeriesForTimeScope:(long long)arg1;
+ (id)_generateSleepStageDurationSeriesForTimeScope:(long long)arg1;
+ (id)_generateSleepStageSeriesForTimeScope:(long long)arg1;
+ (id)_goalLineMarkerStyle;
+ (id)_goalLineStrokeStyle;
+ (id)_gradientFillColorForSleepAnalysis:(long long)arg1 gradientPosition:(double)arg2;
+ (id)_lessSaturatedColorWithColor:(id)arg1;
+ (id)_scheduleMarkerStyleWithColor:(id)arg1;
+ (id)_seriesStrokeStyle;
+ (id)_sleepSeriesAxisForSleepSeries:(id)arg1 sleepSeriesType:(long long)arg2 sleepDisplayType:(id)arg3 unitController:(id)arg4 numericAxisConfigurationOverrides:(id)arg5;
+ (id)_sleepSeriesForType:(long long)arg1 timeScope:(long long)arg2;
+ (id)buildSleepChartCachesWithDisplayType:(id)arg1 dataSourceProvider:(id)arg2 cacheController:(id)arg3 healthStore:(id)arg4;
+ (id)buildSleepGraphSeriesForSleepSeriesType:(long long)arg1 sleepDisplayType:(id)arg2 unitController:(id)arg3 numericAxisConfigurationOverrides:(id)arg4 timeScope:(long long)arg5;
+ (id)buildSleepGraphSeriesMappingWithSleepSeriesType:(long long)arg1 sleepDisplayType:(id)arg2 unitController:(id)arg3 numericAxisConfigurationOverrides:(id)arg4;
+ (id)fillStyleForSleepCategoryValue:(long long)arg1 isActive:(bool)arg2;
+ (id)localizedInfographicDescriptionForCategoryValue:(long long)arg1;
+ (id)localizedInfographicTitleForCategoryValue:(long long)arg1;
+ (id)sleepDaySummaryNoonAlignedXValue:(id)arg1;
+ (id)sleepDaySummaryStandardXValue:(id)arg1;
+ (id)sleepDisplayTypesWithHealthStore:(id)arg1 sleepDisplayType:(id)arg2 unitController:(id)arg3 displayTypeController:(id)arg4 chartCacheController:(id)arg5 sleepChartFormatter:(id)arg6 sleepSeriesType:(long long)arg7 sleepChartCaches:(id)arg8 customSleepSeries:(id)arg9 isStackedChart:(bool)arg10;
+ (id)sleepDisplayTypesWithHealthStore:(id)arg1 sleepDisplayType:(id)arg2 unitController:(id)arg3 displayTypeController:(id)arg4 chartCacheController:(id)arg5 sleepChartFormatter:(id)arg6 sleepSeriesType:(long long)arg7 sleepChartCaches:(id)arg8 customSleepSeriesMapping:(id)arg9 isStackedChart:(bool)arg10;
+ (id)sleepDurationNoDataRange;
+ (id)sleepStageContextTitleForSleepValue:(long long)arg1 timeScope:(long long)arg2;
+ (id)sleepStageFillStylesWithActiveSleepStage:(id)arg1;
+ (double)somnogramBackgroundOpacityWithIsDarkMode:(bool)arg1 isHighContrast:(bool)arg2 isGrayScale:(bool)arg3;
+ (id)verticalNumericalAxisWithConfigurationOverrides:(id)arg1;

@end
