
@protocol MTDurationUpdateDelegate

@required

- (void)favoriteTimerDurationsDidUpdate:(NSArray *)arg1;
- (void)latestTimerDurationDidUpdate:(MTTimerDuration *)arg1;
- (void)recentTimerDurationsDidUpdate:(NSArray *)arg1;

@end
