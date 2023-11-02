
@protocol BCSXPCDaemonProtocol

@required

- (void)_deleteInMemoryCache;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)clearCachesForType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)clearExpiredCachesForType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchBusinessCallerMetadataForPhoneNumber:(void *)arg1 forClientBundleID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCSBusinessCallerItem *, NSError *, void*
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(void *)arg1 forClientBundleID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCSBusinessItem *, bool, NSError *, void*
- (void)fetchBusinessItemWithPhoneNumber:(void *)arg1 forClientBundleID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCSBusinessItem *, NSError *, void*
- (void)fetchIsBusinessPhoneNumber:(void *)arg1 forClientBundleID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchLinkItemModelWithHash:(void *)arg1 forClientBundleID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCSLinkItemModel *, NSError *, void*
- (void)fetchLinkItemModelWithURL:(void *)arg1 chopURL:(void *)arg2 forClientBundleID:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSURL *, bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCSLinkItemModel *, NSError *, void*
- (void)fetchSquareIconDataForBusinessItem:(void *)arg1 forClientBundleID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: BCSBusinessItem *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)isBusinessCallerRegisteredForPhoneNumber:(void *)arg1 forClientBundleID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)isBusinessRegisteredForURL:(void *)arg1 chopURL:(void *)arg2 forClientBundleID:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 12: NSURL *, bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSDictionary *, NSError *, void*
- (void)prefetchMegashardsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)warmCacheIfNecessaryForPhoneNumbers:(NSArray *)arg1 forClientBundleID:(NSString *)arg2;

@end
