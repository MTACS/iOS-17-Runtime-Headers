
@protocol HMEventTriggerBuilder <HMTriggerBuilder>

@required

- (void)addEndEvent:(HMEvent *)arg1;
- (void)addEvent:(HMEvent *)arg1;
- (NSArray *)endEvents;
- (NSArray *)events;
- (bool)executeOnce;
- (NSPredicate *)predicate;
- (unsigned long long)recurrenceDays;
- (NSArray *)recurrences;
- (void)removeEndEvent:(HMEvent *)arg1;
- (void)removeEvent:(HMEvent *)arg1;
- (void)setEndEvents:(NSArray *)arg1;
- (void)setEvents:(NSArray *)arg1;
- (void)setExecuteOnce:(bool)arg1;
- (void)setPredicate:(NSPredicate *)arg1;
- (void)setRecurrenceDays:(unsigned long long)arg1;
- (void)setRecurrences:(NSArray *)arg1;

@end
