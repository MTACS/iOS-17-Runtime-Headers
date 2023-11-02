
@interface TRITargetingTask : TRIBaseTask <TRIMetricsProviding, TRIRetryableTask> {
    bool  _includeDependencies;
    TRIExperimentTaskSupport * _support;
    <TRITaskAttributing> * _taskAttributing;
    int  retryCount;
    bool  wasDeferred;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TRIExperimentDeployment *experiment;
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
+ (id)taskWithExperiment:(id)arg1 includeDependencies:(bool)arg2 taskAttribution:(id)arg3;
+ (id)taskWithExperiment:(id)arg1 taskAttribution:(id)arg2;

- (void).cxx_destruct;
- (id)_asPersistedTask;
- (bool)_isRolloutV1For1PWithExperimentRecord:(id)arg1 context:(id)arg2;
- (id)_targetingErrorWithExperiment:(id)arg1 errorType:(id)arg2;
- (id)_targetingErrorWithExperiment:(id)arg1 errorType:(id)arg2 details:(id)arg3;
- (id)dependencies;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (id)experiment;
- (bool)getTreatment:(id*)arg1 forExperiment:(id)arg2 isServerSideExperiment:(bool)arg3 paths:(id)arg4 error:(id*)arg5;
- (bool)getTreatment:(id*)arg1 forExperiment:(id)arg2 isServerSideExperiment:(bool)arg3 systemCovariates:(id)arg4 userCovariates:(id)arg5 error:(id*)arg6;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExperiment:(id)arg1 includeDependencies:(bool)arg2 taskAttribution:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (int)retryCount;
- (void)runDequeueHandlerUsingContext:(id)arg1;
- (void)runEnqueueHandlerUsingContext:(id)arg1;
- (id)runTaskUsingContext:(id)arg1 withTaskQueue:(id)arg2 systemCovariates:(id)arg3 userCovariates:(id)arg4 error:(id*)arg5;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (void)setRetryCount:(int)arg1;
- (void)setWasDeferred:(bool)arg1;
- (id)systemCovariatesWithPaths:(id)arg1;
- (id)tags;
- (int)taskType;
- (id)trialSystemTelemetry;
- (bool)validateSystemCovariates:(id)arg1 experiment:(id)arg2 error:(id*)arg3;
- (bool)wasDeferred;

@end
