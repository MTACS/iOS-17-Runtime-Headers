
@protocol CAMSessionDelegate <NSObject>

@optional

- (void)handleSessionDidStartRunning;
- (void)handleSessionDidStopRunning;
- (void)handleSessionInterruptionEnded;
- (void)handleSessionInterruptionForReason:(long long)arg1;

@end
