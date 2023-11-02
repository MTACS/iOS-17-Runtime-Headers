
@interface STDynamicAttributionXPCServerHandle : NSObject <STDynamicActivityAttributionServerHandle, STDynamicAttributionXPCClientProtocol> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _lock_clients;
    NSXPCConnection * _lock_connection;
    id /* block */  _lock_connectionProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedMachServiceServerHandle;

- (void).cxx_destruct;
- (void)currentAttributionsDidChange:(id)arg1;
- (id)init;
- (id)initWithXPCConnectionProvider:(id /* block */)arg1;
- (void)setAttributionLocalizableKey:(id)arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 forClient:(id)arg3;
- (void)setAttributionStringWithFormat:(id)arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 forClient:(id)arg3;
- (void)setAttributionWebsiteString:(id)arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 forClient:(id)arg3;
- (void)setLocalizableAttributionKey:(id)arg1 andApplication:(id)arg2 forClient:(id)arg3;
- (void)subscribeToUpdates:(id)arg1;
- (void)unsubscribeFromUpdates:(id)arg1;

@end
