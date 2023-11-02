
@protocol _SRSTCallClientDelegate

@required

- (void)stateMachineWithClient:(_SRSTCallClient *)arg1 didTransitionToState:(_SRSTCallState *)arg2;

@optional

- (void)stateMachineWithClient:(_SRSTCallClient *)arg1 didReceiveEvent:(long long)arg2;

@end
