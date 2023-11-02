
@protocol IRSessionDelegate <NSObject>

@optional

- (void)session:(IRSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)session:(IRSession *)arg1 didUpdateContext:(NSDictionary *)arg2;
- (void)session:(IRSession *)arg1 suspendedWithReason:(long long)arg2;
- (void)session:(IRSession *)arg1 suspensionReasonEnded:(long long)arg2 isNoLongerSuspended:(bool)arg3;

@end
