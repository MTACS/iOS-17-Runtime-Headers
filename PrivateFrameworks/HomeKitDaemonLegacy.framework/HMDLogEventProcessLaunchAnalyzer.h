
@interface HMDLogEventProcessLaunchAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing, HMFTimerDelegate> {
    unsigned long long  _accountResolvedMilliseconds;
    bool  _configurationLoaded;
    NSString * _dataSyncStateAsString;
    HMDEventCountersManager * _eventCountersManager;
    unsigned long long  _homeDataLoadedMilliseconds;
    HMDHomeManager * _homeManager;
    long long  _launchInfoSubmissionState;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    unsigned long long  _millisecondsSinceLaunchToDataSyncStateGood;
    unsigned long long  _numUncommittedAndPushedRecords;
    unsigned long long  _numUncommittedRecords;
    NSString * _processExitReason;
    NSString * _processExitType;
    NSDate * _processLastExitTime;
    bool  _processLaunchInfoEventSubmitted;
    NSDate * _processLaunchTime;
    double  _processRelaunchEventTimeIntervalThreshold;
    HMFTimer * _submitProcessLaunchInfoTimer;
    unsigned long long  _systemUptimeMillisecondsRecordedAtLaunch;
    double  _timeIntervalSincePreviousProcessLaunch;
    unsigned long long  _xpcMessageTransportReadyMilliseconds;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDEventCountersManager *eventCountersManager;
@property (readonly) unsigned long long hash;
@property HMDHomeManager *homeManager;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) double processRelaunchEventTimeIntervalThreshold;
@property (readonly) HMFTimer *submitProcessLaunchInfoTimer;
@property (readonly) Class superclass;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)eventCountersManager;
- (void)handleAccountResolvedEvent:(id)arg1;
- (void)handleArchiveReplayLogEvent:(id)arg1;
- (void)handleDataSyncStateUpdateLogEvent:(id)arg1;
- (void)handleExitContextForHomed:(id)arg1;
- (void)handleProcessLaunchLogEvent:(id)arg1;
- (void)handleXPCMessageTransportStartedEvent:(id)arg1;
- (void)homeKitConfigurationChangedWithHomeManager:(id)arg1;
- (id)homeManager;
- (id)initWithProcessLaunchInfoTimer:(id)arg1 eventCountersManager:(id)arg2 logEventSubmitter:(id)arg3;
- (id)logEventSubmitter;
- (void)populateAggregationAnalysisLogEvent:(id)arg1;
- (double)processRelaunchEventTimeIntervalThreshold;
- (void)resetAggregationAnalysisContext;
- (void)setHomeManager:(id)arg1;
- (void)submitMigrationLogEvent;
- (void)submitProcessLaunchEventWithCurrentAnalysis;
- (void)submitProcessLaunchInfoEventPendingAllConditions;
- (id)submitProcessLaunchInfoTimer;
- (void)timerDidFire:(id)arg1;
- (void)updateProcessLaunchInfoFromDisk;

@end
