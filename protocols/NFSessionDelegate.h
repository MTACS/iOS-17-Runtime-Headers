
@protocol NFSessionDelegate <NSObject>

@optional

- (void)handleSessionReachedTimeLimit;
- (void)handleSessionResumed:(NFSession *)arg1;
- (void)handleSessionSuspended:(NFSession *)arg1 withToken:(NSData *)arg2;

@end
