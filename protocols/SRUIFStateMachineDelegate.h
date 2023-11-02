
@protocol SRUIFStateMachineDelegate <NSObject>

@required

- (void)stateMachine:(SRUIFStateMachine *)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3;

@optional

- (NSString *)stateMachine:(SRUIFStateMachine *)arg1 descriptionForEvent:(long long)arg2;
- (void)stateMachine:(SRUIFStateMachine *)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3 eventTimeStamp:(double)arg4;

@end
