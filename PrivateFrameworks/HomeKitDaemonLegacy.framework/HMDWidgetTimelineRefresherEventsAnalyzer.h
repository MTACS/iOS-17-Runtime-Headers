
@interface HMDWidgetTimelineRefresherEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing, HMDLogEventDailyTaskRunner> {
    <HMMLogEventSubmitting> * _logEventSubmitter;
    NSDictionary * _widgetRefreshReasonCounterGroupByKind;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *widgetRefreshReasonCounterGroupByKind;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)initWithEventCountersManager:(id)arg1 logEventSubmitter:(id)arg2 dailyScheduler:(id)arg3;
- (id)logEventSubmitter;
- (void)populateAggregationAnalysisLogEvent:(id)arg1;
- (void)resetAggregationAnalysisContext;
- (void)runDailyTask;
- (id)widgetRefreshReasonCounterGroupByKind;

@end
