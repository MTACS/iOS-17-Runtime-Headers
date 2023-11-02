
@interface IPLocalNullXPCServer : NSObject <IPXPCServerInterface, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    NSXPCListenerEndpoint * _listenerEndpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)actionBarrier:(id /* block */)arg1;
- (void)getActiveInstallations:(id /* block */)arg1;
- (void)getAllInstallableStates:(id /* block */)arg1;
- (void)getProgressForIdentity:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)newClientConnection;
- (void)registerAsProgressObserver:(id /* block */)arg1;

@end
