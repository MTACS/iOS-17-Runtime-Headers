
@interface ATXHeuristicAlarmUtilities : NSObject

+ (id)alarmDataWithAlarmDict:(id)arg1;
+ (id)alarmTrigger;
+ (id)fireDateWithAlarmDict:(id)arg1;
+ (id)firstFiringAmongAlarms:(id)arg1;
+ (bool)isValidNonRecentlyModifiedAlarm:(id)arg1 duringInterval:(id)arg2;
+ (id)localizedTimeWithAlarmDict:(id)arg1;

@end
