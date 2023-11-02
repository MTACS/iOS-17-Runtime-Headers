
@interface TRIRetargetAllTask : TRIBaseTask <TRITask> {
    NSArray * _nextTasks;
    <TRITaskAttributing> * _taskAttribution;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *nextTasks;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic) <TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *taskName;
@property (nonatomic, readonly) int taskType;

+ (id)parseFromData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)task;
+ (id)taskWithTaskAttribution:(id)arg1;

- (void).cxx_destruct;
- (id)_asPersistedTask;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskAttribution:(id)arg1;
- (id)nextTasks;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (void)setNextTasks:(id)arg1;
- (int)taskType;

@end
