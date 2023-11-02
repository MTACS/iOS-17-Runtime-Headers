
@interface NTKFirstUnlockQueue : NSObject {
    bool  _isBeforeFirstUnlock;
    bool  _isSuspended;
    const char * _name;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _suspendLock;
}

- (void).cxx_destruct;
- (void)_firstUnlock;
- (void)_suspendThreadBeforeFirstUnlock;
- (void)dealloc;
- (void)dispatch:(id /* block */)arg1;
- (id)initWithName:(const char *)arg1;

@end
