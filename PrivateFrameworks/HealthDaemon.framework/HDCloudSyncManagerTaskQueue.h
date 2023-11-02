
@interface HDCloudSyncManagerTaskQueue : NSObject {
    HDCloudSyncManagerTask * _activeTask;
    <HDCloudSyncManagerTaskQueueDelegate> * _delegate;
    bool  _isComputingActiveTask;
    bool  _isStartingNextTask;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _pendingTasks;
    long long  _pendingTasksBeingSorted;
}

@property (readonly) HDCloudSyncManagerTask *activeTask;
@property <HDCloudSyncManagerTaskQueueDelegate> *delegate;
@property (readonly) bool hasActiveTask;
@property (readonly) long long pendingTaskCount;

- (void).cxx_destruct;
- (id)activeTask;
- (void)addTask:(id)arg1;
- (id)delegate;
- (bool)hasActiveTask;
- (id)initWithDelegate:(id)arg1;
- (long long)pendingTaskCount;
- (void)setDelegate:(id)arg1;

@end
