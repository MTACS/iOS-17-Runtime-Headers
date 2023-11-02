
@interface TRIRolloutTargetingTask : TRIBaseTask <TRIMetricsProviding, TRITask> {
    bool  _includeDependencies;
    TRIRolloutTaskSupport * _support;
    <TRITaskAttributing> * _taskAttribution;
    unsigned long long  _triggerEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TRIRolloutDeployment *rolloutDeployment;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic) <TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *taskName;
@property (nonatomic, readonly) int taskType;

+ (id)parseFromData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)taskWithRolloutDeployment:(id)arg1 includeDependencies:(bool)arg2 taskAttribution:(id)arg3 triggerEvent:(unsigned long long)arg4;

- (void).cxx_destruct;
- (id)_asPersistedTask;
- (id)_categoricalValueForTriggerEvent:(unsigned long long)arg1;
- (id)_runTaskUsingContext:(id)arg1 withTaskQueue:(id)arg2 rolloutTargeter:(id)arg3 error:(id*)arg4;
- (id)_systemCovariatesWithPaths:(id)arg1;
- (id)_taskResultWithStatus:(int)arg1 reportResults:(bool)arg2 nextTasks:(id)arg3;
- (id)dependencies;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRolloutDeployment:(id)arg1 includeDependencies:(bool)arg2 taskAttribution:(id)arg3 triggerEvent:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (id)rolloutDeployment;
- (void)runDequeueHandlerUsingContext:(id)arg1;
- (void)runEnqueueHandlerUsingContext:(id)arg1;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (id)tags;
- (int)taskType;
- (id)trialSystemTelemetry;

@end
