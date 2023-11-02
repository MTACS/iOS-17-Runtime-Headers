
@interface MTSleepModeStateMachineUserRequestedOffState : MTSleepModeStateMachineOffState {
    NSDate * _keepOffUntilDate;
}

@property (nonatomic, retain) NSDate *keepOffUntilDate;

- (void).cxx_destruct;
- (void)didEnterWithPreviousState:(id)arg1;
- (id)initWithKeepOffUntilDate:(id)arg1 stateMachine:(id)arg2;
- (bool)isEqualToState:(id)arg1;
- (id)keepOffUntilDate;
- (void)setKeepOffUntilDate:(id)arg1;
- (void)updateState:(bool)arg1;

@end
