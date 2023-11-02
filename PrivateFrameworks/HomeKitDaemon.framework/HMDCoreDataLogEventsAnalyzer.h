
@interface HMDCoreDataLogEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing, HMDLogEventDailyTaskRunner> {
    HMDEventCounterGroup * _aggregationEventGroup;
    HMDEventCounterGroup * _cloudStoreReasonsEventGroup;
    HMDEventCountersManager * _countersManager;
    <HMMLogEventSubmitting> * _logEventSubmitter;
}

@property (nonatomic, readonly) HMDEventCounterGroup *aggregationEventGroup;
@property (nonatomic, readonly) HMDEventCounterGroup *cloudStoreReasonsEventGroup;
@property (nonatomic, readonly) HMDEventCountersManager *countersManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (id)aggregationEventGroup;
- (id)cloudStoreReasonsEventGroup;
- (id)countersManager;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (void)handleCloudKitOperationEvent:(id)arg1;
- (void)handleCloudStoreTransactionEvent:(id)arg1;
- (void)handleWorkingStoreTransactionEvent:(id)arg1;
- (id)initWithEventCountersManager:(id)arg1 logEventSubmitter:(id)arg2 dailyScheduler:(id)arg3;
- (id)logEventSubmitter;
- (void)populateAggregationAnalysisLogEvent:(id)arg1;
- (void)resetAggregationAnalysisContext;
- (void)runDailyTask;

@end
