
@interface HFTimerTriggerCalendarEventAdapter : HFTimerTriggerTimeEventAdapter

+ (bool)hasWeekdayRecurrenceInRecurrences:(id)arg1;

- (id)createTriggerWithName:(id)arg1 timeZone:(id)arg2 recurrences:(id)arg3;
- (id)updateTrigger:(id)arg1;
- (void)updateTriggerBuilder:(id)arg1 recurrences:(id)arg2 inHome:(id)arg3;

@end
