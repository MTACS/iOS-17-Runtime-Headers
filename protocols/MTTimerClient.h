
@protocol MTTimerClient <NSObject>

@required

- (void)favoriteTimerDurationsUpdated:(NSArray *)arg1;
- (void)latestTimerDurationUpdated:(MTTimerDuration *)arg1;
- (void)nextTimerChanged:(MTTimer *)arg1;
- (void)recentTimerDurationsUpdated:(NSArray *)arg1;
- (void)timerDismissed:(MTTimer *)arg1;
- (void)timerFired:(MTTimer *)arg1;
- (void)timersAdded:(NSArray *)arg1;
- (void)timersRemoved:(NSArray *)arg1;
- (void)timersUpdated:(NSArray *)arg1;

@end
