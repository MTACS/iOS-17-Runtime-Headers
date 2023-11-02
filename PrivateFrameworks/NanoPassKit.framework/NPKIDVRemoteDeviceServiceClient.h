
@interface NPKIDVRemoteDeviceServiceClient : NSObject <PKXPCServiceDelegate> {
    PKXPCService * _remoteService;
    NSString * _serviceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (void)didReceiveEvent:(unsigned long long)arg1 fromRemoteDeviceWithID:(id)arg2;
- (id)initWithRemoteServiceName:(id)arg1;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (id)serviceName;

@end
