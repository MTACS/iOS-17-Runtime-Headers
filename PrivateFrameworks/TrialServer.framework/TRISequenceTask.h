
@interface TRISequenceTask : TRIBaseTask <TRIMetricsProviding, TRIRetryableTask> {
    <TRITask> * _dependentTask;
    <TRITask> * _task;
    bool  wasDeferred;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <TRITask> *lastTask;
@property (nonatomic) int retryCount;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic) <TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *taskName;
@property (nonatomic, readonly) int taskType;
@property bool wasDeferred;

+ (bool)_isTask:(id)arg1 equalTo:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)task;

- (void).cxx_destruct;
- (id)_asPersistedTask;
- (void)addTaskToEndOfSequence:(id)arg1;
- (id)debugDescription;
- (id)dependencies;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTask:(id)arg1 dependency:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lastTask;
- (id)metrics;
- (int)retryCount;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (void)setRetryCount:(int)arg1;
- (void)setWasDeferred:(bool)arg1;
- (id)startTime;
- (id)tags;
- (id)taskName;
- (int)taskType;
- (id)trialSystemTelemetry;
- (bool)wasDeferred;

@end
