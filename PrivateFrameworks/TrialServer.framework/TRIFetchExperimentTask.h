
@interface TRIFetchExperimentTask : TRIExperimentBaseTask <TRIMetricsProviding, TRIRetryableTask> {
    <TRITaskAttributing> * _taskAttributing;
    TRITrialSystemTelemetry * _trialSystemTelemetry;
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
+ (id)taskWithExperimentDeployment:(id)arg1 taskAttributing:(id)arg2;

- (void).cxx_destruct;
- (id)_asPersistedTask;
- (id)_nextTasksForRunStatus:(int)arg1;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExperimentDeployment:(id)arg1 taskAttributing:(id)arg2;
- (id)metrics;
- (unsigned long long)requiredCapabilities;
- (int)retryCount;
- (void)runDequeueHandlerUsingContext:(id)arg1;
- (void)runEnqueueHandlerUsingContext:(id)arg1;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (void)setRetryCount:(int)arg1;
- (void)setWasDeferred:(bool)arg1;
- (int)taskType;
- (id)trialSystemTelemetry;
- (bool)wasDeferred;

@end
