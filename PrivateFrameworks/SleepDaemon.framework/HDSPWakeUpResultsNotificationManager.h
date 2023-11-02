
@interface HDSPWakeUpResultsNotificationManager : NSObject <HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPNotificationObserver, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver, HDSPWakeUpResultsNotificationStateMachineDelegate, HDSPWakeUpResultsNotificationStateMachineInfoProvider> {
    HDSPEnvironment * _environment;
    HKSHGoalProgressEngine * _goalProgressEngine;
    <HKSPMutexProvider> * _mutexProvider;
    NAFuture * _queryResultFuture;
    <HDSPActivityScheduler> * _retryAttemptScheduler;
    <HDSPSleepEventDelegate> * _sleepEventDelegate;
    HDSPWakeUpResultsNotificationStateMachine * _stateMachine;
}

@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (nonatomic, readonly) HKSHGoalProgressEngine *goalProgressEngine;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isWakeUpResultsNotificationEnabled;
@property (nonatomic, readonly) <HKSPMutexProvider> *mutexProvider;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (nonatomic, readonly) NAFuture *queryResultFuture;
@property (nonatomic, readonly) <HDSPActivityScheduler> *retryAttemptScheduler;
@property (nonatomic) <HDSPSleepEventDelegate> *sleepEventDelegate;
@property (nonatomic, readonly) HDSPWakeUpResultsNotificationStateMachine *stateMachine;
@property (readonly) Class superclass;

+ (id)retryActivity;
+ (id)retryCriteria;

- (void).cxx_destruct;
- (id)_currentState;
- (bool)_isDelayingForTracking;
- (bool)_isWaitingForWakeUp;
- (void)_lock_startQuery;
- (id)_sleepScheduleModel;
- (double)_trackingDelayDuration;
- (void)_updateState;
- (void)_withLock:(id /* block */)arg1;
- (id)currentDate;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)eventIdentifiers;
- (void)executeQuery;
- (id)goalProgressEngine;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 retryAttemptScheduler:(id)arg2;
- (bool)isWakeUpResultsNotificationEnabled;
- (id)mutexProvider;
- (id)notificationAttemptWindowForWakeUpBeforeDate:(id)arg1;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (id)performImmediateQueryForNotification;
- (void)postResultsNotification;
- (id)providerIdentifier;
- (id)queryResultFuture;
- (id)retryAttemptScheduler;
- (void)scheduleRetryAttempt;
- (void)scheduleStateExpiration;
- (void)setSleepEventDelegate:(id)arg1;
- (void)significantTimeChangeDetected:(id)arg1;
- (id)sleepEventDelegate;
- (void)sleepEventIsDue:(id)arg1;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepScheduleModel:(id)arg2;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)startObservingProtectedHealthDataAvailability;
- (id)stateMachine;
- (void)stopObservingProtectedHealthDataAvailability;
- (void)unscheduleRetryAttempt;
- (void)unscheduleStateExpiration;
- (id)upcomingEventsDueAfterDate:(id)arg1;

@end
