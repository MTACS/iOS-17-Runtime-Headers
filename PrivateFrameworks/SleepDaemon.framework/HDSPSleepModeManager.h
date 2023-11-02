
@interface HDSPSleepModeManager : NSObject <HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver, HKSPSleepFocusModeBridgeDelegate> {
    HDSPEnvironment * _environment;
    <HKSPMutexProvider> * _mutexProvider;
    <HDSPSleepFocusModeBridge> * _sleepFocusModeBridge;
    HKSPObserverSet * _sleepModeObservers;
    <HDSPSleepProactiveBridge> * _sleepProactiveBridge;
    HDSPSleepModeStateMachine * _stateMachine;
}

@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (nonatomic, readonly) bool hasSleepFocusMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAppleWatch;
@property (nonatomic, readonly) <HKSPMutexProvider> *mutexProvider;
@property (nonatomic, readonly) bool sleepFeaturesEnabled;
@property (nonatomic, readonly) <HDSPSleepFocusModeBridge> *sleepFocusModeBridge;
@property (nonatomic) long long sleepMode;
@property (nonatomic, readonly) HKSPObserverSet *sleepModeObservers;
@property (nonatomic, readonly) <HDSPSleepProactiveBridge> *sleepProactiveBridge;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (nonatomic, readonly) unsigned long long sleepScheduleState;
@property (nonatomic, readonly) HDSPSleepModeStateMachine *stateMachine;
@property (readonly) Class superclass;

+ (unsigned long long)_sleepModeChangeReasonForBiomeReason:(unsigned long long)arg1 source:(long long)arg2;

- (void).cxx_destruct;
- (void)_automationTurnedOffSleepModeWithReason:(unsigned long long)arg1;
- (void)_automationTurnedOnSleepModeWithReason:(unsigned long long)arg1;
- (void)_createFocusModeIfNeeded;
- (void)_ensureFocusModeCreatedForSleepMode:(long long)arg1 reason:(unsigned long long)arg2;
- (void)_handleFocusModeEvent:(id)arg1;
- (bool)_isScheduledSleepModeEnabled;
- (bool)_isSleepModeDuringWindDownEnabled;
- (void)_powerLogSleepMode:(long long)arg1 sleepScreenEnabled:(bool)arg2;
- (bool)_shouldHandleBiomeEvent:(id)arg1;
- (void)_sleepModeTurnedOffForUnknownReason;
- (void)_sleepModeTurnedOnForUnknownReason;
- (void)_userTurnedOffSleepModeWithReason:(unsigned long long)arg1;
- (void)_userTurnedOnSleepModeWithReason:(unsigned long long)arg1;
- (void)_withLock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (id)computeUserVisibleEndDate;
- (bool)createFocusModeWithError:(id*)arg1;
- (void)createHomeScreenPageWithCompletion:(id /* block */)arg1;
- (id)currentDate;
- (id)currentState;
- (bool)deleteFocusModeWithError:(id*)arg1;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (bool)hasSleepFocusMode;
- (bool)inUnscheduledSleepMode;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 sleepFocusModeBridge:(id)arg2 sleepProactiveBridge:(id)arg3;
- (bool)isAppleWatch;
- (bool)isInDemoMode;
- (id)mutexProvider;
- (void)notifyObserversForSleepModeChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (void)removeObserver:(id)arg1;
- (void)scheduledEventIsDue;
- (void)setSleepMode:(long long)arg1;
- (void)setSleepMode:(long long)arg1 reason:(unsigned long long)arg2;
- (bool)shouldGoIntoSleepModeDuringState:(unsigned long long)arg1;
- (void)significantTimeChangeDetected:(id)arg1;
- (bool)sleepFeaturesEnabled;
- (id)sleepFocusModeBridge;
- (void)sleepFocusModeBridge:(id)arg1 didUpdateSleepFocusConfiguration:(id)arg2;
- (long long)sleepMode;
- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (id)sleepModeObservers;
- (id)sleepProactiveBridge;
- (id)sleepScheduleModel;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepScheduleModel:(id)arg2;
- (unsigned long long)sleepScheduleState;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (bool)sleepScreenEnabled;
- (id)stateMachine;
- (void)updateState;

@end
