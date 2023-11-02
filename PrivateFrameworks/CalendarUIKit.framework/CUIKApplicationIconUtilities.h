
@interface CUIKApplicationIconUtilities : NSObject

+ (bool)_isDate:(id)arg1 withinNextWeekOfDate:(id)arg2 calendar:(id)arg3;
+ (bool)_isDate:(id)arg1 withinPreviousWeekOfDate:(id)arg2 calendar:(id)arg3;
+ (bool)_isWithinNextWeek:(id)arg1 calendar:(id)arg2;
+ (bool)_isWithinPreviousWeek:(id)arg1 calendar:(id)arg2;
+ (id)dateFormatterWithCalendar:(id)arg1;
+ (long long)iconDateNameFormatTypeForDateBasedOnDistanceFromNow:(id)arg1 calendar:(id)arg2;

@end
