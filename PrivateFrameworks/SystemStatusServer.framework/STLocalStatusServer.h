
@interface STLocalStatusServer : NSObject <BSDescriptionProviding, STStatusDomainPublisherServerHandle, STStatusDomainServerHandle> {
    NSMapTable * _changeLogKeysByPublisherClient;
    NSMutableDictionary * _clientDataTransformerProvidersByDomain;
    NSObject<OS_dispatch_queue> * _clientQueue;
    BSMutableIntegerMap * _clientsByDomain;
    STStatusDomainDataChangeLog * _dataChangeLog;
    NSMutableDictionary * _dataTransformersByDomain;
    <STLocalStatusServerDelegate> * _delegate;
    NSMutableDictionary * _domainsByChangeLogKey;
    NSObject<OS_dispatch_queue> * _internalQueue;
    BSMutableIntegerMap * _publisherClientsByDomain;
    STStatusDomainPublisherXPCClientListener * _publisherXPCClientListener;
    STStatusDomainXPCClientListener * _xpcClientListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <STLocalStatusServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BSIntegerSet *publishedDomains;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addClientDataTransformerProvider:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)addDataTransformer:(id)arg1 forDomain:(unsigned long long)arg2;
- (id)dataForDomain:(unsigned long long)arg1;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)modifyClientDataTransformerProvider:(id)arg1 forDomain:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)modifyDataTransformer:(id)arg1 forDomain:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)publishData:(id)arg1 forPublisherClient:(id)arg2 domain:(unsigned long long)arg3 withChangeContext:(id)arg4 completion:(id /* block */)arg5;
- (void)publishVolatileData:(id)arg1 forPublisherClient:(id)arg2 domain:(unsigned long long)arg3 withChangeContext:(id)arg4 completion:(id /* block */)arg5;
- (id)publishedDataForDomain:(unsigned long long)arg1;
- (id)publishedDomains;
- (id)publishedVolatileDataForDomain:(unsigned long long)arg1;
- (void)registerClient:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)registerPublisherClient:(id)arg1 forDomain:(unsigned long long)arg2 fallbackData:(id)arg3;
- (void)removeClient:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)removeClientDataTransformerProvider:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)removeDataTransformer:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)removePublisherClient:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)reportUserInteraction:(id)arg1 forClient:(id)arg2 domain:(unsigned long long)arg3;
- (void)setDelegate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateDataForPublisherClient:(id)arg1 domain:(unsigned long long)arg2 usingDiffProvider:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)updateVolatileDataForPublisherClient:(id)arg1 domain:(unsigned long long)arg2 usingDiffProvider:(id /* block */)arg3 completion:(id /* block */)arg4;

@end
