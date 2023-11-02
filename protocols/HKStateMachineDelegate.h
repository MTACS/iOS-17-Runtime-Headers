
@protocol HKStateMachineDelegate <NSObject>

@optional

- (void)stateMachine:(HKStateMachine *)arg1 didEnterState:(HKStateMachineState *)arg2 date:(NSDate *)arg3 error:(NSError *)arg4;
- (void)stateMachine:(HKStateMachine *)arg1 didIgnoreEvent:(long long)arg2 state:(HKStateMachineState *)arg3;
- (void)stateMachine:(HKStateMachine *)arg1 didLeaveState:(HKStateMachineState *)arg2 date:(NSDate *)arg3 error:(NSError *)arg4;
- (void)stateMachine:(HKStateMachine *)arg1 didTransition:(HKStateMachineTransition *)arg2 fromState:(HKStateMachineState *)arg3 toState:(HKStateMachineState *)arg4 date:(NSDate *)arg5 error:(NSError *)arg6;
- (void)stateMachine:(HKStateMachine *)arg1 persistTransition:(HKStateMachineTransition *)arg2;
- (void)stateMachine:(HKStateMachine *)arg1 willEnterState:(HKStateMachineState *)arg2 date:(NSDate *)arg3 error:(NSError *)arg4;
- (void)stateMachine:(HKStateMachine *)arg1 willLeaveState:(HKStateMachineState *)arg2 date:(NSDate *)arg3 error:(NSError *)arg4;

@end
