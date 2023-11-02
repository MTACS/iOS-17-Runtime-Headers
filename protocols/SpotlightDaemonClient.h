
@protocol SpotlightDaemonClient

@required

- (void)provideDataForBundleID:(void *)arg1 protectionClass:(void *)arg2 itemIdentifier:(void *)arg3 typeIdentifier:(void *)arg4 options:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSString *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)provideFileURLForBundleID:(void *)arg1 protectionClass:(void *)arg2 itemIdentifier:(void *)arg3 typeIdentifier:(void *)arg4 options:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSString *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)reindexAllItemsForBundleID:(void *)arg1 protectionClass:(void *)arg2 acknowledgementHandler:(void *)arg3; // needs 3 arg types, found 7: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)reindexItemsWithIdentifiers:(void *)arg1 bundleID:(void *)arg2 protectionClass:(void *)arg3 acknowledgementHandler:(void *)arg4; // needs 4 arg types, found 8: NSArray *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
