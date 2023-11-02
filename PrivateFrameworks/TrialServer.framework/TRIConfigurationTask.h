
@interface TRIConfigurationTask : TRIBaseTask <TRITask>

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

- (id)_asPersistedTask;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (int)taskType;

@end
