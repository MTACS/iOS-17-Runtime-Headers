
@interface TRIDeactivateTreatmentTask : TRIExperimentBaseTask <TRIRetryableTask> {
    bool  _failOnUnrecognizedExperiment;
    NSDate * _startTime;
    <TRITaskAttributing> * _taskAttribution;
    unsigned long long  _triggerEvent;
    int  retryCount;
    bool  wasDeferred;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool failOnUnrecognizedExperiment;
@property (readonly) unsigned long long hash;
@property (nonatomic) int retryCount;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic) <TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, retain) <TRITaskAttributing> *taskAttribution;
@property (nonatomic, readonly) NSString *taskName;
@property (nonatomic, readonly) int taskType;
@property (nonatomic) unsigned long long triggerEvent;
@property bool wasDeferred;

+ (id)parseFromData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)taskWithExperimentId:(id)arg1 deploymentId:(int)arg2 failOnUnrecognizedExperiment:(bool)arg3 triggerEvent:(unsigned long long)arg4 taskAttribution:(id)arg5;
+ (id)taskWithExperimentId:(id)arg1 deploymentId:(int)arg2 startTime:(id)arg3 failOnUnrecognizedExperiment:(bool)arg4 triggerEvent:(unsigned long long)arg5 taskAttribution:(id)arg6;

- (void).cxx_destruct;
- (id)_asPersistedTask;
- (id)_categoricalValueForTriggerEvent:(unsigned long long)arg1;
- (bool)_notifyUpdatedShadowEvaluationWithExperimentRecord:(id)arg1 context:(id)arg2;
- (bool)_purgeRolloutLayerIfNecessaryWithRecord:(id)arg1 fromAppContainer:(id)arg2 paths:(id)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)failOnUnrecognizedExperiment;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)requiredCapabilities;
- (int)retryCount;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (void)setFailOnUnrecognizedExperiment:(bool)arg1;
- (void)setRetryCount:(int)arg1;
- (void)setStartTime:(id)arg1;
- (void)setTaskAttribution:(id)arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (void)setWasDeferred:(bool)arg1;
- (id)startTime;
- (id)taskAttribution;
- (int)taskType;
- (id)trialSystemTelemetry;
- (unsigned long long)triggerEvent;
- (bool)wasDeferred;

@end
