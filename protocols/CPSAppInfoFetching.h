
@protocol CPSAppInfoFetching <NSObject>

@required

- (void)evictCachedMetadataForClipBundleID:(NSString *)arg1;
- (void)lookUpClipMetadataByBundleID:(void *)arg1 sourceBundleID:(void *)arg2 URL:(void *)arg3 downloadIconIfNeeded:(void *)arg4 skipCaching:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSString *, NSURL *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPSClipMetadata *, NSError *, void*
- (void)lookUpClipMetadataByBundleID:(void *)arg1 sourceBundleID:(void *)arg2 downloadIconIfNeeded:(void *)arg3 skipCaching:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSString *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPSClipMetadata *, NSError *, void*

@end
