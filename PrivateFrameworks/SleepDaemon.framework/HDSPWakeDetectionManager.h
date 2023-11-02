
@interface HDSPWakeDetectionManager : NSObject <HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver, HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPWakeDetectorDelegate> {
    HDSPEnvironment * _environment;
    <HKSPMutexProvider> * _mutexProvider;
    <HDSPSleepEventDelegate> * _sleepEventDelegate;
    HDSPWakeDetectionStateMachine * _stateMachine;
    NSArray * _wakeDetectors;
}

@property (nonatomic, readonly) unsigned long long activeTypes;
@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDetecting;
@property (nonatomic, readonly) bool isWatch;
@property (nonatomic, readonly) <HKSPMutexProvider> *mutexProvider;
@property (nonatomic, readonly) NSDate *nextWakeUp;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (nonatomic, readonly) HKSPSleepScheduleOccurrence *relevantOccurrence;
@property (nonatomic) <HDSPSleepEventDelegate> *sleepEventDelegate;
@property (nonatomic, readonly) bool sleepModeIsOff;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (nonatomic, readonly) unsigned long long sleepScheduleState;
@property (nonatomic, readonly) HDSPWakeDetectionStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *upcomingStartDetection;
@property (nonatomic, readonly) NSArray *wakeDetectors;

+ (id)platformSpecificProviders:(id)arg1;

- (void).cxx_destruct;
- (id)_currentState;
- (id)_detectionWindowForType:(unsigned long long)arg1 wakeUpDate:(id)arg2 bedtimeDate:(id)arg3;
- (void)_startWakeDetection;
- (void)_withLock:(id /* block */)arg1;
- (unsigned long long)activeTypes;
- (id)currentDate;
- (id)detectionWindowForType:(unsigned long long)arg1;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (void)earlyWakeUpWasNotifiedRemotely;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)eventIdentifiers;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 wakeDetectorProviders:(id)arg2;
- (bool)isDetecting;
- (bool)isWatch;
- (id)mutexProvider;
- (id)nextWakeUp;
- (void)postWakeDetectionNotification:(unsigned long long)arg1;
- (id)providerIdentifier;
- (id)relevantOccurrence;
- (void)scheduleStateExpiration;
- (void)setSleepEventDelegate:(id)arg1;
- (void)significantTimeChangeDetected:(id)arg1;
- (id)sleepEventDelegate;
- (void)sleepEventIsDue:(id)arg1;
- (bool)sleepFeaturesEnabled;
- (bool)sleepModeIsOff;
- (id)sleepScheduleModel;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepScheduleModel:(id)arg2;
- (unsigned long long)sleepScheduleState;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)startWakeDetection:(unsigned long long)arg1;
- (id)stateMachine;
- (void)stopWakeDetection;
- (void)unscheduleStateExpiration;
- (id)upcomingEventsDueAfterDate:(id)arg1;
- (id)upcomingStartDetection;
- (void)updateState;
- (void)wakeDetector:(id)arg1 didDetectWakeUpEventOnDate:(id)arg2;
- (id)wakeDetectors;

@end
