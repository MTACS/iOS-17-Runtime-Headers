
@protocol IRPolicyManagerContextObserver <NSObject>

@required

- (void)didReceiveMiloPredictionRealTime;
- (void)didUpdateContextWithReason:(NSString *)arg1;
- (IRServiceDO *)getService;

@end
