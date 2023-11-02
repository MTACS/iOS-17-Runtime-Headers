
@interface HMDLogEventUserActivityAnalyzer : HMDHouseholdActivityLogEventContributor <HMDAggregationAnalysisEventContributing> {
    HMDEventCounterGroup * _counterGroup;
    HMDTimeBasedFlagsManager * _flagsManager;
}

@property (nonatomic, readonly) HMDEventCounterGroup *counterGroup;
@property (nonatomic, readonly) HMDTimeBasedFlagsManager *flagsManager;

+ (id)logCategory;
+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)_handleAccessoryPairingLogEvent:(id)arg1;
- (void)_handleActionSetRunLogEvent:(id)arg1;
- (void)_handleAddActionSetLogEvent:(id)arg1;
- (void)_handleAddTriggerLogEvent:(id)arg1;
- (void)_handleCameraClipRequestLogEvent:(id)arg1;
- (void)_handleCameraStreamLogEvent:(id)arg1;
- (void)_handleReadWriteLogEvent:(id)arg1;
- (bool)_isTriggerSource:(unsigned long long)arg1;
- (bool)_isUserSource:(unsigned long long)arg1;
- (void)coalesceLogEvent:(id)arg1 fromSourceEvent:(id)arg2;
- (void)contributeLogEvent:(id)arg1 toCoreAnalyticsEvent:(id)arg2;
- (void)contributeLogEvent:(id)arg1 toSerializedMetric:(id)arg2;
- (id)counterGroup;
- (void)deserializeLogEvent:(id)arg1 fromSerializedMetric:(id)arg2;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (void)finishCoalescingLogEvent:(id)arg1;
- (id)flagsManager;
- (id)initWithEventCountersManager:(id)arg1 flagsManager:(id)arg2 dateProvider:(id)arg3;
- (void)markActiveForEventName:(id)arg1 logEvent:(id)arg2;
- (void)populateAggregationAnalysisLogEvent:(id)arg1;
- (void)populateLogEvent:(id)arg1 forHomeWithUUID:(id)arg2 associatedToDate:(id)arg3;
- (void)resetAggregationAnalysisContext;
- (void)updateLinkTypeActivityCountsForReadWriteLogEvent:(id)arg1;

@end
