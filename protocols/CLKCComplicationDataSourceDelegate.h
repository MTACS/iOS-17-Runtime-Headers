
@protocol CLKCComplicationDataSourceDelegate <NSObject>

@required

- (void)appendEntries:(NSArray *)arg1;
- (void)appendEntries:(NSArray *)arg1 withTritiumUpdatePriority:(long long)arg2;
- (void)invalidateEntries;
- (void)invalidateEntriesWithTritiumUpdatePriority:(long long)arg1;
- (void)invalidateSwitcherTemplate;
- (double)minimumIntervalBetweenTimelineEntries;
- (void)setTimelineEndDate:(NSDate *)arg1;

@end
