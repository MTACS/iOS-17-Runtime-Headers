
@protocol MTClock

@required

- (long long)runMode;
- (void)start;
- (void)stop;
- (void)updateTime;

@optional

- (double)coarseUpdateInterval;
- (void)updateFlutter;
- (double)updateInterval;
- (void)updateTimeContinuously:(long long)arg1;

@end
