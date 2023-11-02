
@interface BKHIDClientConnection : NSObject <BSInvalidatable> {
    NSString * _bundleID;
    struct __IOHIDEventSystemConnection { } * _connection;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _invalid;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSCompoundAssertion * _observerAssertion;
    int  _pid;
    BSProcessDeathWatcher * _processDeathWatcher;
    unsigned int  _task;
    long long  _versionedPID;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (nonatomic, retain) BSProcessDeathWatcher *processDeathWatcher;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int task;
@property (nonatomic, readonly) long long versionedPID;

+ (id)connectionWithConnection:(struct __IOHIDEventSystemConnection { }*)arg1;

- (void).cxx_destruct;
- (id)addDisconnectionObserverBlock:(id /* block */)arg1;
- (id)bundleID;
- (struct __IOHIDEventSystemConnection { }*)connection;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithConnection:(struct __IOHIDEventSystemConnection { }*)arg1;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (id)processDeathWatcher;
- (void)setProcessDeathWatcher:(id)arg1;
- (unsigned int)task;
- (long long)versionedPID;

@end
