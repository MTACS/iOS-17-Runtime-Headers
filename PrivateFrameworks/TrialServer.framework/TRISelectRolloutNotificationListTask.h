
@interface TRISelectRolloutNotificationListTask : TRIBaseTask <TRIMetricsProviding, TRIRetryableTask> {
    _PASLock * _lock;
    NSSet * _namespaceNames;
    NSMutableArray * _nextTasks;
    <TRITaskAttributing> * _taskAttribution;
    int  retryCount;
    bool  wasDeferred;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *namespaceNames;
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
+ (id)taskWithNamespaceNames:(id)arg1 taskAttribution:(id)arg2;

- (void).cxx_destruct;
- (void)_addDimension:(id)arg1;
- (void)_addMetric:(id)arg1;
- (void)_addNextTask:(id)arg1;
- (id)_asPersistedTask;
- (struct { unsigned char x1; })_processRolloutArtifact:(id)arg1 rolloutsProcessed:(id)arg2 remainingNamespaces:(id)arg3 targeter:(id)arg4 context:(id)arg5 taskQueue:(id)arg6;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNamespaceNames:(id)arg1 taskAttribution:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (id)namespaceNames;
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
