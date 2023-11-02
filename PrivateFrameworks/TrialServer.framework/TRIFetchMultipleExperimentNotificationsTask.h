
@interface TRIFetchMultipleExperimentNotificationsTask : TRIBaseTask <TRIMetricsProviding, TRIRetryableTask> {
    NSMutableArray * _dimensions;
    bool  _limitedCarryOnly;
    NSMutableArray * _metrics;
    NSSet * _namespaceNames;
    NSMutableArray * _nextTasks;
    bool  _rollbacksOnly;
    NSDate * _startingFetchDateOverride;
    <TRITaskAttributing> * _taskAttributing;
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
+ (id)taskWithStartingFetchDateOverride:(id)arg1 namespaceNames:(id)arg2 taskAttributing:(id)arg3 rollbacksOnly:(bool)arg4 limitedCarryOnly:(bool)arg5;

- (void).cxx_destruct;
- (void)_addDimension:(id)arg1;
- (void)_addMetric:(id)arg1;
- (void)_addNextTask:(id)arg1;
- (id)_asPersistedTask;
- (bool)_checkIfAnyTreatmentPresent:(id)arg1 usingContext:(id)arg2;
- (id)_getNextTaskForExperiment:(id)arg1 database:(id)arg2 taskQueue:(id)arg3;
- (id)_nameForNotificationType:(int)arg1;
- (bool)_processExperiment:(id)arg1 experimentDatabase:(id)arg2 namespaceDatabase:(id)arg3 taskQueue:(id)arg4 paths:(id)arg5;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartingFetchDateOverride:(id)arg1 container:(int)arg2 team:(id)arg3 rollbacksOnly:(bool)arg4 withNamespaceNames:(id)arg5;
- (id)initWithStartingFetchDateOverride:(id)arg1 namespaceNames:(id)arg2 taskAttributing:(id)arg3 rollbacksOnly:(bool)arg4 limitedCarryOnly:(bool)arg5;
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
- (id)taskName;
- (int)taskType;
- (id)trialSystemTelemetry;
- (void)updateStatusForNamespacesWithContext:(id)arg1;
- (bool)wasDeferred;

@end
