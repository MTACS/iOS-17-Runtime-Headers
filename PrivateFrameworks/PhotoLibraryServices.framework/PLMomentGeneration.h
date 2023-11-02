
@interface PLMomentGeneration : NSObject {
    PLDateRangeTitleGenerator * _dateRangeTitleGenerator;
    unsigned long long  _inProgressCount;
    NSObject<OS_dispatch_queue> * _incrementalGenerationStateQueue;
    PLMomentGenerationThrottle * _incrementalMomentGenThrottle;
    PLLazyObject * _lazyFrequentLocationManager;
    PLLazyObject * _lazyLocalCreationDateCreator;
    PLPhotoLibraryBundle * _libraryBundle;
    <PLMomentGenerationDataManagement><PLHighlightItemModelReader> * _momentGenerationDataManager;
    NSMutableArray * _pendingCompletionBlocks;
    NSMutableDictionary * _pendingDeletes;
    NSMutableOrderedSet * _pendingInsertsAndUpdates;
    NSMutableOrderedSet * _pendingMomentUpdatesForHighlights;
    NSMutableDictionary * _pendingSharedAssetContainerIncrementalChanges;
    NSMutableOrderedSet * _pendingUpdatesForHighlights;
}

@property (nonatomic, readonly) <PLMomentGenerationDataManagement><PLHighlightItemModelReader> *momentGenerationDataManager;

+ (id)dateIntervalsAroundSortedDates:(id)arg1 minimumIntervalDuration:(double)arg2;

- (void).cxx_destruct;
- (void)_appendAssetsToReplayLog:(id)arg1 forBatchUpdate:(bool)arg2;
- (void)_clearReplayLog;
- (id)_detailsForAsset:(id)arg1 simpleOnly:(bool)arg2;
- (id)_detailsForMoment:(id)arg1;
- (bool)_hasWorkWorkRemainingWithCompletionBlocks:(id*)arg1;
- (id)_highlightGenerator;
- (bool)_isAsset:(id)arg1 identicalToAssetForMoments:(id)arg2;
- (id)_logEntryForAssets:(id)arg1 isBatchUpdate:(bool)arg2;
- (id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)arg1;
- (void)_runIncrementalGenerationPassWithCompletionHandler:(id /* block */)arg1;
- (void)_runIncrementalMomentGenerationIfItemsArePendingWithCompletion:(id /* block */)arg1;
- (void)_runMomentAndHighlightGenerationForAssets:(id)arg1 hiddenAssets:(id)arg2 updatedAssetIDsForHighlights:(id)arg3 updatedMomentIDsForHighlights:(id)arg4 affectedMoments:(id)arg5 highlightsWithDeletedMoments:(id)arg6 sharedAssetContainerIncrementalChanges:(id)arg7 insertedOrUpdatedMoments:(id*)arg8;
- (void)_updateIncrementalMomentGeneration;
- (bool)_writeDetails:(id)arg1 toFilepath:(id)arg2 withDefaultFilename:(id)arg3;
- (id)allAssetMetadataWriteToFile:(id)arg1;
- (id)allMomentsMetadataWriteToFile:(id)arg1;
- (void)cleanupEmptyHighlightsWithCompletionBlock:(id /* block */)arg1;
- (id)frequentLocationManager;
- (void)generateWithAssetInsertsAndUpdates:(id)arg1 assetDeletes:(id)arg2 assetUpdatesForHighlights:(id)arg3 momentUpdatesForHighlights:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)generateWithIncrementalDataCompletionHandler:(id /* block */)arg1;
- (id)initWithMomentGenerationDataManager:(id)arg1 bundle:(id)arg2;
- (id)initWithMomentGenerationDataManager:(id)arg1 bundle:(id)arg2 locale:(id)arg3;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(id /* block */)arg1;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithForceUpdateLocale:(bool)arg1 completionBlock:(id /* block */)arg2;
- (bool)isGenerationPassInProgress;
- (id)localCreationDateCreator;
- (id)momentGenerationDataManager;
- (id)momentGenerationStatus;
- (id)newFrequentLocationManager;
- (id)newLocalCreationDateCreator;
- (void)processRecentHighlightsWithCompletionBlock:(id /* block */)arg1;
- (void)processUnprocessedMomentLocationsWithCompletionBlock:(id /* block */)arg1;
- (void)rebuildAllHighlightsWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)rebuildAllMomentsWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)regenerateMonthHighlightTitlesWithManager:(id)arg1 error:(id*)arg2;
- (void)releaseMemoryIntensiveObjects;
- (void)saveChangesForAssetInsertsAndUpdates:(id)arg1 assetDeletes:(id)arg2 assetUpdatesForHighlights:(id)arg3 momentUpdatesForHighlights:(id)arg4 sharedAssetContainerIncrementalChangesByAssetID:(id)arg5;
- (void)updateHighlightTitlesWithCompletionBlock:(id /* block */)arg1;
- (void)validateLibraryWithCompletionBlock:(id /* block */)arg1;

@end
