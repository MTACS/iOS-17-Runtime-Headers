
@protocol SUICProgressStateMachineObserving <NSObject>

@required

- (void)progressStateMachine:(SUICProgressStateMachine *)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4;
- (void)progressStateMachine:(SUICProgressStateMachine *)arg1 ignoredEvent:(unsigned long long)arg2;

@end
