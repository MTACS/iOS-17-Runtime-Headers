
@protocol _SRSTClientDelegate

@required

- (void)stateMachineWithClient:(_SRSTClient *)arg1 didTransitionToState:(_SRSTState *)arg2;

@optional

- (void)stateMachineWithClient:(_SRSTClient *)arg1 didReceiveEvent:(long long)arg2;

@end
