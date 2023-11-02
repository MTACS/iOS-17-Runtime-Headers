
@protocol MTSleepModeStateMachineEventHandler <MTStateMachineEventHandler>

@required

- (void)sleepModeEnabled:(bool)arg1 userRequested:(bool)arg2 date:(NSDate *)arg3;
- (void)updateState:(bool)arg1;
- (void)userWokeUp;

@end
