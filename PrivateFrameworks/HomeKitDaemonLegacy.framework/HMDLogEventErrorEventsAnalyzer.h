
@interface HMDLogEventErrorEventsAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner> {
    HMDEventCountersManager * _eventCountersManager;
    <HMMLogEventSubmitting> * _logEventSubmitter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMDEventCountersManager *eventCountersManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;

+ (id)errorEventsRequestGroupKeys;
+ (id)eventCounterNameForError:(id)arg1;
+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)_handleAdditionalErrorsForAccessoryPairingLogEvent:(id)arg1 logEventUnderlyingErrorGroupName:(id)arg2;
- (void)_handleAdditionalErrorsForCloudShareTrustManagerFailureLogEvent:(id)arg1 logEventUnderlyingErrorGroupName:(id)arg2;
- (id)currentErrorEventsAnalyzedSummary;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)eventCounterRequestGroupNameForLogEvent:(id)arg1;
- (id)eventCountersManager;
- (id)initWithEventCountersManager:(id)arg1 logEventSubmitter:(id)arg2 dailyScheduler:(id)arg3;
- (id)logEventSubmitter;
- (void)resetEventCountersForAllErrorEventRequestGroups;
- (void)runDailyTask;
- (void)submitAllFormattedErrorAggregationLogEvents;
- (void)submitErrorAggregationLogEventsForErrorEventGroup:(id)arg1;

@end
