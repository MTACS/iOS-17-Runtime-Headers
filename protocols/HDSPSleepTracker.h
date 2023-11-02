
@protocol HDSPSleepTracker <HDSPEnvironmentAware>

@required

- (<HDSPSleepTrackerDelegate> *)delegate;
- (void)setDelegate:(id <HDSPSleepTrackerDelegate>)arg1;

@optional

- (void)previousSessionFinished;
- (NAFuture *)processedSessionForSession:(HDSPSleepSession *)arg1;

@end
