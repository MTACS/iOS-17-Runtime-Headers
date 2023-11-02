
@interface STStatusDomainPublisherXPCClientHandle : NSObject <STStatusDomainPublisherClientHandle, STStatusDomainPublisherXPCServer> {
    NSXPCConnection * _clientXPCConnection;
    BSMutableIntegerMap * _dataByDomain;
    NSSet * _entitledDomains;
    BSMutableIntegerMap * _fallbackDataByDomain;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableSet * _publishingDomains;
    <STStatusDomainPublisherServerHandle> * _serverHandle;
    BSMutableIntegerMap * _volatileDataByDomain;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleUserInteraction:(id)arg1 forDomain:(unsigned long long)arg2;
- (id)initWithXPCConnection:(id)arg1 serverHandle:(id)arg2;
- (void)publishData:(id)arg1 forDomain:(unsigned long long)arg2 withChangeContext:(id)arg3 discardingOnExit:(bool)arg4 reply:(id /* block */)arg5;
- (void)publishDiff:(id)arg1 forDomain:(unsigned long long)arg2 withChangeContext:(id)arg3 replacingData:(bool)arg4 discardingOnExit:(bool)arg5 reply:(id /* block */)arg6;
- (void)registerToPublishDomain:(unsigned long long)arg1 fallbackData:(id)arg2;
- (void)unregisterFromPublishingDomain:(unsigned long long)arg1;

@end
