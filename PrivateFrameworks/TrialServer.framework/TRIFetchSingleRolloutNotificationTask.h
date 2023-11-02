
@interface TRIFetchSingleRolloutNotificationTask : TRIBaseTask <TRIMetricsProviding, TRIRetryableTask> {
    TRIRolloutDeployment * _deployment;
    TRIRolloutTaskSupport * _support;
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
+ (id)taskWithDeployment:(id)arg1 taskAttributing:(id)arg2;

- (void).cxx_destruct;
- (id)_asPersistedTask;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeployment:(id)arg1 taskAttributing:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (unsigned long long)requiredCapabilities;
- (int)retryCount;
- (void)runDequeueHandlerUsingContext:(id)arg1;
- (void)runEnqueueHandlerUsingContext:(id)arg1;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (void)setRetryCount:(int)arg1;
- (void)setWasDeferred:(bool)arg1;
- (id)tags;
- (int)taskType;
- (id)trialSystemTelemetry;
- (bool)wasDeferred;

@end
