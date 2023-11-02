
@interface _DASLogExtractor : NSObject {
    NSString * _category;
    NSDateFormatter * _dateFormatter;
    OSLogEventStream * _eventStream;
    OSLogEventStore * _logStore;
    NSString * _subsystem;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic, retain) OSLogEventStream *eventStream;
@property (nonatomic, retain) OSLogEventStore *logStore;
@property (nonatomic, retain) NSString *subsystem;

+ (id)extractorForArchive:(id)arg1;

- (void).cxx_destruct;
- (void)addConditionToHistory:(id)arg1 fromMessage:(id)arg2 atTimestamp:(id)arg3 compactRepresentation:(bool)arg4;
- (id)category;
- (id)copyActivitySummary:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 detail:(bool)arg4 error:(int*)arg5;
- (id)dateFormatter;
- (id)descriptionOfHigherThresholds:(id)arg1;
- (id)descriptionOfIncompatibilityDenials:(id)arg1;
- (id)descriptionOfPolicyToIntervalsMap:(id)arg1;
- (bool)didActivityFinish:(id)arg1 forActivity:(id)arg2;
- (bool)didActivityRun:(id)arg1 forActivity:(id)arg2;
- (id)eventStream;
- (id)getActivityStartBeforeDate:(id)arg1 forActivity:(id)arg2;
- (id)getDefaultFilterPredicate;
- (id)getIncompatibilityReasons:(id)arg1 forActivity:(id)arg2;
- (id)getInstancesOfHigherThreshold:(id)arg1 forActivity:(id)arg2;
- (id)getMessagesAfterRunning:(id)arg1 forActivity:(id)arg2;
- (id)getMessagesBeforeRunning:(id)arg1 forActivity:(id)arg2;
- (id)getPolicyDenialReasonsFromMessage:(id)arg1;
- (id)getScheduledBlocksOfMessages:(id)arg1 forActivity:(id)arg2;
- (id)getSummaryFromLogs:(id)arg1 forActivity:(id)arg2 detail:(bool)arg3;
- (id)getpolicyToIntervals:(id)arg1;
- (int)handleLogEventsLogEvents:(id)arg1 sinceDate:(id)arg2 withHandler:(id /* block */)arg3;
- (id)initWithArchive:(id)arg1;
- (id)logStore;
- (id)objectForTrigger:(id)arg1 fromCondition:(id)arg2 compactRepresentation:(bool)arg3;
- (void)setCategory:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setEventStream:(id)arg1;
- (void)setLogStore:(id)arg1;
- (void)setSubsystem:(id)arg1;
- (id)subsystem;
- (int)summarizeActivity:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 detail:(bool)arg4;
- (id)summarizeAllDenialsOverMessages:(id)arg1 forActivity:(id)arg2 detail:(bool)arg3;
- (id)summarizePolicyDenialsOverMessages:(id)arg1 maxDuration:(double)arg2;
- (id)summarizeRuntimeOverMessages:(id)arg1 forActivity:(id)arg2;
- (int)sysConditionsLog:(bool)arg1 startDate:(id)arg2 endDate:(id)arg3;

@end
