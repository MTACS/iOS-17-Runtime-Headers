
@interface HMDLogEventAccessoryFirmwareUpdateEventAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing> {
    HMDEventCountersManager * _eventCountersManager;
}

@property (nonatomic, readonly) HMDEventCountersManager *eventCountersManager;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)eventCountersManager;
- (id)initWithEventCountersManager:(id)arg1;
- (void)populateAggregationAnalysisLogEvent:(id)arg1;
- (void)resetAggregationAnalysisContext;

@end
