
@interface IDSCrossDeviceTransport : CrossDeviceTransportCore <IDSServiceDelegate> {
    NSMutableSet * _delegateRegistry;
    NSMutableDictionary * _endpointsRegistry;
    IDSService * _idsService;
    NSObject<OS_dispatch_queue> * _idsServiceQueue;
    NSString * _serviceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isIDSEndpointEnabled;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 endpoint:(id)arg2;
- (void)dealloc;
- (unsigned long long)deliverMessage:(id)arg1 toEndpoint:(id)arg2;
- (id)idsService;
- (id)init;
- (id)initWithServiceName:(id)arg1;
- (void)registerIDSService;
- (void)removeDelegate:(id)arg1 endpoint:(id)arg2;
- (void)sendMessage:(id)arg1 toIDSDevices:(id)arg2 toEndpoint:(id)arg3 reply:(id /* block */)arg4;
- (void)sendMessage:(id)arg1 toIDSDevices:(id)arg2 toEndpoint:(id)arg3 validFor:(double)arg4 reply:(id /* block */)arg5;
- (void)sendMessage:(id)arg1 toIDSDevicesMatching:(id)arg2 toEndpoint:(id)arg3 reply:(id /* block */)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)unregisterIDSService;

@end
