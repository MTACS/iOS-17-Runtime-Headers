
@interface PDSXPCServer : NSObject <PDSXPCListenerDelegate> {
    NSMutableArray * _XPCClients;
    <PDSXPCListener> * _XPCListener;
    <PDSDaemonListenerVendor> * _daemonListenerVendor;
    <PDSXPCInterfaceVendor> * _interfaceVendor;
    NSObject<OS_dispatch_workloop> * _workloop;
}

@property (nonatomic, retain) NSMutableArray *XPCClients;
@property (nonatomic, retain) <PDSXPCListener> *XPCListener;
@property (nonatomic, readonly) NSArray *connectedClients;
@property (nonatomic, retain) <PDSDaemonListenerVendor> *daemonListenerVendor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PDSXPCInterfaceVendor> *interfaceVendor;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_workloop> *workloop;

- (void).cxx_destruct;
- (id)XPCClients;
- (id)XPCListener;
- (id)connectedClients;
- (id)daemonListenerVendor;
- (id)initWithServiceName:(id)arg1 listenerVendor:(id)arg2 interfaceVendor:(id)arg3 daemonListenerVendor:(id)arg4 queue:(id)arg5 workloop:(id)arg6;
- (id)interfaceVendor;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (void)setDaemonListenerVendor:(id)arg1;
- (void)setInterfaceVendor:(id)arg1;
- (void)setWorkloop:(id)arg1;
- (void)setXPCClients:(id)arg1;
- (void)setXPCListener:(id)arg1;
- (id)workloop;

@end
