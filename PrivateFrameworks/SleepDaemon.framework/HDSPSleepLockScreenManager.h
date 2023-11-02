
@interface HDSPSleepLockScreenManager : NSObject <HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPGoodMorningAlertObserver, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepLockScreenAssertionManagerDelegate, HDSPSleepLockScreenStateMachineDelegate, HDSPSleepLockScreenStateMachineInfoProvider, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HKSPSensitiveUIObserver> {
    <HDSPSleepLockScreenAssertionManager> * _assertionManager;
    long long  _currentLockScreenState;
    id /* block */  _didUpdateAlertAssertion;
    HDSPEnvironment * _environment;
    <HKSPMutexProvider> * _mutexProvider;
    long long  _overrideState;
    NSDictionary * _overrideUserInfo;
    <HDSPSleepEventDelegate> * _sleepEventDelegate;
    long long  _state;
    HDSPSleepLockScreenStateMachine * _stateMachine;
}

@property (nonatomic, readonly) <HDSPSleepLockScreenAssertionManager> *assertionManager;
@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic) long long currentLockScreenState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didUpdateAlertAssertion;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inUnscheduledSleepMode;
@property (nonatomic, readonly) bool isLockScreenActive;
@property (nonatomic, readonly) <HKSPMutexProvider> *mutexProvider;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (nonatomic) <HDSPSleepEventDelegate> *sleepEventDelegate;
@property (nonatomic, readonly) long long sleepMode;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (nonatomic, readonly) HDSPSleepLockScreenStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentState;
- (bool)_lock_overridingLockScreenState;
- (long long)_lock_resolvedLockScreenState;
- (bool)_lock_shouldShowLockScreenForState:(long long)arg1;
- (void)_lock_updateLockScreenAssertion;
- (void)_withLock:(id /* block */)arg1;
- (id)assertionManager;
- (id)currentDate;
- (long long)currentLockScreenState;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (id /* block */)didUpdateAlertAssertion;
- (void)dismissAlertForGoodMorning;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)eventIdentifiers;
- (bool)inUnscheduledSleepMode;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 assertionManager:(id)arg2;
- (bool)isLockScreenActive;
- (void)lockScreenDidConnect;
- (id)mutexProvider;
- (void)overrideLockScreenState:(long long)arg1 userInfo:(id)arg2;
- (void)presentAlertForGoodMorning;
- (id)providerIdentifier;
- (void)scheduleStateExpiration;
- (void)sensitiveUIStateChanged;
- (void)setCurrentLockScreenState:(long long)arg1;
- (void)setDidUpdateAlertAssertion:(id /* block */)arg1;
- (void)setSleepEventDelegate:(id)arg1;
- (void)significantTimeChangeDetected:(id)arg1;
- (id)sleepEventDelegate;
- (void)sleepEventIsDue:(id)arg1;
- (void)sleepLockScreenStateDidChange:(long long)arg1 previousState:(long long)arg2;
- (long long)sleepMode;
- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (id)sleepScheduleModel;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepSettings:(id)arg2;
- (id)stateMachine;
- (void)timeZoneChangeDetected:(id)arg1;
- (void)unscheduleStateExpiration;
- (id)upcomingEventsDueAfterDate:(id)arg1;

@end
