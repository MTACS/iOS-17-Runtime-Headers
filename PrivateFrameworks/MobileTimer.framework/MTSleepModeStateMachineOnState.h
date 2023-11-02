
@interface MTSleepModeStateMachineOnState : MTSleepModeStateMachineState {
    NSDate * _sleepModeEndDate;
}

@property (nonatomic, readonly) NSDate *sleepModeEndDate;

- (void).cxx_destruct;
- (void)didEnterWithPreviousState:(id)arg1;
- (id)initWithSleepModeEndDate:(id)arg1 stateMachine:(id)arg2;
- (bool)isEqualToState:(id)arg1;
- (id)sleepModeEndDate;

@end
