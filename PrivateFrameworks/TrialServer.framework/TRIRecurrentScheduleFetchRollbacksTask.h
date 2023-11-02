
@interface TRIRecurrentScheduleFetchRollbacksTask : TRIBaseTask <TRITask> {
    bool  _isRepeatedInstance;
    <TRITaskAttributing> * _taskAttribution;
    int  taskType;
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
+ (id)taskWithAttribution:(id)arg1;

- (void).cxx_destruct;
- (id)_asPersistedTask;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskAttribution:(id)arg1 isRepeatedInstance:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)requiredCapabilities;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (id)tags;
- (int)taskType;

@end
