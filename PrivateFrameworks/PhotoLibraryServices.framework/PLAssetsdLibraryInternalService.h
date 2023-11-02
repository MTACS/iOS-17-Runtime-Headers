
@interface PLAssetsdLibraryInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdLibraryInternalServiceProtocol> {
    PLAssetsdConnectionAuthorization * _connectionAuthorization;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_assetCountInManagedObjectContext:(id)arg1 forSyncedAssets:(bool)arg2;
- (void)applyGraphUpdates:(id)arg1 supportingData:(id)arg2 reply:(id /* block */)arg3;
- (void)applySearchIndexUpdates:(id)arg1 reply:(id /* block */)arg2;
- (void)assetsArePendingForDuplicateMergeProcessing:(id)arg1 reply:(id /* block */)arg2;
- (void)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet;
- (void)coreAnalyticsLibrarySummaryDataWithCompletionHandler:(id /* block */)arg1;
- (void)deleteiTunesSyncedContentWithCompletionHandler:(id /* block */)arg1;
- (void)forceRunBackgroundJobsOnLibraryPath:(id)arg1 criteriaShortCode:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getAssetCountsWithReply:(id /* block */)arg1;
- (void)getBackgroundJobServiceBundlesInQueueDictionaryWithReply:(id /* block */)arg1;
- (void)getBackgroundJobServiceStateWithReply:(id /* block */)arg1;
- (void)getBackgroundJobServiceStatusCenterDumpWithReply:(id /* block */)arg1;
- (void)getLibrarySizesFromDB:(bool)arg1 reply:(id /* block */)arg2;
- (void)getSearchIndexProgressWithReply:(id /* block */)arg1;
- (void)getSearchIndexRebuildInfoWithReply:(id /* block */)arg1;
- (void)getSizeOfResourcesToUploadByCPLWithReply:(id /* block */)arg1;
- (id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2;
- (void)invalidateBehavioralScoreOnAllAssetsWithReply:(id /* block */)arg1;
- (void)invalidateReverseLocationDataOnAllAssetsWithReply:(id /* block */)arg1;
- (void)markPersonAsNeedingKeyFaceWithPersonUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)mergeDuplicateAssetUuidSelection:(id)arg1 reply:(id /* block */)arg2;
- (void)metricsForLibraryAtURL:(id)arg1 reply:(id /* block */)arg2;
- (void)processIdenticalDuplicatesWithProcessingType:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)arg1 reply:(id /* block */)arg2;
- (void)reloadMomentGenerationOptions;
- (void)repairMemoriesWithUUIDs:(id)arg1 reply:(id /* block */)arg2;
- (void)resetLimitedLibraryAccessForApplication:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAssetKeywords:(id)arg1 forAssetUUID:(id)arg2 reply:(id /* block */)arg3;
- (void)setFetchFilterWithAssets:(id)arg1 forApplication:(id)arg2 withAuditToken:(struct { unsigned int x1[8]; })arg3 completionHandler:(id /* block */)arg4;
- (void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)updateAssetLocationDataWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)waitForSearchIndexExistenceWithReply:(id /* block */)arg1;

@end
