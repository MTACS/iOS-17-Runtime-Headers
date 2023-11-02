
@interface DateUtils : NSObject

+ (id)dateOnDayIndex:(long long)arg1 atHour:(long long)arg2 calendar:(id)arg3;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })getHeartRateDateRangeUpToJulianDay:(long long)arg1 withAdditionalDayCount:(long long)arg2;
+ (long long)getJulianDayFromNSDate:(id)arg1;
+ (id)getNSDateComponentsFromJulianDay:(unsigned long long)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })getStandardDateRangeUpToJulianDay:(long long)arg1 withAdditionalDayCount:(long long)arg2;
+ (id)modifiedJulianStartDate;
+ (id)sleepDayIntervalForMorningIndex:(long long)arg1 calendar:(id)arg2;
+ (id)sleepDayStartForMorningIndex:(long long)arg1 calendar:(id)arg2;

@end
