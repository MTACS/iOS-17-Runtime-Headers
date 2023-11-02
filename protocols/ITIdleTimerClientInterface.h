
@protocol ITIdleTimerClientInterface <NSObject>

@required

- (bool)handleIdleEvent:(NSNumber *)arg1 usingConfigurationWithIdentifier:(NSString *)arg2;

@end
