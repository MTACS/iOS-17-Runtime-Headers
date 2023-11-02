
@interface TRIFetchRolloutNotificationListTask : TRIBaseTask <TRIMetricsProviding, TRIRetryableTask> {
    NSMutableArray * _dimensions;
    NSMutableArray * _metrics;
    NSSet * _namespaceNames;
    NSMutableArray * _nextTasks;
    NSDate * _startingFetchDateOverride;
    <TRITaskAttributing> * _taskAttribution;
    int  retryCount;
    bool  wasDeferred;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int retryCount;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic) <TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *taskName;
@property (nonatomic, readonly) int taskType;
@property bool wasDeferred;

+ (id)parseFromData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)taskWithStartingFetchDateOverride:(id)arg1 namespaceNames:(id)arg2 taskAttribution:(id)arg3;

- (void).cxx_destruct;
- (void)_addDimension:(id)arg1;
- (void)_addMetric:(id)arg1;
- (void)_addNextTask:(id)arg1;
- (id)_asPersistedTask;
- (void)_processRolloutArtifact:(id)arg1 context:(id)arg2 taskQueue:(id)arg3;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartingFetchDateOverride:(id)arg1 namespaceNames:(id)arg2 taskAttribution:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (long long)nextTaskCount;
- (unsigned long long)requiredCapabilities;
- (int)retryCount;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (void)setRetryCount:(int)arg1;
- (void)setWasDeferred:(bool)arg1;
- (id)tags;
- (int)taskType;
- (id)trialSystemTelemetry;
- (bool)wasDeferred;

@end
