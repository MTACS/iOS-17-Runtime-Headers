
@interface HMDProcessLaunchInfoLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _dataSyncState;
    bool  _eventSubmittedOnTimeOut;
    unsigned long long  _homeDataLoadedMilliseconds;
    bool  _isConfigurationLoaded;
    bool  _isTTSUInProgress;
    unsigned long long  _millisecondsSinceLaunchToDataSyncStateGood;
    unsigned long long  _millisecondsToAccountResolved;
    long long  _numUncommittedAndPushedRecords;
    long long  _numUncommittedRecords;
    unsigned long long  _processCrashCount;
    NSString * _processExitReason;
    NSString * _processExitType;
    unsigned long long  _processJetsamCount;
    unsigned long long  _processLaunchCount;
    long long  _submissionState;
    unsigned long long  _systemUptimeMillisecondsAtLaunch;
    double  _timeIntervalSincePreviousProcessLaunch;
    unsigned long long  _xpcMessageTransportReadyMilliseconds;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (nonatomic, readonly, copy) NSString *dataSyncState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool eventSubmittedOnTimeOut;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long homeDataLoadedMilliseconds;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) bool isConfigurationLoaded;
@property (readonly) bool isTTSUInProgress;
@property (readonly) unsigned long long millisecondsSinceLaunchToDataSyncStateGood;
@property (readonly) unsigned long long millisecondsToAccountResolved;
@property (readonly) long long numUncommittedAndPushedRecords;
@property (readonly) long long numUncommittedRecords;
@property (readonly) unsigned long long processCrashCount;
@property (nonatomic, readonly) NSString *processExitReason;
@property (nonatomic, readonly) NSString *processExitType;
@property (readonly) unsigned long long processJetsamCount;
@property (readonly) unsigned long long processLaunchCount;
@property (readonly) long long submissionState;
@property (readonly) Class superclass;
@property (readonly) unsigned long long systemUptimeMillisecondsAtLaunch;
@property (readonly) double timeIntervalSincePreviousProcessLaunch;
@property (readonly) unsigned long long xpcMessageTransportReadyMilliseconds;

+ (bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)dataSyncState;
- (bool)eventSubmittedOnTimeOut;
- (unsigned long long)homeDataLoadedMilliseconds;
- (id)initWithSubmissionState:(long long)arg1 dataSyncState:(id)arg2 timeIntervalSincePreviousProcessLaunch:(double)arg3 millisecondsToHomeDataLoad:(unsigned long long)arg4 millisecondsToXPCMessageTransportReady:(unsigned long long)arg5 millisecondsSinceLaunchToDataSyncStateGood:(unsigned long long)arg6 millisecondsToAccountResolved:(unsigned long long)arg7 numUncommittedRecords:(long long)arg8 numUncommittedAndPushedRecords:(long long)arg9 processExitType:(id)arg10 processExitReason:(id)arg11 processLaunchCount:(unsigned long long)arg12 processJetsamCount:(unsigned long long)arg13 processCrashCount:(unsigned long long)arg14 isConfigurationLoaded:(bool)arg15 isTTSUInProgress:(bool)arg16;
- (bool)isConfigurationLoaded;
- (bool)isTTSUInProgress;
- (unsigned long long)millisecondsSinceLaunchToDataSyncStateGood;
- (unsigned long long)millisecondsToAccountResolved;
- (long long)numUncommittedAndPushedRecords;
- (long long)numUncommittedRecords;
- (unsigned long long)processCrashCount;
- (id)processExitReason;
- (id)processExitType;
- (unsigned long long)processJetsamCount;
- (unsigned long long)processLaunchCount;
- (long long)submissionState;
- (unsigned long long)systemUptimeMillisecondsAtLaunch;
- (double)timeIntervalSincePreviousProcessLaunch;
- (unsigned long long)xpcMessageTransportReadyMilliseconds;

@end
