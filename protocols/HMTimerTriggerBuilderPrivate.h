
@protocol HMTimerTriggerBuilderPrivate <HMTimerTriggerBuilder, HMTriggerBuilderPrivate>

@required

- (unsigned long long)recurrenceDays;
- (NSArray *)recurrences;
- (void)setRecurrenceDays:(unsigned long long)arg1;
- (void)setRecurrences:(NSArray *)arg1;
- (void)setSignificantEvent:(NSString *)arg1;
- (void)setSignificantEventOffset:(NSDateComponents *)arg1;
- (NSString *)significantEvent;
- (NSDateComponents *)significantEventOffset;

@end
