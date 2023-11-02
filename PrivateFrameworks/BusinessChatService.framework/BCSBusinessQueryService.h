
@interface BCSBusinessQueryService : NSObject {
    NSString * _clientBundleIdentifier;
    <BCSXPCDaemonConnectionProtocol> * _connection;
    NSDate * _lastTimeoutDate;
}

- (void).cxx_destruct;
- (void)_deleteInMemoryCache;
- (void)_isBusinessRegisteredForURL:(id)arg1 chopURL:(bool)arg2 completion:(id /* block */)arg3;
- (id)businessItemForPhoneNumber:(id)arg1 isChatSuggestVisible:(bool*)arg2 error:(id*)arg3;
- (id)businessItemForPhoneNumber:(id)arg1 isMessageable:(bool*)arg2 isChatSuggestVisible:(bool*)arg3 error:(id*)arg4;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)clearCachesForType:(long long)arg1 completion:(id /* block */)arg2;
- (void)clearExpiredCachesForType:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchBusinessCallerMetadataWithPhoneNumber:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchBusinessItemForPhoneNumber:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchBusinessItemWithPhoneNumber:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchLinkItemWithHash:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchLinkItemWithURL:(id)arg1 chopURL:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchLinkItemWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSquareIconDataForBusinessItem:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithConnection:(id)arg1 clientBundleIdentifier:(id)arg2;
- (void)isBusinessCallerRegisteredForPhoneNumber:(id)arg1 completion:(id /* block */)arg2;
- (void)isBusinessRegisteredForPhoneNumber:(id)arg1 completion:(id /* block */)arg2;
- (void)isBusinessRegisteredForURL:(id)arg1 chopURL:(bool)arg2 completion:(id /* block */)arg3;
- (void)isBusinessRegisteredForURL:(id)arg1 completion:(id /* block */)arg2;
- (void)prefetchBloomFilterAndConfigCacheWithCompletion:(id /* block */)arg1;
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)arg1;

@end
