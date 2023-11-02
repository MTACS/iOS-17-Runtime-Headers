
@protocol CALNTimeToLeaveRefreshMonitor

@required

- (<CALNTimeToLeaveRefreshMonitorDelegate> *)delegate;
- (void)removeRefreshTimerForEventExternalURL:(NSString *)arg1;
- (void)setDelegate:(id <CALNTimeToLeaveRefreshMonitorDelegate>)arg1;
- (void)setUpRefreshTimerWithTriggerDate:(NSDate *)arg1 eventExternalURL:(NSString *)arg2;

@end
