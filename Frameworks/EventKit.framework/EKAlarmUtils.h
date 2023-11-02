
@interface EKAlarmUtils : NSObject

+ (void)adjustRelativeAlarmsForEvent:(id)arg1 whenConvertingToIsAllDay:(bool)arg2;
+ (id)adjustedRelativeAlarmOffset:(double)arg1 isAllDay:(bool)arg2;
+ (id)adjustedRelativeAlarmOffsetFromAllDayToTimed:(double)arg1;
+ (id)adjustedRelativeAlarmOffsetFromTimedToAllDay:(double)arg1;

@end
