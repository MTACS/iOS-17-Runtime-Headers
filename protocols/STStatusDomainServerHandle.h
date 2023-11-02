
@protocol STStatusDomainServerHandle <NSObject>

@required

- (<STStatusDomainData> *)dataForDomain:(unsigned long long)arg1;
- (void)registerClient:(id <STStatusDomainClientHandle>)arg1 forDomain:(unsigned long long)arg2;
- (void)removeClient:(id <STStatusDomainClientHandle>)arg1 forDomain:(unsigned long long)arg2;
- (void)reportUserInteraction:(id <STStatusDomainUserInteraction>)arg1 forClient:(id <STStatusDomainClientHandle>)arg2 domain:(unsigned long long)arg3;

@end
