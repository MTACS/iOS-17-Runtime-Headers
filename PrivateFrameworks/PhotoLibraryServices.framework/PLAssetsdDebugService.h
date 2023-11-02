
@interface PLAssetsdDebugService : PLAbstractLibraryServicesManagerService <PLAssetsdDebugServiceProtocol> {
    PLPhotoLibraryBundleController * _bundleController;
    PLAssetsdConnectionAuthorization * _connectionAuthorization;
    PLAssetsdCPLResourceDownloader * _resourceDownloader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_persistentStoreCoordinator;
- (void)archiveComputeCacheWithReply:(id /* block */)arg1;
- (void)asynchronousUnloadImageFilesForAssetWithObjectURI:(id)arg1 minimumFormat:(unsigned short)arg2 reply:(id /* block */)arg3;
- (void)backgroundMigrationWithReply:(id /* block */)arg1;
- (void)cleanupEmptyHighlightsWithReply:(id /* block */)arg1;
- (void)clearPrefetchState;
- (void)coalesceJournalsForManagerName:(id)arg1 payloadClassIDs:(id)arg2 withChangeJournalOverThreshold:(float)arg3 reply:(id /* block */)arg4;
- (void)computeCacheStatusWithReply:(id /* block */)arg1;
- (void)debugSidecarURLsWithObjectURI:(id)arg1 reply:(id /* block */)arg2;
- (void)deferredLogDumpWithFormat:(id)arg1 reply:(id /* block */)arg2;
- (void)donateSearchEntitiesToSpotlightWithReply:(id /* block */)arg1;
- (void)dropSearchIndexWithReply:(id /* block */)arg1;
- (void)dumpMetadataForMomentsToPath:(id)arg1 reply:(id /* block */)arg2;
- (void)dumpMomentsMetadataToPath:(id)arg1 reply:(id /* block */)arg2;
- (void)enqueuePrefetch;
- (void)getCPLStateForDebug:(bool)arg1 withReply:(id /* block */)arg2;
- (void)getTaskConstraintStatusWithReply:(id /* block */)arg1;
- (void)getXPCTransactionStatusWithReply:(id /* block */)arg1;
- (void)identifyAssetsWithInconsistentCloudState;
- (id)initWithLibraryServicesManager:(id)arg1 resourceDownloader:(id)arg2 bundleController:(id)arg3 connectionAuthorization:(id)arg4;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(id /* block */)arg1;
- (void)momentGenerationStatusWithReply:(id /* block */)arg1;
- (void)prefetchResourcesForHighlights:(id)arg1 reply:(id /* block */)arg2;
- (void)prefetchResourcesForMemories:(id)arg1 reply:(id /* block */)arg2;
- (void)prefetchResourcesWithMode:(long long)arg1 reply:(id /* block */)arg2;
- (void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(bool)arg3 reply:(id /* block */)arg4;
- (void)processRecentHighlightsWithReply:(id /* block */)arg1;
- (void)processUnprocessedMomentLocationsWithReply:(id /* block */)arg1;
- (void)pruneAssetsWithUUID:(id)arg1 resourceTypes:(id)arg2 reply:(id /* block */)arg3;
- (void)rebuildAllThumbnails;
- (void)rebuildCloudFeedWithReply:(id /* block */)arg1;
- (void)rebuildHighlightsDeletingExistingHighlights:(bool)arg1 reply:(id /* block */)arg2;
- (void)rebuildMomentsDeletingExistingMoments:(bool)arg1 reply:(id /* block */)arg2;
- (void)rebuildSearchIndexWithReply:(id /* block */)arg1;
- (void)rebuildTableThumbsWithReply:(id /* block */)arg1;
- (void)recoverAssetsInInconsistentCloudState;
- (void)removeAllThumbnailsForDryRun:(bool)arg1 reply:(id /* block */)arg2;
- (void)resetComputeCacheWithReply:(id /* block */)arg1;
- (void)resetDupesAnalysis;
- (void)resetMaintenanceTasksWithReply:(id /* block */)arg1;
- (void)restoreComputeCacheWithReply:(id /* block */)arg1;
- (void)revertToOriginalWithObjectURI:(id)arg1 reply:(id /* block */)arg2;
- (void)runMaintenanceTask:(id)arg1 reply:(id /* block */)arg2;
- (void)setSearchIndexPaused:(bool)arg1 reason:(id)arg2 reply:(id /* block */)arg3;
- (void)snapshotJournalsForManagerName:(id)arg1 payloadClassIDs:(id)arg2 reply:(id /* block */)arg3;
- (void)statusWithReply:(id /* block */)arg1;
- (void)syndicationIngestMutexStateDescriptionWithReply:(id /* block */)arg1;
- (void)updateHighlightTitlesWithReply:(id /* block */)arg1;
- (void)waitForMomentGenerationWithReply:(id /* block */)arg1;

@end
