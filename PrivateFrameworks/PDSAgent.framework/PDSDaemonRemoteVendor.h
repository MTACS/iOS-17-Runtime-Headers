
@interface PDSDaemonRemoteVendor : NSObject <PDSRemoteVendor> {
    <PDSDaemonListenerVendor> * _daemonListenerVendor;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) <PDSDaemonListenerVendor> *daemonListenerVendor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_remoteForSync:(bool)arg1;
- (id)_remoteInternalForSync:(bool)arg1;
- (id)daemonListenerVendor;
- (id)initWithQueue:(id)arg1 daemonListenerVendor:(id)arg2;
- (id)internalRemoteObjectProxyWithError:(id*)arg1;
- (id)queue;
- (id)remoteObjectProxyWithError:(id*)arg1;
- (void)setDaemonListenerVendor:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)synchronousInternalRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)validateConnectionWithError:(id*)arg1;

@end
