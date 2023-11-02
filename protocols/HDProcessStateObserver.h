
@protocol HDProcessStateObserver <NSObject>

@optional

- (void)processDidEnterBackground:(NSString *)arg1;
- (void)processDidEnterForeground:(NSString *)arg1;
- (void)processResumed:(NSString *)arg1;
- (void)processSuspended:(NSString *)arg1;
- (void)processTerminated:(NSString *)arg1;
- (void)processWithBundleIdentifier:(NSString *)arg1 didTransitionFromState:(unsigned int)arg2 toState:(unsigned int)arg3;

@end
