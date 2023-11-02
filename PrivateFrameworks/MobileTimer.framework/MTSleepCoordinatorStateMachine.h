
@interface MTSleepCoordinatorStateMachine : MTStateMachine <MTSleepCoordinatorStateMachineEventHandler> {
    MTSleepCoordinatorStateMachineAsleepState * _asleepState;
    MTSleepCoordinatorStateMachineAwakeState * _awakeState;
    MTSleepCoordinatorStateMachineDisabledState * _disabledState;
}

@property (nonatomic, retain) MTSleepCoordinatorStateMachineAsleepState *asleepState;
@property (nonatomic, retain) MTSleepCoordinatorStateMachineAwakeState *awakeState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MTSleepCoordinatorStateMachineDisabledState *disabledState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isUserAsleep;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)asleepState;
- (id)awakeState;
- (id)currentDate;
- (id)disabledState;
- (id)initWithDelegate:(id)arg1 infoProvider:(id)arg2;
- (bool)isUserAsleep;
- (void)setAsleepState:(id)arg1;
- (void)setAwakeState:(id)arg1;
- (void)setDisabledState:(id)arg1;
- (id)sleepAlarm;
- (unsigned long long)sleepTimeOutMinutes;
- (void)stateMachine:(id)arg1 dismissWakeUpAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)stateMachine:(id)arg1 shouldScheduleAlarmTimeoutForSecondsFromNow:(double)arg2;
- (id)stateMachineLog;
- (void)stateMachineUserWentToBed:(id)arg1;
- (void)stateMachineUserWokeUp:(id)arg1;
- (void)updateState;
- (void)userBedTimeReached:(id)arg1;
- (void)userWakeTimeReached:(id)arg1;
- (void)userWakeUpAlarmFired;
- (void)userWentToBed;
- (void)userWokeUp;
- (void)wakeUpAlarmTimedOut;

@end
