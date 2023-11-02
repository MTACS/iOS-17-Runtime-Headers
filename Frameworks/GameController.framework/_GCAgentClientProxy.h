
@interface _GCAgentClientProxy : NSObject <GCUserDefaultsXPCProxyServiceRemoteServerInterface, _GCAgentServerInterface> {
    <_GCIPCIncomingConnection> * _connection;
    id  _connectionInterruptedRegistration;
    id  _connectionInvalidationRegistration;
    _Atomic bool  _invalid;
    NSArray * _invalidationHandlers;
    _GCControllerManagerServer * _server;
    GCRemoteUserDefaultsProxy * _userDefaultsProxy;
}

@property (copy) NSArray *invalidationHandlers;
@property (nonatomic, readonly) GCRemoteUserDefaultsProxy *userDefaultsProxy;

+ (id)clientProxyWithConnection:(id)arg1 server:(id)arg2 userDefaultsProxy:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithConnection:(id)arg1 server:(id)arg2 userDefaultsProxy:(id)arg3;
- (void)_invalidate;
- (void)connectToUserDefaultsXPCProxyServiceWithClient:(id)arg1 reply:(id /* block */)arg2;
- (void)connectToVideoRelocationXPCProxyServiceWithClient:(id)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)getTheLastGeneratedURLWithReply:(id /* block */)arg1;
- (id)init;
- (id)invalidationHandlers;
- (void)observeUserDefaultsValueForKeyPath:(id)arg1 change:(id)arg2;
- (void)pingWithReply:(id /* block */)arg1;
- (id)redactedDescription;
- (void)setInvalidationHandlers:(id)arg1;
- (void)userDefaultsCheckIn:(id)arg1;
- (id)userDefaultsProxy;

@end
