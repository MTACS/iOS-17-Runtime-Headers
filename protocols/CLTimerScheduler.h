
@protocol CLTimerScheduler

@required

- (void)reflectNextFireDelay:(double)arg1 fireInterval:(double)arg2;
- (void)setTimer:(CLTimer *)arg1;
- (CLTimer *)timer;

@end
