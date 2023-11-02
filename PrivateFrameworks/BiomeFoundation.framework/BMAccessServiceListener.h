
@interface BMAccessServiceListener : NSObject <BMAccessServiceBase, NSXPCConnectionDelegate, NSXPCListenerDelegate> {
    BMAccessServer * _accessServer;
    NSMapTable * _clientSpecificListeners;
    unsigned long long  _domain;
    <BMFileServer> * _fileServer;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long domain;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_acceptConnection:(id)arg1;
- (void)activate;
- (void)configureConnectionForUseCase:(id)arg1 reply:(id /* block */)arg2;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (void)dealloc;
- (unsigned long long)domain;
- (id)endpoint;
- (id)initLegacyWithQueue:(id)arg1;
- (id)initWithDomain:(unsigned long long)arg1 queue:(id)arg2 delegate:(id)arg3;
- (id)initWithMachServiceName:(id)arg1 domain:(unsigned long long)arg2 queue:(id)arg3 accessServer:(id)arg4 fileServer:(id)arg5;
- (id)initWithMachServiceName:(id)arg1 domain:(unsigned long long)arg2 queue:(id)arg3 accessServer:(id)arg4 fileServer:(id)arg5 delegate:(id)arg6;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)replyToInvocation:(id)arg1 withError:(id)arg2;
- (id)uniqueEndpointForAppScopedServicesActingOnBehalfOfClientWithAccessControlPolicy:(id)arg1;

@end
