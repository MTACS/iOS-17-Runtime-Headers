
@protocol MTScheduleable <NAEquatable, NSCopying>

@required

- (NSString *)identifier;
- (bool)shouldBeScheduled;
- (NSArray *)upcomingTriggersAfterDate:(NSDate *)arg1;

@optional

- (bool)isItemEnabled;
- (bool)isSingleTime;
- (bool)isSleepItem;
- (bool)overridesScheduledObject:(MTScheduledObject *)arg1 calendar:(NSCalendar *)arg2;
- (void)scheduleOverridenForDate:(NSDate *)arg1;

@end
