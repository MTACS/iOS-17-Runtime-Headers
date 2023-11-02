
@interface HDSPChargingReminderManager : NSObject <HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineInfoProvider, HDSPDevicePowerObserver, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver> {
    HDSPEnvironment * _environment;
    <HDSPActivityScheduler> * _monitoringScheduler;
    <HKSPMutexProvider> * _mutexProvider;
    <HDSPSleepEventDelegate> * _sleepEventDelegate;
    HDSPChargingReminderStateMachine * _stateMachine;
}

@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCharging;
@property (nonatomic, readonly) <HDSPActivityScheduler> *monitoringScheduler;
@property (nonatomic, readonly) <HKSPMutexProvider> *mutexProvider;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (nonatomic) <HDSPSleepEventDelegate> *sleepEventDelegate;
@property (nonatomic, readonly) bool sleepFeaturesEnabled;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (nonatomic, readonly) unsigned long long sleepScheduleState;
@property (nonatomic, readonly) HDSPChargingReminderStateMachine *stateMachine;
@property (readonly) Class superclass;

+ (id)monitorActivity;
+ (id)monitorCriteria;

- (void).cxx_destruct;
- (id)_currentState;
- (void)_withLock:(id /* block */)arg1;
- (id)callbackScheduler;
- (void)checkBatteryLevel;
- (id)currentDate;
- (void)deviceChangedChargingState:(bool)arg1;
- (id)devicePowerMonitor;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)eventIdentifiers;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 monitoringScheduler:(id)arg2;
- (bool)isCharging;
- (id)monitoringScheduler;
- (id)monitoringWindowAfterDate:(id)arg1;
- (id)mutexProvider;
- (void)postChargingReminderNotification;
- (id)providerIdentifier;
- (void)scheduleStateExpiration;
- (void)setSleepEventDelegate:(id)arg1;
- (void)significantTimeChangeDetected:(id)arg1;
- (id)sleepEventDelegate;
- (void)sleepEventIsDue:(id)arg1;
- (bool)sleepFeaturesEnabled;
- (id)sleepScheduleModel;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepScheduleModel:(id)arg2;
- (unsigned long long)sleepScheduleState;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)startBatteryMonitoring;
- (id)stateMachine;
- (void)stopBatteryMonitoring;
- (void)unscheduleStateExpiration;
- (id)upcomingEventsDueAfterDate:(id)arg1;
- (void)updateState;

@end
