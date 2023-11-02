
@interface HDSPSleepWidgetManager : NSObject <HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPSleepWidgetStateMachineDelegate, HDSPSleepWidgetStateMachineInfoProvider, HDSPTimeChangeObserver> {
    HDSPEnvironment * _environment;
    bool  _isOverridingWidgetState;
    <HKSPMutexProvider> * _mutexProvider;
    long long  _overrideState;
    <HDSPWidgetRelevanceDonor> * _relevanceDonor;
    HKSPThrottler * _reloadThrottler;
    <HDSPSleepEventDelegate> * _sleepEventDelegate;
    HDSPSleepWidgetStateMachine * _stateMachine;
    <HDSPWidgetReloader> * _widgetReloader;
}

@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic, readonly) long long currentSleepWidgetState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inUnscheduledSleepMode;
@property (nonatomic, readonly) bool isOnboarded;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (nonatomic) <HDSPSleepEventDelegate> *sleepEventDelegate;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (nonatomic, readonly) unsigned long long sleepScheduleState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_lock_currentSleepWidgetState;
- (void)_withLock:(id /* block */)arg1;
- (id)callbackScheduler;
- (void)clearWidgetOverrideState;
- (id)currentDate;
- (long long)currentSleepWidgetState;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)eventIdentifiers;
- (bool)inUnscheduledSleepMode;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 widgetReloader:(id)arg2 reloadThrottler:(id)arg3 relevanceDonor:(id)arg4;
- (bool)isOnboarded;
- (void)overrideWidgetState:(long long)arg1;
- (id)providerIdentifier;
- (void)scheduleStateExpiration;
- (void)setSleepEventDelegate:(id)arg1;
- (void)significantTimeChangeDetected:(id)arg1;
- (id)sleepEventDelegate;
- (void)sleepEventIsDue:(id)arg1;
- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (id)sleepScheduleModel;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepScheduleModel:(id)arg2;
- (unsigned long long)sleepScheduleState;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)sleepWidgetShouldReload;
- (void)sleepWidgetStateDidChange:(long long)arg1 previousState:(long long)arg2;
- (void)timeZoneChangeDetected:(id)arg1;
- (void)unscheduleStateExpiration;
- (id)upcomingEventsDueAfterDate:(id)arg1;
- (void)updateState;

@end
