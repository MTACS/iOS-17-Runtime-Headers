
@protocol PKPaymentAuthorizationStateMachineDelegate <NSObject>

@optional

- (bool)paymentAuthorizationStateMachine:(PKPaymentAuthorizationStateMachine *)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(PKPaymentAuthorizationStateParam *)arg4;

@end
