
@protocol FPDDomainServicing

@required

- (void)_t_setFilePresenterObserver:(id <FPFilePresenterObserver>)arg1;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, double, NSData *, void*
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)didChangeItemID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: FPItemID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)enumerateMaterializedSetFromSyncAnchor:(void *)arg1 suggestedBatchSize:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 13: NSData *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, bool, NSData *, FPExtensionResponse *, NSError *, void*
- (void)enumeratePendingSetFromSyncAnchor:(void *)arg1 suggestedBatchSize:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 15: NSData *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, bool, bool, double, NSData *, FPExtensionResponse *, NSError *, void*
- (void)evictItemWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getDiagnosticAttributesForItems:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)ingestFromCacheItemWithIdentifier:(void *)arg1 requestedFields:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)listAvailableTestingOperationsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)materializeItemWithIdentifier:(void *)arg1 requestedRange:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, struct _NSRange { unsigned long long x1; unsigned long long x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reimportItemsBelowItemWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resolveItemID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: FPItemID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)runTestingOperations:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)setDomainEjectable:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)signalErrorResolved:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startAccessingServiceWithName:(void *)arg1 itemID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: NSString *, FPItemID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, <FPDLifetimeServicing> *, NSError *, void*
- (void)subscribeToDownloadProgressUpdates:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <FPProgressProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)subscribeToUploadProgressUpdates:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <FPProgressProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)temporaryDirectoryWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPSandboxingURLWrapper *, NSError *, void*
- (void)waitForChangesOnItemsBelowItemWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)waitForStabilizationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
