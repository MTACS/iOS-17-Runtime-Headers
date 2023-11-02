
@interface TRISubscribeChannelTask : TRIBaseTask <TRITask> {
    NSString * _experimentId;
    NSDate * _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *experimentId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic) <TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *taskName;
@property (nonatomic, readonly) int taskType;

+ (id)parseFromData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)taskWithExperimentId:(id)arg1 startTime:(id)arg2;

- (void).cxx_destruct;
- (id)_asPersistedTask;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)experimentId;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExperiment:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)requiredCapabilities;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (void)setStartTime:(id)arg1;
- (id)startTime;
- (int)taskType;

@end
