
@interface HMDHAPAccessoryTaskTracker : NSObject {
    unsigned long long  _currentTaskIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _pendingTasks;
}

@property (readonly) unsigned long long nextTaskIdentifier;
@property (readonly) NSMutableDictionary *pendingTasks;

- (void).cxx_destruct;
- (void)executeTask:(id)arg1;
- (id)init;
- (unsigned long long)nextTaskIdentifier;
- (id)pendingRemoteTasks;
- (id)pendingTasks;
- (void)removePendingTaskWithIdentifier:(id)arg1;

@end
