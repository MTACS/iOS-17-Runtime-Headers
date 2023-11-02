
@protocol HKSPSleepFocusModeBridge <NSObject>

@required

- (<HKSPSleepFocusModeBridgeDelegate> *)delegate;
- (bool)hasSleepFocusMode:(id*)arg1;
- (void)invalidate;
- (void)setDelegate:(id <HKSPSleepFocusModeBridgeDelegate>)arg1;
- (HKSPSleepFocusConfiguration *)sleepFocusConfiguration:(id*)arg1;

@end
