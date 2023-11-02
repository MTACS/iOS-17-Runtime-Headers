
@interface HMDLogEventProcessMemoryEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing> {
    HMDEventCountersManager * _eventCountersManager;
}

@property (readonly) HMDEventCountersManager *eventCountersManager;
@property (readonly) unsigned long long storedAverageProcessMemoryKB;
@property (readonly) unsigned long long storedPeakProcessMemoryKB;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)_handleMemoryPressureNotificationLogEvent:(id)arg1;
- (void)_handleMemorySampleLogEvent:(id)arg1;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)eventCountersManager;
- (id)initWithEventCountersManager:(id)arg1;
- (void)populateAggregationAnalysisLogEvent:(id)arg1;
- (void)resetAggregationAnalysisContext;
- (unsigned long long)storedAverageProcessMemoryKB;
- (unsigned long long)storedPeakProcessMemoryKB;

@end
