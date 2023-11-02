
@interface SNDateUtils : NSObject

+ (id)basicISO8601DateFormatter;
+ (id)basicISO8601StringFromDate:(id)arg1;
+ (id)dateForYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 nanosecond:(long long)arg7 timeZone:(id)arg8 error:(id*)arg9;
+ (id)dateForYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 timeZone:(id)arg4 error:(id*)arg5;
+ (id)dateFromBasicISO8601String:(id)arg1 error:(id*)arg2;
+ (id)dateFromExtendedISO8601String:(id)arg1 error:(id*)arg2;
+ (id)dateFromStartDate:(id)arg1 addingSeconds:(double)arg2 minutes:(double)arg3 hours:(double)arg4 days:(double)arg5 weeks:(double)arg6;
+ (id)dateLastWeek;
+ (id)dateRelativeToNowAddingSeconds:(double)arg1 minutes:(double)arg2 hours:(double)arg3 days:(double)arg4 weeks:(double)arg5;
+ (id)dateYesterday;
+ (id)extendedISO8601DateFormatter;
+ (id)extendedISO8601StringFromDate:(id)arg1;
+ (double)timeIntervalDay;
+ (double)timeIntervalForSeconds:(double)arg1 minutes:(double)arg2 hours:(double)arg3 days:(double)arg4 weeks:(double)arg5;
+ (double)timeIntervalHour;
+ (double)timeIntervalMinute;
+ (double)timeIntervalWeek;

- (id)init;

@end
