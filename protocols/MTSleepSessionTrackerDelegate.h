
@protocol MTSleepSessionTrackerDelegate <NSObject>

@required

- (void)sleepSessionTracker:(id <MTSleepSessionTracker>)arg1 sessionDidComplete:(id <MTSleepSession>)arg2;

@end
