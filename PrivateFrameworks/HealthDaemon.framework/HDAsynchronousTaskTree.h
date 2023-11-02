
@interface HDAsynchronousTaskTree : NSObject {
    _Atomic bool  _canceled;
    NSObject<OS_dispatch_queue> * _default_task_queue;
    NSString * _groupDescription;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _lock_completion;
    bool  _lock_finished;
    NSMutableArray * _lock_pendingSubtasks;
    NSMutableArray * _lock_pendingTasks;
    bool  _lock_started;
    NSMutableArray * _lock_taskErrors;
    _Atomic bool  _rejectAddTask;
}

@property (nonatomic, readonly) NSArray *allErrors;
@property (nonatomic, readonly, copy) NSString *groupDescription;

- (void).cxx_destruct;
- (void)addCheckpointTask:(id /* block */)arg1;
- (void)addCheckpointTaskOnQueue:(id)arg1 task:(id /* block */)arg2;
- (void)addTask:(id /* block */)arg1;
- (void)addTaskOnQueue:(id)arg1 task:(id /* block */)arg2;
- (void)addTaskOnQueue:(id)arg1 timeout:(double)arg2 task:(id /* block */)arg3;
- (void)addTaskWithTimeout:(double)arg1 task:(id /* block */)arg2;
- (id)allErrors;
- (void)begin;
- (void)cancel;
- (id)description;
- (id)groupDescription;
- (id)initWithDescription:(id)arg1 completion:(id /* block */)arg2;

@end
