
@protocol NSFileProviderReplicatedExtension <NSObject, NSFileProviderEnumerating>

@required

- (NSProgress *)createItemBasedOnTemplate:(void *)arg1 fields:(void *)arg2 contents:(void *)arg3 options:(void *)arg4 request:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 14: <NSFileProviderItem> *, unsigned long long, NSURL *, unsigned long long, NSFileProviderRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NSFileProviderItem> *, unsigned long long, bool, NSError *, void*
- (NSProgress *)deleteItemWithIdentifier:(void *)arg1 baseVersion:(void *)arg2 options:(void *)arg3 request:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSFileProviderItemVersion *, unsigned long long, NSFileProviderRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSProgress *)fetchContentsForItemWithIdentifier:(void *)arg1 version:(void *)arg2 request:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSFileProviderItemVersion *, NSFileProviderRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, <NSFileProviderItem> *, NSError *, void*
- (id)initWithDomain:(NSFileProviderDomain *)arg1;
- (void)invalidate;
- (NSProgress *)itemForIdentifier:(void *)arg1 request:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSFileProviderRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NSFileProviderItem> *, NSError *, void*
- (NSProgress *)modifyItem:(void *)arg1 baseVersion:(void *)arg2 changedFields:(void *)arg3 contents:(void *)arg4 options:(void *)arg5 request:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 15: <NSFileProviderItem> *, NSFileProviderItemVersion *, unsigned long long, NSURL *, unsigned long long, NSFileProviderRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NSFileProviderItem> *, unsigned long long, bool, NSError *, void*

@optional

- (void)importDidFinishWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)materializedItemsDidChangeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)pendingItemsDidChangeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
