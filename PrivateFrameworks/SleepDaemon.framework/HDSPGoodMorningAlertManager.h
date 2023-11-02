
@interface HDSPGoodMorningAlertManager : NSObject <HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPGoodMorningAlertStateMachineDelegate, HDSPGoodMorningAlertStateMachineInfoProvider, HDSPSleepActionObserver, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver> {
    HDSPEnvironment * _environment;
    HKSPObserverSet * _goodMorningAlertObservers;
    <HKSPMutexProvider> * _mutexProvider;
    <HDSPSleepEventDelegate> * _sleepEventDelegate;
    HDSPGoodMorningAlertStateMachine * _stateMachine;
}

@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (nonatomic, readonly) bool goodMorningAlertEnabled;
@property (nonatomic, readonly) HKSPObserverSet *goodMorningAlertObservers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAppleWatch;
@property (nonatomic, readonly) bool isOnCharger;
@property (nonatomic, readonly) <HKSPMutexProvider> *mutexProvider;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (nonatomic) <HDSPSleepEventDelegate> *sleepEventDelegate;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (nonatomic, readonly) unsigned long long sleepScheduleState;
@property (nonatomic, readonly) HDSPGoodMorningAlertStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentState;
- (void)_withLock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (id)currentDate;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (void)dismissAlertForGoodMorning;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)eventIdentifiers;
- (bool)goodMorningAlertEnabled;
- (id)goodMorningAlertObservers;
- (void)goodMorningWasDismissed;
- (id)initWithEnvironment:(id)arg1;
- (bool)isAppleWatch;
- (bool)isOnCharger;
- (id)mutexProvider;
- (void)presentAlertForGoodMorning;
- (id)providerIdentifier;
- (void)removeObserver:(id)arg1;
- (void)scheduleStateExpiration;
- (void)setSleepEventDelegate:(id)arg1;
- (void)significantTimeChangeDetected:(id)arg1;
- (id)sleepEventDelegate;
- (void)sleepEventIsDue:(id)arg1;
- (id)sleepScheduleModel;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepScheduleModel:(id)arg2;
- (unsigned long long)sleepScheduleState;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (id)stateMachine;
- (void)unscheduleStateExpiration;
- (id)upcomingEventsDueAfterDate:(id)arg1;
- (void)updateState;

@end
