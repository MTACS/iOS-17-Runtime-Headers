
@interface TRIRotateSubjectIdTask : TRIBaseTask <TRITask> {
    NSString * _deviceId;
    bool  _forceUpdate;
    NSDate * _nextRotationDate;
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
+ (id)task;
+ (id)taskWithDeviceId:(id)arg1 nextRotationDate:(id)arg2 forceUpdate:(bool)arg3;

- (void).cxx_destruct;
- (id)_asPersistedTask;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceId:(id)arg1 nextRotationDate:(id)arg2 forceUpdate:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (id)runTaskUsingContext:(id)arg1;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (id)tags;
- (int)taskType;

@end
