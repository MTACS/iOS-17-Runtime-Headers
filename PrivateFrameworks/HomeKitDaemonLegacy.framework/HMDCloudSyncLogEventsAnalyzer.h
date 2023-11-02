
@interface HMDCloudSyncLogEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing> {
    unsigned long long  _dataSyncState;
    <HMDMetricsDeviceStateProvider> * _deviceStateProvider;
    HMDEventCountersManager * _eventCountersManager;
    <HMMLogEventSubmitting> * _logEventSubmitter;
}

@property unsigned long long dataSyncState;
@property (nonatomic, readonly) <HMDMetricsDeviceStateProvider> *deviceStateProvider;
@property (nonatomic, retain) HMDEventCountersManager *eventCountersManager;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (id)cloudSyncAnalysisResult;
- (unsigned long long)dataSyncState;
- (id)deviceStateProvider;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)eventCountersManager;
- (void)handleDecryptionCompletedEvent:(id)arg1;
- (void)handleFetchLogEvent:(id)arg1;
- (void)handleIncomingCloudPushLogEvent:(id)arg1;
- (void)handleMaximumDelayLogEvent:(id)arg1;
- (void)handleRecordOperationLogEvent:(id)arg1;
- (void)handleUploadLogEvent:(id)arg1;
- (void)handleUploadReasonLogEvent:(id)arg1;
- (id)initWithEventCountersManager:(id)arg1 logEventSubmitter:(id)arg2 deviceStateProvider:(id)arg3;
- (id)logEventSubmitter;
- (void)populateAggregationAnalysisLogEvent:(id)arg1;
- (void)resetAggregationAnalysisContext;
- (void)resetDataSource;
- (void)setDataSyncState:(unsigned long long)arg1;
- (void)setEventCountersManager:(id)arg1;

@end
