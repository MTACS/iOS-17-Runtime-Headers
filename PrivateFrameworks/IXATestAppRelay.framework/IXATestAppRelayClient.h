
@interface IXATestAppRelayClient : NSObject <IXATestAppRelayProtocol> {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)_disconnect;
- (void)_initializeConnection;
- (id)connection;
- (void)dealloc;
- (void)fetchEndpointForServiceName:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)registerEndpoint:(id)arg1 forServiceName:(id)arg2 withEntitlement:(id)arg3 canReplace:(bool)arg4 completion:(id /* block */)arg5;
- (void)setConnection:(id)arg1;
- (void)unregisterEndpointForServiceName:(id)arg1 completion:(id /* block */)arg2;

@end
