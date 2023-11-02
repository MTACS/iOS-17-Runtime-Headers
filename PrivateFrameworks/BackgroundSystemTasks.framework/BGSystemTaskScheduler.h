
@interface BGSystemTaskScheduler : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _pendingTasksMap;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _registrations;
    NSMutableDictionary * _runningTasksMap;
    _DASScheduler * _scheduler;
}

@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSMutableDictionary *pendingTasksMap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *registrations;
@property (nonatomic, retain) NSMutableDictionary *runningTasksMap;
@property (nonatomic, retain) _DASScheduler *scheduler;

+ (id)sharedScheduler;

- (void).cxx_destruct;
- (bool)cancelTaskRequestWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)cleanupTaskObject:(id)arg1;
- (void)getTaskStatusForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)installEventStreamHandler;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)pendingTasksMap;
- (void)processEvent:(id)arg1 forRegistration:(id)arg2;
- (id)queue;
- (bool)registerForTaskWithIdentifier:(id)arg1 usingQueue:(id)arg2 launchHandler:(id /* block */)arg3;
- (id)registrations;
- (void)runTaskWithRegistration:(id)arg1;
- (id)runningTasksMap;
- (id)scheduler;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setPendingTasksMap:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRegistrations:(id)arg1;
- (void)setRunningTasksMap:(id)arg1;
- (void)setScheduler:(id)arg1;
- (bool)submitTaskRequest:(id)arg1 error:(id*)arg2;
- (void)suspendTaskWithRegistration:(id)arg1;
- (id)taskRequestForIdentifier:(id)arg1;
- (bool)updateTaskRequest:(id)arg1 error:(id*)arg2;

@end
