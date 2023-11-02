
@interface SKStatusSubscriptionDaemonConnection : NSObject {
    <SKStatusSubscriptionConnectionDelegateProtocol> * _connectionDelegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <SKStatusSubscriptionDaemonDelegateProtocol> * _subscriptionDaemonDelegate;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) <SKStatusSubscriptionConnectionDelegateProtocol> *connectionDelegate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic) <SKStatusSubscriptionDaemonDelegateProtocol> *subscriptionDaemonDelegate;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)daemonDelegateXPCInterface;
+ (id)daemonXPCInterface;
+ (id)logger;

- (void).cxx_destruct;
- (unsigned long long)_xpcConnectionOptions;
- (id)asynchronousRemoteDaemonWithErrorHandler:(id /* block */)arg1;
- (id)connectionDelegate;
- (id)initWithSubscriptionDaemonDelegate:(id)arg1 connectionDelegate:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)setConnectionDelegate:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setSubscriptionDaemonDelegate:(id)arg1;
- (void)setXPCConnection:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)subscriptionDaemonDelegate;
- (id)synchronousRemoteDaemonWithErrorHandler:(id /* block */)arg1;
- (id)xpcConnection;

@end
