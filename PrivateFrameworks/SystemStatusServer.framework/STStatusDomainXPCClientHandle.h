
@interface STStatusDomainXPCClientHandle : NSObject <STStatusDomainClientHandle, STStatusDomainXPCServer> {
    NSArray * _cachedPreferredLocalizations;
    NSXPCConnection * _clientXPCConnection;
    BSMutableIntegerMap * _dataByDomain;
    NSSet * _entitledDomains;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableSet * _observingDomains;
    <STStatusDomainServerHandle> * _serverHandle;
}

@property (nonatomic, copy) NSArray *cachedPreferredLocalizations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *preferredLocalizations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedPreferredLocalizations;
- (id)initWithXPCConnection:(id)arg1 serverHandle:(id)arg2;
- (void)observeData:(id)arg1 forDomain:(unsigned long long)arg2 withChangeContext:(id)arg3;
- (void)observeDomain:(id)arg1 withPreferredLocalizations:(id)arg2;
- (id)preferredLocalizations;
- (void)reportUserInteraction:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)serverDataForDomains:(id)arg1 reply:(id /* block */)arg2;
- (void)setCachedPreferredLocalizations:(id)arg1;
- (void)stopObservingDomain:(id)arg1;

@end
