
@interface STStatusDomainPublisherXPCServerHandle : NSObject <BSDescriptionProviding, STStatusDomainPublisherServerHandle, STStatusDomainPublisherXPCClient> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    STStatusDomainDataChangeLog * _dataChangeLog;
    BSMutableIntegerMap * _dataMutationCompletionsByDomain;
    NSObject<OS_dispatch_queue> * _internalQueue;
    BSMutableIntegerMap * _publisherClientsByDomain;
    NSXPCConnection * _serverXPCConnection;
    BSMutableIntegerMap * _volatileDataMutationCompletionsByDomain;
    id /* block */  _xpcConnectionProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedMachServiceServerHandle;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)handleUserInteraction:(id)arg1 forDomain:(unsigned long long)arg2;
- (id)init;
- (id)initWithXPCConnectionProvider:(id /* block */)arg1;
- (void)publishData:(id)arg1 forPublisherClient:(id)arg2 domain:(unsigned long long)arg3 withChangeContext:(id)arg4 completion:(id /* block */)arg5;
- (void)publishVolatileData:(id)arg1 forPublisherClient:(id)arg2 domain:(unsigned long long)arg3 withChangeContext:(id)arg4 completion:(id /* block */)arg5;
- (id)publishedDataForDomain:(unsigned long long)arg1;
- (id)publishedVolatileDataForDomain:(unsigned long long)arg1;
- (void)registerPublisherClient:(id)arg1 forDomain:(unsigned long long)arg2 fallbackData:(id)arg3;
- (void)removePublisherClient:(id)arg1 forDomain:(unsigned long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateDataForPublisherClient:(id)arg1 domain:(unsigned long long)arg2 usingDiffProvider:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)updateVolatileDataForPublisherClient:(id)arg1 domain:(unsigned long long)arg2 usingDiffProvider:(id /* block */)arg3 completion:(id /* block */)arg4;

@end
