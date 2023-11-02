
@interface PDSXPCClient : NSObject <PDSXPCHandshake> {
    <PDSXPCDaemonConnection> * _connection;
    <PDSRemote> * _daemonListener;
    <PDSDaemonListenerVendor> * _daemonListenerVendor;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) <PDSXPCDaemonConnection> *connection;
@property (nonatomic, retain) <PDSRemote> *daemonListener;
@property (nonatomic, retain) <PDSDaemonListenerVendor> *daemonListenerVendor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)_connectionEntitledClientIDs;
- (bool)_hasToolEntitlement;
- (void)connectInternalWithCompletion:(id /* block */)arg1;
- (void)connectWithClientID:(id)arg1 completion:(id /* block */)arg2;
- (id)connection;
- (id)daemonListener;
- (id)daemonListenerVendor;
- (id)initWithConnection:(id)arg1 interfaceVendor:(id)arg2 daemonListenerVendor:(id)arg3 queue:(id)arg4;
- (id)queue;
- (void)resume;
- (void)setConnection:(id)arg1;
- (void)setDaemonListener:(id)arg1;
- (void)setDaemonListenerVendor:(id)arg1;
- (void)setQueue:(id)arg1;

@end
