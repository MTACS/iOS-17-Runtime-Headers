
@protocol NFSessionCallbackInterface

@required

- (void)didStartSession:(NSError *)arg1;
- (void)handleSessionResumed;
- (void)handleSessionSuspended:(NSData *)arg1;

@end
