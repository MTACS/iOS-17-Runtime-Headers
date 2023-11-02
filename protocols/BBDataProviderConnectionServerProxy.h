
@protocol BBDataProviderConnectionServerProxy <NSObject>

@required

- (void)addDataProviderWithSectionID:(void *)arg1 clientProxy:(void *)arg2 identity:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, <BBRemoteDataProviderClientProxy> *, BBDataProviderIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BBRemoteDataProviderServerProxy> *, void*
- (void)addParentSectionFactory:(BBParentSectionDataProviderFactory *)arg1;
- (void)clientIsReady:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removeDataProviderWithSectionID:(NSString *)arg1;

@end
