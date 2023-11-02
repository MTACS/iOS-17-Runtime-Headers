
@interface PLSpotlightProgressManager : NSObject

+ (bool)_addSearchableItemIdentifiers:(id)arg1 operationType:(unsigned long long)arg2 forPhotoLibraryPathManager:(id)arg3 isRetry:(bool)arg4;
+ (id)_minimumScheduledDateForNextReindexRetry;
+ (id)_readProgressFromDiskForPhotoLibraryPathManager:(id)arg1;
+ (bool)_shouldRetryReindexWithScheduledDateOf:(id)arg1;
+ (bool)_shouldRetryRequestWithMostRecentAttemptOf:(id)arg1;
+ (id)_storageKeyForOperationType:(unsigned long long)arg1;
+ (id)_updateFailureCountsForSearchableItemIdentifiers:(id)arg1 shouldIncrementCounts:(bool)arg2 forPhotoLibraryPathManager:(id)arg3;
+ (bool)_writeProgressToDisk:(id)arg1 forPhotoLibraryPathManager:(id)arg2;
+ (bool)addSearchableItemIdentifiers:(id)arg1 forOperationType:(unsigned long long)arg2 forPhotoLibraryPathManager:(id)arg3;
+ (bool)deleteSpotlightProgressForPhotoLibraryPathManager:(id)arg1;
+ (bool)didPreviouslySetSpotlightNeedsIndexRebuild;
+ (id)lastKnownSystemPhotoLibraryPath;
+ (bool)removeSearchableItemIdentifiers:(id)arg1 forPhotoLibraryPathManager:(id)arg2;
+ (bool)setSpotlightIndexNeedsReindexing:(bool)arg1 forPhotoLibraryPathManager:(id)arg2;
+ (void)setUniversalSearchEligibility:(bool)arg1 systemPhotoLibraryPath:(id)arg2 systemPhotoLibraryDatabaseUUID:(id)arg3 needsSpotlightIndexDrop:(bool)arg4 needsSpotlightIndexRebuild:(bool)arg5;
+ (bool)shouldPerformSpotlightOperationOfType:(unsigned long long)arg1 withSearchableItemIdentifiers:(id)arg2 photoLibraryPathManager:(id)arg3;
+ (bool)shouldPerformSpotlightOperationsWithPhotoLibraryPathManager:(id)arg1;
+ (bool)shouldReindexSpotlightIndexForPhotoLibraryPathManager:(id)arg1;
+ (bool)shouldRetrySpotlightIndexDropForUniversalSearchEligibilityChange;
+ (bool)spotlightOperationCompletedForOperationType:(unsigned long long)arg1 withSearchableIdentifiers:(id)arg2 forPhotoLibraryPathManager:(id)arg3 success:(bool)arg4;
+ (void)spotlightProgressForPhotoLibraryPathManager:(id)arg1 completion:(id /* block */)arg2;
+ (bool)spotlightResetOperationCompletedForPhotoLibraryPathManager:(id)arg1 success:(bool)arg2;
+ (bool)universalSearchEligibilityDidChangeForSPLWithDatabaseUUID:(id)arg1 currentSPLPath:(id)arg2 currentEligibility:(bool)arg3;

@end
