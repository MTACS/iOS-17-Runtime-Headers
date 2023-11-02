
@interface PowerUIPredictorHelper : NSObject

+ (id)column:(id)arg1 inDataFrame:(id)arg2;
+ (id)convertDateTimeColumnToSeconds:(id)arg1 inDataFrame:(id)arg2;
+ (id)convertDateToSeconds:(id)arg1;
+ (id)countForColumn:(id)arg1 inDataFrame:(id)arg2;
+ (id)events:(id)arg1 forHourBin:(unsigned long long)arg2 date:(id)arg3 withMaxDuration:(double)arg4;
+ (id)filterDataFrame:(id)arg1 forColumn:(id)arg2 withFilterHandler:(id /* block */)arg3;
+ (id)filterDataFrame:(id)arg1 withValue:(double)arg2 forColumn:(id)arg3;
+ (id)filterDataFrame:(id)arg1 withValueGreaterThan:(double)arg2 andLessThan:(double)arg3 forColumn:(id)arg4;
+ (id)filterEvents:(id)arg1 startOnSameWeekdayAs:(id)arg2;
+ (id)filterEventsSortedByStartDateAscending:(id)arg1 startsBefore:(id)arg2 dynamicallyAroundDate:(id)arg3 withHourBinWidth:(unsigned long long)arg4;
+ (id)getDurationsFromEvents:(id)arg1 withUnit:(double)arg2 cappedAt:(double)arg3;
+ (double)getHourBinID:(id)arg1 forHourBin:(unsigned long long)arg2;
+ (id)getUsageBucketsForEvents:(id)arg1 forDate:(id)arg2 withLog:(id)arg3;
+ (double)hoursUntilUseFromBucketedUsage:(id)arg1 withCurrentHour:(int)arg2 withComponentsMinutes:(long long)arg3;
+ (double)meanEventDuration:(id)arg1;
+ (id)meanForColumn:(id)arg1 inDataFrame:(id)arg2;
+ (double)meanOf:(id)arg1;
+ (double)medianOf:(id)arg1;
+ (double)medianTimeBetweenDescendingEvents:(id)arg1;
+ (id)percentile:(double)arg1 forColumn:(id)arg2 inDataFrame:(id)arg3;
+ (id)percentiles:(id)arg1 forColumn:(id)arg2 inDataFrame:(id)arg3;
+ (void)quantizeValuesInDataFrame:(id)arg1 forColumn:(id)arg2 withBinWidth:(id)arg3;
+ (id)standardDeviationForColumn:(id)arg1 inDataFrame:(id)arg2;
+ (double)standardDeviationOf:(id)arg1;
+ (id)timeBetweenUsesForSortedDescendingByAgeEvents:(id)arg1 forHourBin:(unsigned long long)arg2 atDate:(id)arg3 addAtDate:(bool)arg4;
+ (id)varianceForColumn:(id)arg1 inDataFrame:(id)arg2;

@end
