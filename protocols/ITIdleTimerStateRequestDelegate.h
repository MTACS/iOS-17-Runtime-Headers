
@protocol ITIdleTimerStateRequestDelegate <NSObject>

@required

- (bool)handleIdleEvent:(unsigned long long)arg1 usingConfigurationWithIdentifier:(NSString *)arg2;
- (void)resendIdleTimerAssertions;

@end
