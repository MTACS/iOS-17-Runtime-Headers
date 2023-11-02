
@interface MTSleepModeMonitor : NSObject <DNDModeAssertionUpdateListener, MTAgentDiagnosticDelegate, MTSleepModeStateMachineDelegate, MTSleepModeStateMachineInfoProvider, MTSleepObserver, MTTimeObserver> {
    <MTAlarmStorage> * _alarmStorage;
    DNDModeAssertionService * _assertionService;
    id /* block */  _currentDateProvider;
    <NAScheduler> * _serializer;
    MTSleepCoordinator * _sleepCoordinator;
    MTSleepModeStateMachine * _stateMachine;
}

@property (nonatomic, retain) <MTAlarmStorage> *alarmStorage;
@property (nonatomic, retain) DNDModeAssertionService *assertionService;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic, copy) id /* block */ currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isUserAsleep;
@property (nonatomic, readonly) NSDate *keepOffUntilDate;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, readonly) MTAlarm *sleepAlarm;
@property (nonatomic) MTSleepCoordinator *sleepCoordinator;
@property (nonatomic, retain) MTSleepModeStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alarmStorage;
- (id)assertionService;
- (id)currentDate;
- (id /* block */)currentDateProvider;
- (void)dealloc;
- (id)gatherDiagnostics;
- (id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2;
- (id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2 currentDateProvider:(id /* block */)arg3;
- (bool)isEnabled;
- (bool)isSleepModeEnabled:(bool*)arg1;
- (bool)isSleepModeEnabled:(bool*)arg1 error:(id*)arg2;
- (bool)isUserAsleep;
- (id)keepOffUntilDate;
- (void)modeAssertionService:(id)arg1 didReceiveModeAssertionInvalidation:(id)arg2;
- (void)printDiagnostics;
- (id)serializer;
- (void)setAlarmStorage:(id)arg1;
- (void)setAssertionService:(id)arg1;
- (void)setCurrentDateProvider:(id /* block */)arg1;
- (void)setSerializer:(id)arg1;
- (void)setSleepCoordinator:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (id)sleepAlarm;
- (id)sleepCoordinator;
- (void)sleepCoordinator:(id)arg1 bedtimeReminderDidFire:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 bedtimeWasReached:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 sleepAlarmDidChange:(id)arg2;
- (void)sleepCoordinator:(id)arg1 userWentToBed:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 userWokeUp:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 wakeUpAlarmDidFire:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 wakeUpAlarmWasSnoozed:(id)arg2 sleepAlarm:(id)arg3;
- (bool)sleepMode:(id*)arg1;
- (unsigned long long)sleepModeTimeoutMinutes;
- (id)stateMachine;
- (bool)stateMachine:(id)arg1 disengageSleepModeUserRequested:(bool)arg2;
- (bool)stateMachine:(id)arg1 engageSleepModeUntilDate:(id)arg2 userEngaged:(bool)arg3;
- (void)stateMachine:(id)arg1 keepSleepModeOffUntilDate:(id)arg2;
- (void)stateMachine:(id)arg1 scheduleUpdateForSecondsFromNow:(double)arg2;
- (void)stateMachineClearKeepSleepModeOff:(id)arg1;
- (void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(id /* block */)arg2;
- (void)updateMonitorState;
- (void)userDisengagedSleepMode;
- (void)userDisengagedSleepModeOnDate:(id)arg1;

@end
