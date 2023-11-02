
@interface WFTimeTriggerLogic : NSObject

+ (id)adjustedTime:(id)arg1 byOffset:(unsigned long long)arg2;
+ (id)nextFireDateForTrigger:(id)arg1 currentDate:(id)arg2 currentSunriseTime:(id)arg3 currentSunsetTime:(id)arg4;
+ (id)nextFireDateFromNowWithTrigger:(id)arg1 currentSunriseTime:(id)arg2 currentSunsetTime:(id)arg3;
+ (long long)nextWeekdayFromDaysOfWeek:(id)arg1 timeComponents:(id)arg2 currentDate:(id)arg3 calendar:(id)arg4;

- (id)nextFireDateForTrigger:(id)arg1;

@end
