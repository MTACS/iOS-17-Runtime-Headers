
@interface HMDLogEventReachabilityEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing> {
    HMDEventCountersManager * _eventCountersManager;
}

@property (nonatomic, readonly) HMDEventCountersManager *eventCountersManager;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)_handleCameraRecordingReachabilityLogEvent:(id)arg1;
- (void)_handleReachabiltiyAddRemoveEvent:(id)arg1;
- (void)_handleRemoteDeviceReachabilityChangedLogEvent:(id)arg1;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)eventCountersManager;
- (id)initWithEventCountersManager:(id)arg1;
- (void)populateAggregationAnalysisLogEvent:(id)arg1;
- (void)resetAggregationAnalysisContext;

@end
