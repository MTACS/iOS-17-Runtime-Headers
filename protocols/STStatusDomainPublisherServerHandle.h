
@protocol STStatusDomainPublisherServerHandle <NSObject>

@required

- (void)publishData:(void *)arg1 forPublisherClient:(void *)arg2 domain:(void *)arg3 withChangeContext:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 9: <STStatusDomainData><STStatusDomainDataDifferencing> *, <STStatusDomainPublisherClientHandle> *, unsigned long long, <STStatusDomainDataChangeContext> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)publishVolatileData:(void *)arg1 forPublisherClient:(void *)arg2 domain:(void *)arg3 withChangeContext:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 9: <STStatusDomainData><STStatusDomainDataDifferencing> *, <STStatusDomainPublisherClientHandle> *, unsigned long long, <STStatusDomainDataChangeContext> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<STStatusDomainData><STStatusDomainDataDifferencing> *)publishedDataForDomain:(unsigned long long)arg1;
- (<STStatusDomainData><STStatusDomainDataDifferencing> *)publishedVolatileDataForDomain:(unsigned long long)arg1;
- (void)registerPublisherClient:(id <STStatusDomainPublisherClientHandle>)arg1 forDomain:(unsigned long long)arg2 fallbackData:(id <STStatusDomainData><STStatusDomainDataDifferencing>)arg3;
- (void)removePublisherClient:(id <STStatusDomainPublisherClientHandle>)arg1 forDomain:(unsigned long long)arg2;
- (void)updateDataForPublisherClient:(void *)arg1 domain:(void *)arg2 usingDiffProvider:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 14: <STStatusDomainPublisherClientHandle> *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <STStatusDomainDataDiff> *, id /* block */, <STStatusDomainData><STStatusDomainDataDifferencing> *, id*, void*, id /* block */, void*, void, id /* block */, void*
- (void)updateVolatileDataForPublisherClient:(void *)arg1 domain:(void *)arg2 usingDiffProvider:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 14: <STStatusDomainPublisherClientHandle> *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <STStatusDomainDataDiff> *, id /* block */, <STStatusDomainData><STStatusDomainDataDifferencing> *, id*, void*, id /* block */, void*, void, id /* block */, void*

@end
