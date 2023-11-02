
@interface HDSPSleepLockScreenAssertionManager : NSObject <HDSPEnvironmentAware, HDSPSleepLockScreenAssertionManager, HKSPSleepLockScreenServer, NSXPCListenerDelegate> {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    <HDSPSleepLockScreenAssertionManagerDelegate> * _delegate;
    HDSPEnvironment * _environment;
    NSXPCListener * _listener;
    SBSLockScreenRemoteContentAssertion * _lockScreenAssertion;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDSPSleepLockScreenAssertionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (nonatomic, readonly) bool hasLockScreenConnection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBSLockScreenRemoteContentAssertion *lockScreenAssertion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (void)connect;
- (id)connection;
- (id)delegate;
- (void)didDismissWithReason:(long long)arg1;
- (id)environment;
- (bool)hasLockScreenConnection;
- (id)initWithEnvironment:(id)arg1;
- (void)invalidateAssertion;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)lockScreenAssertion;
- (void)sendLockScreenState:(long long)arg1 userInfo:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)takeAssertionIfNeeded;

@end
