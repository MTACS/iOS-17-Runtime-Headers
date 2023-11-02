
@interface DCPresentmentClient : NSObject <DCPresentmentXPCProtocol> {
    DCXPCDisconnectHandler * _disconnectionHandler;
    <DCPresentmentXPCProtocol> * _remoteObjectProxy;
    NSXPCConnection * _serverConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DCXPCDisconnectHandler *disconnectionHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <DCPresentmentXPCProtocol> *remoteObjectProxy;
@property (nonatomic, retain) NSXPCConnection *serverConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)buildCredentialResponseForSelection:(id)arg1 completion:(id /* block */)arg2;
- (void)buildErrorResponseWithStatus:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)buildResponseForSelection:(id)arg1 completion:(id /* block */)arg2;
- (void)configureWithPartitions:(id)arg1 presentmentType:(unsigned long long)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (id)disconnectionHandler;
- (void)generateTransportKeyForSpecification:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)interpretRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)invalidate;
- (id)remoteObjectProxy;
- (id)serverConnection;
- (void)setDisconnectionHandler:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)setServerConnection:(id)arg1;

@end
