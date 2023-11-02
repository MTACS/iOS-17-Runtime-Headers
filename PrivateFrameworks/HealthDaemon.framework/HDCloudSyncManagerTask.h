
@interface HDCloudSyncManagerTask : NSObject {
    id /* block */  _completion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _mirroringTasks;
    HDCloudSyncManagerTask * _originalTask;
    long long  _priority;
    NSProgress * _progress;
    long long  _status;
}

@property (readonly, copy) NSArray *mirroringTasks;
@property (readonly) HDCloudSyncManagerTask *originalTask;
@property long long priority;
@property (readonly) NSProgress *progress;
@property (readonly) long long status;

- (void).cxx_destruct;
- (void)cancel;
- (bool)combineWithTask:(id)arg1;
- (void)finish;
- (id)init;
- (void)main;
- (void)mirrorTask:(id)arg1;
- (id)mirroringTasks;
- (id)originalTask;
- (long long)priority;
- (id)progress;
- (void)setPriority:(long long)arg1;
- (void)startWithCompletion:(id /* block */)arg1;
- (long long)status;

@end
