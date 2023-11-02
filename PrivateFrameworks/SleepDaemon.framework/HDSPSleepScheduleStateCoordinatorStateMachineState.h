
@interface HDSPSleepScheduleStateCoordinatorStateMachineState : HKSPPersistentStateMachineState <HDSPSleepScheduleStateCoordinatorStateMachineEventHandler> {
    unsigned long long  _scheduleState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long scheduleState;
@property (nonatomic, readonly) HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine;
@property (readonly) Class superclass;

- (id)_determineNextStateFromTimeline;
- (void)_forceUpdateStateWithChangeReason:(unsigned long long)arg1;
- (id)_timelineForDate:(id)arg1;
- (void)bedtimeReached;
- (void)didEnter;
- (bool)isAlarmEnabled;
- (bool)isSleepScheduleDisabled;
- (void)scheduleModelChanged:(id)arg1;
- (unsigned long long)scheduleState;
- (void)significantScheduleChangeOccurred:(unsigned long long)arg1;
- (void)significantTimeChange;
- (void)stateDidExpire;
- (void)timeZoneChange;
- (void)updateState;
- (void)updateStateForcibly:(bool)arg1;
- (void)wakeTimeReached;
- (void)wakeUpConfirmed;
- (void)windDownReached;

@end
