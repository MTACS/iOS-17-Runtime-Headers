
@interface PLAssetsdLibraryInternalClient : PLAssetsdBaseClient

- (void)applySearchIndexGraphUpdates:(id)arg1 supportingData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)applySearchIndexUpdates:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet:(id*)arg1;
- (void)coreAnalyticsLibrarySummaryDataWithCompletionHandler:(id /* block */)arg1;
- (void)deleteiTunesSyncedContentWithCompletionHandler:(id /* block */)arg1;
- (void)forceRunBackgroundJobsOnLibraryPath:(id)arg1 criteriaShortCode:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getAssetCountsWithReply:(id /* block */)arg1;
- (id)getBackgroundJobServiceBundlesInQueueDictionaryWithError:(id*)arg1;
- (unsigned long long)getBackgroundJobServiceStateWithError:(id*)arg1;
- (id)getBackgroundJobServiceStatusCenterDumpWithError:(id*)arg1;
- (void)getLibrarySizesFromDB:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)getSearchIndexProgress:(id /* block */)arg1;
- (void)getSearchIndexRebuildInfo:(id /* block */)arg1;
- (bool)invalidateBehavioralScoreOnAllAssetsWithError:(id*)arg1;
- (bool)invalidateReverseLocationDataOnAllAssetsWithError:(id*)arg1;
- (void)markPersonAsNeedingKeyFace:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)mergeDuplicateAssetUuidSelection:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)metricsForLibraryAtURL:(id)arg1 error:(id*)arg2;
- (bool)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)arg1 error:(id*)arg2;
- (void)reloadMomentGenerationOptions;
- (bool)repairMemoriesWithUUIDs:(id)arg1 error:(id*)arg2;
- (void)resetLimitedLibraryAccessForApplication:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setFetchFilterWithAssets:(id)arg1 forApplication:(id)arg2 withAuditToken:(struct { unsigned int x1[8]; })arg3 completionHandler:(id /* block */)arg4;
- (bool)setKeywords:(id)arg1 forAssetWithUUID:(id)arg2;
- (void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (bool)synchronouslyCheckAssetsArePendingForDuplicateMergeProcessing:(id)arg1;
- (bool)synchronouslyGetLibrarySizesFromDB:(bool)arg1 sizes:(id*)arg2 error:(id*)arg3;
- (bool)synchronouslyGetSizeOfResourcesToUploadByCPL:(long long*)arg1 error:(id*)arg2;
- (bool)synchronouslyMarkPersonAsNeedingKeyFace:(id)arg1 error:(id*)arg2;
- (bool)synchronouslyProcessIdenticalDuplicatesWithProcessingType:(unsigned long long)arg1 error:(id*)arg2;
- (void)updateAssetLocationDataWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)waitForSearchIndexExistenceWithError:(id*)arg1;

@end
