
@protocol BLSHWatchdogDelegate <NSObject>

@required

- (<BLSHWatchdogAbortContext> *)abortContext;
- (NSString *)identifier;
- (<BLSHOSInterfaceProviding> *)osInterfaceProvider;

@optional

- (double)completionDelayForTesting;
- (void)setCompletionDelayForTesting:(double)arg1;

@end
