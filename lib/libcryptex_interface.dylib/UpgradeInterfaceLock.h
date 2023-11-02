
@interface UpgradeInterfaceLock : NSObject {
    NSObject<OS_xpc_object> * _lockConn;
    NSObject<OS_os_log> * _log;
    NSMutableArray * _onNextLockReleaseCallbacks;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *lockConn;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) NSMutableArray *onNextLockReleaseCallbacks;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)getSharedInstance;

- (void).cxx_destruct;
- (int)_acquireLockOnQueue;
- (id)_createXPCRequest;
- (void)_handleXPCMessage:(id)arg1;
- (bool)_isLockedOnQueue;
- (void)_onNextLockRelease:(id /* block */)arg1;
- (int)acquireLock;
- (void)dealloc;
- (id)init;
- (bool)isLocked;
- (id)lockConn;
- (id)log;
- (id)onNextLockReleaseCallbacks;
- (id)queue;
- (int)releaseLock;
- (void)setLockConn:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setQueue:(id)arg1;

@end
