
@protocol HMTimerTriggerBuilder <HMTriggerBuilder>

@required

- (NSDate *)fireDate;
- (NSDateComponents *)recurrence;
- (void)setFireDate:(NSDate *)arg1;
- (void)setRecurrence:(NSDateComponents *)arg1;
- (void)setTimeZone:(NSTimeZone *)arg1;
- (NSTimeZone *)timeZone;

@end
