
@interface DDRResetService : NSObject <DDRClientObserverProtocol, DDRClientResetProtocol> {
    int  _currentResetState;
    NSXPCConnection * _dataResetXPCConnection;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _mode;
    NSHashTable * _obervers;
    NSXPCConnection * _observerNonLaunchingXPCConnection;
    NSObject<OS_dispatch_queue> * _observerQueue;
}

@property (nonatomic) int currentResetState;
@property (nonatomic, retain) NSXPCConnection *dataResetXPCConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invalidated;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic) long long mode;
@property (nonatomic, retain) NSHashTable *obervers;
@property (nonatomic, retain) NSXPCConnection *observerNonLaunchingXPCConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addOberver:(id)arg1;
- (int)currentResetState;
- (id)dataResetXPCConnection;
- (void)didBeginDataResetWithMode:(long long)arg1;
- (void)didCompleteDataResetMode:(long long)arg1 withError:(id)arg2 completion:(id /* block */)arg3;
- (void)invalidate;
- (bool)invalidated;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (long long)mode;
- (void)notifyClientsOfResetFailedWithErrorCode:(long long)arg1;
- (id)obervers;
- (id)observerNonLaunchingXPCConnection;
- (id)observerQueue;
- (void)removeObserver:(id)arg1;
- (void)resetWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)setCurrentResetState:(int)arg1;
- (void)setDataResetXPCConnection:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setMode:(long long)arg1;
- (void)setObervers:(id)arg1;
- (void)setObserverNonLaunchingXPCConnection:(id)arg1;
- (void)setObserverQueue:(id)arg1;
- (void)sync;
- (void)willBeginDataResetWithMode:(long long)arg1;

@end
