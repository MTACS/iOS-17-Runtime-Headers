
@interface MTSleepModeStateMachineState : MTStateMachineState <MTSleepModeStateMachineEventHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)determineNextState:(bool)arg1;
- (id)nextSleepModeEndDate;
- (id)nextSleepModeEndDateAfterDate:(id)arg1;
- (id)nextSleepModeStartDate;
- (id)nextSleepModeStartDateAfterDate:(id)arg1;
- (void)sleepModeEnabled:(bool)arg1 userRequested:(bool)arg2 date:(id)arg3;
- (void)updateModeKeepOffUntilDateIfNecessary;
- (void)updateState:(bool)arg1;
- (void)userWokeUp;

@end
