
@interface TRIFetchBMLTNotificationsTask : TRIBaseTask <TRIMetricsProviding, TRIRetryableTask> {
    NSString * _bmltBatchNotificationIdentifier;
    TRIBMLTDeployment * _deployment;
    _PASLock * _lock;
    NSMutableArray * _nextTasks;
    <TRITaskAttributing> * _taskAttribution;
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

+ (id)categoricalValueForBMLTNotificationEvent:(unsigned long long)arg1;
+ (id)parseFromData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)taskWithDeployment:(id)arg1 taskAttribution:(id)arg2 bmltBatchNotificationIdentifier:(id)arg3;
+ (id)taskWithTaskAttribution:(id)arg1;

- (void).cxx_destruct;
- (void)_addDimension:(id)arg1;
- (void)_addMetric:(id)arg1;
- (id)_asPersistedTask;
- (void)_mlruntimeNotifiedTelemetryWithRecords:(bool)arg1 serverContext:(id)arg2;
- (bool)_processBMLTArtifact:(id)arg1 bmltsProcessed:(id)arg2 deactivatedBMLTs:(id)arg3 targeter:(id)arg4 context:(id)arg5 taskQueue:(id)arg6;
- (unsigned long long)_processBMLTCatalogArtifact:(id)arg1 deactivatedBMLTs:(id)arg2 context:(id)arg3;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchSingleDeploymentWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeployment:(id)arg1 taskAttribution:(id)arg2 bmltBatchNotificationIdentifier:(id)arg3;
- (id)initWithTaskAttribution:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metrics;
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
