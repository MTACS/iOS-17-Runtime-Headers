
@interface STDynamicActivityAttributionXPCClientHandle : NSObject <STDynamicActivityAttributionClientHandle, STDynamicAttributionXPCServerProtocol> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSXPCConnection * _connection;
    <STDynamicActivityAttributionServerHandle> * _serverHandle;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <STDynamicActivityAttributionServerHandle> *serverHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (id)connection;
- (void)currentAttributionsDidChange:(id)arg1;
- (id)initWithXPCConnection:(id)arg1 serverHandle:(id)arg2;
- (id)serverHandle;
- (void)setCurrentAttributionKey:(id)arg1 application:(id)arg2 reply:(id /* block */)arg3;
- (void)setCurrentAttributionLocalizableKey:(id)arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 reply:(id /* block */)arg3;
- (void)setCurrentAttributionStringWithFormat:(id)arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 reply:(id /* block */)arg3;
- (void)setCurrentAttributionWebsiteString:(id)arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 reply:(id /* block */)arg3;
- (void)subscribeToUpdates;

@end
