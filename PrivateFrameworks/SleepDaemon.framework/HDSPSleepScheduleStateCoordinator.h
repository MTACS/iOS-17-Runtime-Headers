
@interface HDSPSleepScheduleStateCoordinator : NSObject <HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepActionObserver, HDSPSleepEventHandler, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, HDSPSource, HDSPTimeChangeObserver> {
    HDSPEnvironment * _environment;
    <HKSPMutexProvider> * _mutexProvider;
    HKSPObserverSet * _observers;
    HDSPSleepScheduleStateCoordinatorStateMachine * _stateMachine;
}

@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dontNotify;
@property (nonatomic, readonly) bool dontSync;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAppleWatch;
@property (nonatomic, readonly) <HKSPMutexProvider> *mutexProvider;
@property (nonatomic, readonly) HKSPObserverSet *observers;
@property (nonatomic, readonly) HKSPSleepScheduleOccurrence *previousOccurrence;
@property (nonatomic, readonly) bool sleepFeaturesEnabled;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateEventRecordForSleepScheduleState:(unsigned long long)arg1 context:(id)arg2 notifyBlock:(id /* block */)arg3;
- (bool)_updateEventRecordHelper:(id)arg1 sleepScheduleState:(unsigned long long)arg2 context:(id)arg3;
- (void)_updateSleepScheduleState;
- (void)_withLock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (id)currentDate;
- (unsigned long long)currentSleepScheduleState;
- (id)currentState;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)eventIdentifiers;
- (id)initWithEnvironment:(id)arg1;
- (bool)isAppleWatch;
- (id)mutexProvider;
- (id)observers;
- (id)previousOccurrence;
- (void)removeObserver:(id)arg1;
- (void)significantTimeChangeDetected:(id)arg1;
- (void)sleepEventIsDue:(id)arg1;
- (bool)sleepFeaturesEnabled;
- (id)sleepScheduleModel;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepScheduleModel:(id)arg2;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 context:(id)arg3;
- (void)snoozeFireDateShouldBeReset;
- (id)sourceIdentifier;
- (id)stateMachine;
- (void)timeZoneChangeDetected:(id)arg1;
- (void)wakeNotificationWasConfirmed;
- (void)wakeUpAlarmWasDismissedFromSource:(unsigned long long)arg1;

@end
