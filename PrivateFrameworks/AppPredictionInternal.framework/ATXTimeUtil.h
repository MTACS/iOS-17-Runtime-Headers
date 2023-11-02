
@interface ATXTimeUtil : NSObject

+ (id)getDayFromTime:(id)arg1 timeZone:(id)arg2;
+ (id)getTimeFromDate:(id)arg1;
+ (id)nextStartOfDayAfter:(id)arg1 timeZone:(id)arg2;
+ (bool)time:(id)arg1 isBetweenStartTime:(id)arg2 andEndTime:(id)arg3;
+ (id)todayWithTimeZone:(id)arg1;
+ (id)yesterdayWithTimeZone:(id)arg1;

@end
