
@interface SKPresenceDaemonConnection : NSObject {
    <SKPresenceConnectionDelegateProtocol> * _connectionDelegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <SKPresenceDaemonDelegateProtocol> * _presenceDaemonDelegate;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) <SKPresenceConnectionDelegateProtocol> *connectionDelegate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic) <SKPresenceDaemonDelegateProtocol> *presenceDaemonDelegate;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)daemonDelegateXPCInterface;
+ (id)daemonXPCInterface;
+ (id)logger;

- (void).cxx_destruct;
- (void)_resetConnectionHandlers;
- (unsigned long long)_xpcConnectionOptions;
- (id)asynchronousRemoteDaemonWithErrorHandler:(id /* block */)arg1;
- (id)connectionDelegate;
- (id)initWithPresenceDaemonDelegate:(id)arg1 connectionDelegate:(id)arg2;
- (void)invalidate;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)presenceDaemonDelegate;
- (void)setConnectionDelegate:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setPresenceDaemonDelegate:(id)arg1;
- (void)setXPCConnection:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)synchronousRemoteDaemonWithErrorHandler:(id /* block */)arg1;
- (id)xpcConnection;

@end
