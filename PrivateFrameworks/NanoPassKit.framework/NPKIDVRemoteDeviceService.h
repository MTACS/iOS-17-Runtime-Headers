
@interface NPKIDVRemoteDeviceService : NSObject <NPKIDVRemoteDeviceServiceServerDelegate, NSXPCListenerDelegate> {
    <NPKIDVRemoteDeviceServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateCallBackQueue;
    NSString * _serviceName;
    NSMutableSet * _serviceServers;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKIDVRemoteDeviceServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (void)_addServer:(id)arg1;
- (void)_removeServer:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)identityRemoteDeviceServiceServer:(id)arg1 didReceiveEvent:(unsigned long long)arg2 fromRemoteDeviceWithID:(id)arg3;
- (id)initWithServiceName:(id)arg1 delegate:(id)arg2 callbackQueue:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)registerForEvents:(unsigned long long)arg1 withSession:(id)arg2 completion:(id /* block */)arg3;
- (id)serviceName;
- (void)setDelegate:(id)arg1;
- (void)unregisterFromEvents:(unsigned long long)arg1 withSession:(id)arg2 completion:(id /* block */)arg3;

@end
