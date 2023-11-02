
@interface TRIDeactivateBMLTDeploymentTask : TRIBaseTask <TRIMetricsProviding, TRITask> {
    NSString * _bmltBatchNotificationIdentifier;
    TRIBMLTDeployment * _bmltDeployment;
    _PASLock * _lock;
    unsigned long long  _triggerEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic) <TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *taskName;
@property (nonatomic, readonly) int taskType;

+ (id)parseFromData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)taskWithBMLTDeployment:(id)arg1 triggerEvent:(unsigned long long)arg2;
+ (id)taskWithBMLTDeployment:(id)arg1 triggerEvent:(unsigned long long)arg2 bmltBatchNotificationIdentifier:(id)arg3;

- (void).cxx_destruct;
- (id)_asPersistedTask;
- (void)_deactivationTelemetryWithSuccess:(bool)arg1 bmltRecord:(id)arg2 deactivatedFactorPackSetId:(id)arg3 serverContext:(id)arg4;
- (void)addMetric:(id)arg1;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBMLTDeployment:(id)arg1 triggerEvent:(unsigned long long)arg2 bmltBatchNotificationIdentifier:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeTelemetry:(id)arg1;
- (id)metrics;
- (unsigned long long)requiredCapabilities;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (id)tags;
- (int)taskType;
- (id)trialSystemTelemetry;

@end
