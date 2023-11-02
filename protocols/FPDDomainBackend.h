
@protocol FPDDomainBackend <NSObject>

@required

- (void)URLForItemID:(void *)arg1 creatingPlaceholderIfMissing:(void *)arg2 ignoreAlternateContentsURL:(void *)arg3 forBookmarkResolution:(void *)arg4 request:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 13: FPItemID *, bool, bool, bool, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, FPSandboxingURLWrapper *, FPSandboxingURLWrapper *, void*
- (NSData *)backingStoreIdentity;
- (void)bulkItemChanges:(void *)arg1 changedFields:(void *)arg2 request:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSArray *, unsigned long long, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, void*
- (NSArray *)checkableURLs;
- (NSArray *)coordinationRootURLs;
- (void)copyDatabaseToURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (FPDDomainIndexer *)createIndexerWithExtension:(FPDExtension *)arg1 enabled:(bool)arg2 error:(id*)arg3;
- (void)createItemBasedOnTemplate:(void *)arg1 fields:(void *)arg2 urlWrapper:(void *)arg3 options:(void *)arg4 bounceOnCollision:(void *)arg5 request:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 13: FPItem *, unsigned long long, FPSandboxingURLWrapper *, unsigned long long, bool, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (NSURL *)createRootByImportingURL:(NSURL *)arg1 knownFolders:(NSArray *)arg2 error:(id*)arg3;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, double, NSData *, void*
- (NSFileProviderDomainVersion *)domainVersion;
- (void)dumpStateTo:(FPCTLTermDumper *)arg1 limitNumberOfItems:(bool)arg2;
- (void)enumerateMaterializedSetFromSyncAnchor:(void *)arg1 suggestedBatchSize:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 13: NSData *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, bool, NSData *, FPExtensionResponse *, NSError *, void*
- (void)enumeratePendingSetFromSyncAnchor:(void *)arg1 suggestedBatchSize:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 15: NSData *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, bool, bool, double, NSData *, FPExtensionResponse *, NSError *, void*
- (void)enumerateWithSettings:(void *)arg1 lifetimeExtender:(void *)arg2 observer:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: FPExtensionEnumerationSettings *, <FPDLifetimeExtender> *, <FPXEnumeratorObserver> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <FPXEnumerator> *, NSError *, void*
- (NSProgress *)evictItemAtURL:(void *)arg1 request:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItemID *, NSError *, void*
- (void)evictItemWithID:(void *)arg1 request:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: FPItemID *, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchFSItemsForItemIdentifiers:(void *)arg1 materializingIfNeeded:(void *)arg2 request:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSArray *, bool, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchOperationServiceOrEndpointWithRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <FPXOperationService> *, NSXPCListenerEndpoint *, NSError *, void*
- (void)fetchServicesForItemID:(void *)arg1 allowRestrictedSources:(void *)arg2 request:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: FPItemID *, bool, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSArray *, NSError *, void*
- (void)fetchThumbnailsAtURL:(void *)arg1 versions:(void *)arg2 size:(void *)arg3 perThumbnailCompletionHandler:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 20: NSURL *, NSArray *, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSFileProviderItemVersion *, FPSandboxingURLWrapper *, NSString *, NSData *, NSError *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)fetchVendorEndpointWithRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSError *, void*
- (void)forceUpdateBlockedProcessNamesFromDomain:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)hierarchyForURL:(void *)arg1 request:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (id)initWithDomain:(FPDDomain *)arg1;
- (void)invalidate;
- (bool)isDeadEndBackend;
- (bool)isProviderForURL:(NSURL *)arg1;
- (void)itemChangedAtURL:(NSURL *)arg1 request:(FPDRequest *)arg2;
- (void)itemForItemID:(void *)arg1 ignoreAlternateContentsURL:(void *)arg2 request:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: FPItemID *, bool, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (void)itemForURL:(void *)arg1 request:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (void)itemIDForURL:(void *)arg1 requireProviderItemID:(void *)arg2 request:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSURL *, bool, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItemID *, NSError *, void*
- (void)listRemoteVersionsOfItemAtURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSArray *, NSError *, void*
- (void)materializeItemWithID:(void *)arg1 requestedRange:(void *)arg2 request:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: FPItemID *, struct _NSRange { unsigned long long x1; unsigned long long x2; }, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)movingItemAtURL:(void *)arg1 withInfo:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSFileProviderMovingInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileProviderMovingResponse *, void*
- (bool)needsRootsCreation;
- (void)putBackURLForTrashedItemAtURL:(void *)arg1 request:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)reimportItemsBelowItemWithID:(void *)arg1 removeCachedItems:(void *)arg2 markItemDataless:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: FPItemID *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resolveConflictAtURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSArray *)rootURLs;
- (void)setPutBackInfoOnItemAtURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)signalNeedsReindexFromScratchWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSProgress *)startProvidingItemAtURL:(void *)arg1 readerID:(void *)arg2 readingOptions:(void *)arg3 request:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSURL *, id, unsigned long long, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)startWithReason:(NSString *)arg1 error:(id*)arg2;
- (void)stateWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)trashItemAtURL:(void *)arg1 request:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (bool)updateRootAfterDomainChangeWithError:(id*)arg1;
- (void)valuesForAttributes:(void *)arg1 forURL:(void *)arg2 request:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSURL *, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)waitForStabilizationForRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)wakeForPushWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)workingSetDidChangeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

+ (void)registerXPCActivities;

- (void)attachKnownFolders:(void *)arg1 options:(void *)arg2 request:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSArray *, unsigned long long, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)backgroundActivityIsPaused;
- (FPDDomainCleanupResult *)cleanupDomainWithMode:(unsigned long long)arg1 error:(id*)arg2;
- (void)decorateItems:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)detachKnownFolders:(void *)arg1 request:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)didChangeDomainConfiguration:(NSFileProviderDomain *)arg1;
- (void)didChangeItemID:(FPItemID *)arg1;
- (void)didChangeNeedsAuthentification:(bool)arg1;
- (void)didFinishIndexing;
- (void)didIndexOneBatchWithError:(void *)arg1 updatedItems:(void *)arg2 deletedIDs:(void *)arg3 anchor:(void *)arg4 domainVersion:(void *)arg5 anchorPersisted:(void *)arg6; // needs 6 arg types, found 11: NSError *, NSArray *, NSArray *, NSData *, NSFileProviderDomainVersion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)didUpdateAlternateContentsDocumentForDocumentWithURL:(void *)arg1 request:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)downloadItemWithItemID:(void *)arg1 request:(void *)arg2 progress:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: FPItemID *, FPDRequest *, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)downloadVersionWithItemID:(void *)arg1 version:(void *)arg2 originalURL:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: FPItemID *, NSFileProviderItemVersion *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPFileVersion *, NSURL *, NSError *, void*
- (long long)errorGenerationCount;
- (void)fakeFSEventAtURL:(NSURL *)arg1;
- (void)fetchAlternateContentsURLWrapperForDocumentWithURL:(void *)arg1 request:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPSandboxingURLWrapper *, NSError *, void*
- (void)forceFSIngestionForItemID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: FPItemID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (void)forceIngestionAtURL:(NSURL *)arg1;
- (void)forceIngestionForItemID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: FPItemID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (void)getCountersArrayWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getDiagnosticAttributesForItems:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)hasNonUploadedFilesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)importProgressWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPImportProgressReport *, NSError *, void*
- (void)ingestFromCacheItemWithID:(void *)arg1 requestedFields:(void *)arg2 request:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: FPItemID *, unsigned long long, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)listAvailableTestingOperationsWithRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSURL *)materializedURLForItemID:(FPItemID *)arg1;
- (long long)nonEvictableSpace;
- (void)pinItemWithID:(void *)arg1 request:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: FPItemID *, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (NSString *)providerVersion;
- (void)queryDiskImportSchedulerLabelWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)resetCountersWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)runTestingOperations:(void *)arg1 request:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)setAlternateContentsURLWrapper:(void *)arg1 forDocumentWithURL:(void *)arg2 request:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: FPSandboxingURLWrapper *, NSURL *, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItemID *, NSError *, void*
- (void)signalErrorResolved:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)subscribeToDownloadProgressUpdates:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <FPProgressProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)subscribeToUploadProgressUpdates:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <FPProgressProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)telemetryReportWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)temporaryDirectoryURLWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)unpinItemWithID:(void *)arg1 request:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: FPItemID *, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (void)updateShouldRetryThrottledOperations:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)waitForChangesOnItemsBelowItemWithIdentifier:(void *)arg1 request:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, FPDRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)willIndexOneBatch;

@end
