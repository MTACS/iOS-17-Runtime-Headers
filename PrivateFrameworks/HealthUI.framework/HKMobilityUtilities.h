
@interface HKMobilityUtilities : NSObject

+ (id)_localizedStringForClassification:(long long)arg1 narrow:(bool)arg2;
+ (bool)_valueRangeMin:(double*)arg1 max:(double*)arg2 forChartData:(id)arg3;
+ (bool)chartDataSpansMultipleClassifications:(id)arg1;
+ (long long)classificationForAppleWalkingSteadinessQuantity:(id)arg1;
+ (long long)classificationForAppleWalkingSteadinessValue:(double)arg1;
+ (id)generateAppleWalkingSteadinessDataSourceForTimeScope:(long long)arg1 displayType:(id)arg2 healthStore:(id)arg3 quantityType:(id)arg4 unitController:(id)arg5;
+ (id)generateAppleWalkingSteadinessSeriesForTimeScope:(long long)arg1 displayType:(id)arg2 color:(id)arg3;
+ (id)localizedAxisLabelStringForClassification:(long long)arg1;
+ (id)localizedDescriptionForClassification:(long long)arg1;
+ (id)localizedTitleForClassification:(long long)arg1;
+ (id)localizedTitleForWalkingSteadinessEventCategoryValue:(long long)arg1;

@end
