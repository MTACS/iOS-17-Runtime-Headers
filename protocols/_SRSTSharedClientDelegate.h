
@protocol _SRSTSharedClientDelegate

@required

- (void)stateMachineWithClient:(_SRSTSharedClient *)arg1 didTransitionToState:(_SRSTSharedState *)arg2;

@optional

- (void)stateMachineWithClient:(_SRSTSharedClient *)arg1 didReceiveEvent:(long long)arg2;

@end
