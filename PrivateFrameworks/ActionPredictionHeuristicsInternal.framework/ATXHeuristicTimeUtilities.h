
@interface ATXHeuristicTimeUtilities : NSObject

+ (id)enabledAlarmsFromTS:(double)arg1 toTS:(double)arg2 environment:(id)arg3;
+ (double)timestampAtDayOfTimestamp:(double)arg1 hour:(long long)arg2 minute:(long long)arg3;
+ (double)timestampByOffsettingDays:(double)arg1 dayOffset:(long long)arg2;
+ (double)timestampByOffsettingStartOfTodayByNumberOfDays:(long long)arg1;
+ (double)timestampWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 atDayOfTimestamp:(double)arg3;
+ (id)usualAlarmTimeOfDayDataSourceWithEnvironment:(id)arg1;

@end
