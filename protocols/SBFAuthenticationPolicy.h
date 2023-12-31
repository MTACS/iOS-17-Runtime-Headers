
@protocol SBFAuthenticationPolicy <NSObject>

@required

- (bool)allowAuthenticationRevocation;
- (bool)shouldClearBlockStateOnSync;
- (bool)usesSecureMode;
- (void)wipeDeviceWithReason:(NSString *)arg1;

@optional

- (void)cachePasscode:(NSString *)arg1;
- (void)clearPasscodeCache;
- (void)passcodeAuthenticationFailedWithError:(NSError *)arg1;

@end
