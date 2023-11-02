
@interface TRIActivateTargetedRolloutDeploymentTask : TRIBaseTask <TRIMetricsProviding, TRITask> {
    TRITaskCapabilityModifier * _capabilityModifier;
    TRIRolloutDeployment * _deployment;
    NSString<TRIFactorPackSetId> * _factorPackSetId;
    TRIRolloutTaskSupport * _support;
    <TRITaskAttributing> * _taskAttribution;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependencies;
@property (nonatomic, readonly) TRIRolloutDeployment *deployment;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString<TRIFactorPackSetId> *factorPackSetId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic) <TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *taskName;
@property (nonatomic, readonly) int taskType;

+ (id)parseFromData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)taskWithDeployment:(id)arg1 factorPackSetId:(id)arg2 taskAttribution:(id)arg3 capabilityModifier:(id)arg4;

- (void).cxx_destruct;
- (id)_asPersistedTask;
- (bool)_notifyUpdatedShadowEvaluationsWithDeployments:(id)arg1 context:(id)arg2 usingTransaction:(id)arg3;
- (id)dependencies;
- (id)deployment;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (id)factorPackSetId;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeployment:(id)arg1 factorPackSetId:(id)arg2 taskAttribution:(id)arg3 capabilityModifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (unsigned long long)requiredCapabilities;
- (void)runDequeueHandlerUsingContext:(id)arg1;
- (void)runEnqueueHandlerUsingContext:(id)arg1;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (id)tags;
- (int)taskType;
- (id)trialSystemTelemetry;

@end
