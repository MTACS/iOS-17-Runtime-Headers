
@protocol IRXPCSessionClient <NSObject>

@required

- (void)_didUpdateContext:(NSDictionary *)arg1;
- (void)_sessionDidFailWithError:(NSError *)arg1;
- (void)_sessionInterruptedWithReason:(long long)arg1 timestamp:(double)arg2;
- (void)_sessionInterruptionReasonEnded:(long long)arg1 timestamp:(double)arg2;

@end
