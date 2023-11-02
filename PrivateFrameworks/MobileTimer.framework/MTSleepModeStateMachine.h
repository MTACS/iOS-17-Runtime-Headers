
@interface MTSleepModeStateMachine : MTStateMachine <MTSleepModeStateMachineEventHandler> {
    MTSleepModeStateMachineInitialState * _initialState;
    MTSleepModeStateMachineOffState * _offState;
    MTSleepModeStateMachineWaitingState * _waitingState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MTSleepModeStateMachineInitialState *initialState;
@property (nonatomic, readonly) MTSleepModeStateMachineOffState *offState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MTSleepModeStateMachineWaitingState *waitingState;

- (void).cxx_destruct;
- (id)currentDate;
- (id)initWithDelegate:(id)arg1 infoProvider:(id)arg2;
- (id)initialState;
- (bool)isSleepModeEnabled:(bool*)arg1;
- (bool)isUserAsleep;
- (id)keepOffUntilDate;
- (id)offState;
- (id)onStateWithSleepModeEndDate:(id)arg1;
- (id)sleepAlarm;
- (void)sleepModeEnabled:(bool)arg1 userRequested:(bool)arg2 date:(id)arg3;
- (bool)stateMachine:(id)arg1 disengageSleepModeUserRequested:(bool)arg2;
- (bool)stateMachine:(id)arg1 engageSleepModeUntilDate:(id)arg2 userEngaged:(bool)arg3;
- (void)stateMachine:(id)arg1 keepSleepModeOffUntilDate:(id)arg2;
- (void)stateMachine:(id)arg1 scheduleUpdateForSecondsFromNow:(double)arg2;
- (void)stateMachineClearKeepSleepModeOff:(id)arg1;
- (id)stateMachineLog;
- (void)updateState:(bool)arg1;
- (id)userRequestedOffStateWithKeepOffUntilDate:(id)arg1;
- (void)userWokeUp;
- (id)waitingState;

@end
