
@protocol STStatusDomainPublisherXPCServer <NSObject>

@required

- (void)publishData:(void *)arg1 forDomain:(void *)arg2 withChangeContext:(void *)arg3 discardingOnExit:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 9: <STStatusDomainData> *, unsigned long long, <STStatusDomainDataChangeContext> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)publishDiff:(void *)arg1 forDomain:(void *)arg2 withChangeContext:(void *)arg3 replacingData:(void *)arg4 discardingOnExit:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 10: <STStatusDomainDataDiff> *, unsigned long long, <STStatusDomainDataChangeContext> *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)registerToPublishDomain:(unsigned long long)arg1 fallbackData:(id <STStatusDomainData><STStatusDomainDataDifferencing>)arg2;
- (void)unregisterFromPublishingDomain:(unsigned long long)arg1;

@end
