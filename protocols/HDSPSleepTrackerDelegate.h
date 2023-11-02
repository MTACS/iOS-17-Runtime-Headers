
@protocol HDSPSleepTrackerDelegate <NSObject>

@required

- (void)sleepTracker:(id <HDSPSleepTracker>)arg1 didEndSession:(HDSPSleepSession *)arg2 reason:(unsigned long long)arg3;
- (void)sleepTrackerDidStartSession:(id <HDSPSleepTracker>)arg1;

@end
