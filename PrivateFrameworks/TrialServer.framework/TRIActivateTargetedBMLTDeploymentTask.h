
@interface TRIActivateTargetedBMLTDeploymentTask : TRIBaseTask <TRIMetricsProviding, TRITask> {
    NSString * _bmltBatchNotificationIdentifier;
    TRIBMLTDeployment * _deployment;
    NSString<TRIFactorPackSetId> * _factorPackSetId;
    TRIBMLTTaskSupport * _support;
    <TRITaskAttributing> * _taskAttribution;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependencies;
@property (nonatomic, readonly) TRIBMLTDeployment *deployment;
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
+ (id)taskWithBMLTDeployment:(id)arg1 factorPackSetId:(id)arg2 taskAttribution:(id)arg3;
+ (id)taskWithBMLTDeployment:(id)arg1 factorPackSetId:(id)arg2 taskAttribution:(id)arg3 bmltBatchNotificationIdentifier:(id)arg4;

- (void).cxx_destruct;
- (void)_activationTelemetryWithSuccess:(bool)arg1 bmltRecord:(id)arg2 serverContext:(id)arg3;
- (id)_asPersistedTask;
- (bool)_hasValidNCVForBMLT:(id)arg1 namespaceDescriptorProvider:(id)arg2;
- (id)dependencies;
- (id)deployment;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (id)factorPackSetId;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskDeployment:(id)arg1 factorPackSetId:(id)arg2 taskAttribution:(id)arg3 bmltBatchNotificationIdentifier:(id)arg4;
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
