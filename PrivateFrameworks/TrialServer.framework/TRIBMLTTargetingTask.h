
@interface TRIBMLTTargetingTask : TRIBaseTask <TRIMetricsProviding, TRITask> {
    NSString * _bmltBatchNotificationIdentifier;
    TRIBMLTDeployment * _deployment;
    bool  _includeDependencies;
    TRIBMLTTaskSupport * _support;
    <TRITaskAttributing> * _taskAttribution;
    unsigned long long  _triggerEvent;
}

@property (nonatomic, readonly) TRIBMLTDeployment *bmltDeployment;
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
+ (id)taskWithBMLTDeployment:(id)arg1 includeDependencies:(bool)arg2 taskAttribution:(id)arg3 triggerEvent:(unsigned long long)arg4;
+ (id)taskWithBMLTDeployment:(id)arg1 includeDependencies:(bool)arg2 taskAttribution:(id)arg3 triggerEvent:(unsigned long long)arg4 bmltBatchNotificationIdentifier:(id)arg5;

- (void).cxx_destruct;
- (void)_allocationTelemetryWithEvent:(unsigned char)arg1 factorPackSetId:(id)arg2 bmltRecord:(id)arg3 context:(id)arg4;
- (id)_asPersistedTask;
- (id)_categoricalValueForTriggerEvent:(unsigned long long)arg1;
- (bool)_targetBMLTDeployment:(id)arg1 appendingTelemetryToSupport:(id)arg2 backgroundMLTaskDatabase:(id)arg3 backgroundMLTaskHistoryDatabase:(id)arg4 targeter:(id)arg5 reportTelemetryToServer:(bool*)arg6 factorPackSetIdToActivate:(id*)arg7 wasEnrolled:(bool*)arg8 shouldDisenroll:(bool*)arg9 error:(id*)arg10;
- (id)_taskResultWithStatus:(int)arg1 wasEnrolled:(bool)arg2 reportResults:(bool)arg3 nextTasks:(id)arg4 bmltHistoryDatabase:(id)arg5;
- (id)bmltDeployment;
- (id)dependencies;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBMLTDeployment:(id)arg1 includeDependencies:(bool)arg2 taskAttribution:(id)arg3 triggerEvent:(unsigned long long)arg4 bmltBatchNotificationIdentifier:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (void)runDequeueHandlerUsingContext:(id)arg1;
- (void)runEnqueueHandlerUsingContext:(id)arg1;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (id)tags;
- (int)taskType;
- (id)trialSystemTelemetry;

@end
