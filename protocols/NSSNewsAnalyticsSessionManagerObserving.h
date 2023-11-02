
@protocol NSSNewsAnalyticsSessionManagerObserving <NSObject>

@required

- (NSString *)sceneSessionIdentifier;
- (void)sessionDidStartWithSessionID:(NSString *)arg1 sourceApplication:(NSString *)arg2 url:(NSURL *)arg3;
- (void)sessionWillEndWithEndReason:(NSNumber *)arg1;
- (void)sessionWillResignActive;

@end
