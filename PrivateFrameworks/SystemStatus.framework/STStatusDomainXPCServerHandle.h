
@interface STStatusDomainXPCServerHandle : NSObject <BSDescriptionProviding, STStatusDomainServerHandle, STStatusDomainXPCClient> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    BSMutableIntegerMap * _clientsByDomain;
    BSMutableIntegerMap * _dataByDomain;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSXPCConnection * _serverXPCConnection;
    id /* block */  _xpcConnectionProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedMachServiceServerHandle;

- (void).cxx_destruct;
- (id)dataForDomain:(unsigned long long)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithXPCConnectionProvider:(id /* block */)arg1;
- (void)observeData:(id)arg1 forDomain:(unsigned long long)arg2 withChangeContext:(id)arg3;
- (void)observeDiff:(id)arg1 forDomain:(unsigned long long)arg2 withChangeContext:(id)arg3;
- (void)registerClient:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)removeClient:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)reportUserInteraction:(id)arg1 forClient:(id)arg2 domain:(unsigned long long)arg3;
- (id)serverDataForDomains:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
