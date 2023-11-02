
@protocol VSStateMachineDelegate <NSObject>

@optional

- (void)stateMachine:(VSStateMachine *)arg1 transitionFromState:(NSString *)arg2;
- (void)stateMachine:(VSStateMachine *)arg1 transitionToState:(NSString *)arg2;

@end
