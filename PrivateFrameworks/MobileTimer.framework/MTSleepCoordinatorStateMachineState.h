
@interface MTSleepCoordinatorStateMachineState : MTStateMachineState <MTSleepCoordinatorStateMachineEventHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)determineNextStateForSleepAlarm:(id)arg1;
- (void)updateState;
- (void)updateStateForSleepAlarm:(id)arg1;
- (void)userBedTimeReached:(id)arg1;
- (void)userWakeTimeReached:(id)arg1;
- (void)userWakeUpAlarmFired;
- (void)userWentToBed;
- (void)userWokeUp;
- (void)wakeUpAlarmTimedOut;

@end
