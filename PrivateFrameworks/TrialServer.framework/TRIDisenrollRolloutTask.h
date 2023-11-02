
@interface TRIDisenrollRolloutTask : TRIBaseTask <TRIMetricsProviding, TRITask> {
    _PASLock * _lock;
    NSString * _rolloutId;
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
+ (id)taskWithRolloutId:(id)arg1;
+ (id)taskWithRolloutId:(id)arg1 triggerEvent:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_asPersistedTask;
- (void)addMetric:(id)arg1;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRolloutId:(id)arg1 triggerEvent:(unsigned long long)arg2;
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
