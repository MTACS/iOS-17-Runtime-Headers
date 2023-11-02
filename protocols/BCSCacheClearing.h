
@protocol BCSCacheClearing <NSObject>

@required

- (void)clearCachesForLinkItemsAssociatedWithBundleID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)clearCachesForType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)clearExpiredCachesForType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
