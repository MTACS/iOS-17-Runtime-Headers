
@protocol NSFileProviderExtension_Private <NSObject>

@optional

- (void)_additionalDumpInfoWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (NSProgress *)_defaultApplicationContainerForBundleIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NSFileProviderItem> *, NSError *, void*
- (void)_dumpInternalStateToTermDumper:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: FPCTLTermDumper *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<NSFileProviderItem> *)_propertiesForItemAtURL:(NSURL *)arg1 error:(id*)arg2;
- (void)_removeTrashedItemsOlderThanDate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)attemptRecoveryFromError:(void *)arg1 optionIndex:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)changeItem:(void *)arg1 baseVersion:(void *)arg2 changedFields:(void *)arg3 contents:(void *)arg4 options:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 14: <NSFileProviderItem> *, NSFileProviderItemVersion *, unsigned long long, NSURL *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NSFileProviderItem> *, unsigned long long, bool, NSError *, void*
- (NSArray *)customPushTopics;
- (NSProgress *)disconnectWithOptions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)evictItemWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NSFileProviderItem> *, NSError *, void*
- (NSProgress *)fetchPublishingURLForItemIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (NSProgress *)fetchThumbnailsForItemIdentifiers:(void *)arg1 requestedSize:(void *)arg2 perThumbnailCompletionHandlerWithType:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 17: NSArray *, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSData *, NSString *, NSError *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)fetchTrashIdentifiersWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)handleEventsForBackgroundURLSession:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)movingItemAtURL:(void *)arg1 requiresProvidingWithDestinationURL:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)preflightReparentItemWithIdentifier:(void *)arg1 toParentItemWithIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)preflightTrashItemWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)reparentItemWithIdentifier:(void *)arg1 toParentItemWithIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NSFileProviderItem> *, NSError *, void*
- (void)startProvidingItemAtURL:(void *)arg1 readingOptions:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)waitForStabilizationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
