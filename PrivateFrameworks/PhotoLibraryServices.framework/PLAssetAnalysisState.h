
@interface PLAssetAnalysisState : PLManagedObject

@property (nonatomic) int analysisState;
@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, retain) NSString *assetUUID;
@property (nonatomic, retain) NSDate *ignoreUntilDate;
@property (nonatomic, retain) NSDate *lastIgnoredDate;
@property (nonatomic) double sortToken;
@property (nonatomic) int workerFlags;
@property (nonatomic) short workerType;

+ (id)_batchOperationQueue;
+ (bool)_bulkUpdateAnalysisStatesTo:(int)arg1 predicate:(id)arg2 library:(id)arg3 error:(id*)arg4;
+ (id)_countOfAnalysisStatesByWorkerTypeWithPredicate:(id)arg1 analysisState:(int)arg2 forDeletedAssets:(bool)arg3 inContext:(id)arg4 error:(id*)arg5;
+ (unsigned long long)_countOfAssetsAllowedForProcessingInLibrary:(id)arg1 error:(id*)arg2;
+ (id)_managedObjectContextForStateChangesWithLibraryURL:(id)arg1;
+ (id)_managedObjectContextForStateChangesWithPersistentStoreCoordinator:(id)arg1;
+ (void)_removeAnalysisRecordsWithPredicate:(id)arg1 library:(id)arg2;
+ (id)_sanitizeChanges:(id)arg1;
+ (id)_subArrayOfChanges:(id)arg1 toRetryWithConflicts:(id)arg2;
+ (id)analysisCountsForWorkerType:(short)arg1 library:(id)arg2;
+ (id)assetUUIDsFromAssetObjectIDs:(id)arg1 library:(id)arg2 whereAllWorkerTypes:(id)arg3 matchState:(id)arg4;
+ (bool)cleanupInvalidIgnoreUntilDatesInLibraryAtURL:(id)arg1 error:(id*)arg2;
+ (bool)clearIgnoreUntilDatesInLibraryAtURL:(id)arg1 error:(id*)arg2;
+ (int)defaultWorkerFlagsForWorkerType:(short)arg1;
+ (id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg1 fetchLimit:(unsigned long long)arg2 inLibrary:(id)arg3 error:(id*)arg4;
+ (id)entityName;
+ (bool)isUnitTestWorker:(short)arg1;
+ (id)keyPathDictionaryWithWorkerType:(short)arg1 workerFlags:(int)arg2 analysisState:(int)arg3 lastIgnoredDate:(id)arg4 ignoreUntilDate:(id)arg5;
+ (bool)markStatesProcessedForWorkerType:(short)arg1 library:(id)arg2 error:(id*)arg3;
+ (void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 forWorkerType:(short)arg2 library:(id)arg3;
+ (void)removeAnalysisRecordsWithNoAssetOrUUIDUseMaintenanceMode:(bool)arg1 library:(id)arg2;
+ (void)requestAnalysisCountsInLibrary:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestCountOfAnalysisRecordsForDeletedAssetsInLibrary:(id)arg1 completion:(id /* block */)arg2;
+ (bool)resetFaceCropAnalysisStateInLibraryAtURL:(id)arg1 error:(id*)arg2;
+ (bool)resetPendingStatesInLibraryAtURL:(id)arg1 error:(id*)arg2;
+ (id)workerTypesPersistingAnalysisState;

- (id)debugLogDescription;
- (id)mutableKeyPathDictionary;
- (void)unionWorkerFlags:(int)arg1;

@end
