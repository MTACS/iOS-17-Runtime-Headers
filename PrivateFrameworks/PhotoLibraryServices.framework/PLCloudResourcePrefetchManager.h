
@interface PLCloudResourcePrefetchManager : NSObject {
    PLCloudPhotoLibraryManager * _cplManager;
    bool  _enqueuedCheckCPLBGDownload;
    NSDictionary * _inflightResources;
    NSDate * _initialSyncDate;
    bool  _isWalrusEnabled;
    NSDate * _lastCheckCPLBGDownloadDate;
    NSDate * _lastCompletePrefetchDate;
    PLLibraryServicesManager * _lsm;
    PLPrefetchConfiguration * _prefetchConfiguration;
    long long  _prefetchMode;
    long long  _prefetchOptimizeMode;
    PLCloudResourcePruneManager * _pruneManager;
    PLVolumeInfo * _volumeInfo;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)_descriptionForPrefetchMode:(long long)arg1;
+ (id)_identifierForResourceDownload:(id)arg1;
+ (id)_overridePrefetchMode;
+ (bool)_prefetchIsEnabledForPhase:(unsigned long long)arg1 givenMode:(long long)arg2 andInitialSyncDate:(id)arg3;
+ (id)_resourcesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 context:(id)arg3;
+ (id)descriptionForPrefetchPhase:(unsigned long long)arg1;
+ (void)resourcesToPrefetchWithPrefetchPhase:(unsigned long long)arg1 prefetchMode:(long long)arg2 prefetchOptimizeMode:(long long)arg3 initialSyncDate:(id)arg4 lastCompletePrefetchDate:(id)arg5 initialBudget:(long long)arg6 excludeDynamicCPLResources:(bool)arg7 prefetchConfiguration:(id)arg8 photoLibrary:(id)arg9 applyPerPrefetchLimit:(bool)arg10 completionHandler:(id /* block */)arg11;
+ (id)thumbnailResourcesNeedingPrefetchInContext:(id)arg1 maxRetry:(unsigned long long)arg2 limit:(long long)arg3;

- (void).cxx_destruct;
- (void)_addInflightResourceIdentifier:(id)arg1 prefetchPhase:(unsigned long long)arg2 cplResource:(id)arg3;
- (id)_allInflightResourceIdentifiers;
- (bool)_canPrefetch;
- (void)_checkCPLBackgroundDownloadOperations;
- (void)_cleanupInflightResources;
- (unsigned long long)_countOfAllInflightResources;
- (unsigned long long)_countOfInflightResourcesForPrefetchPhase:(unsigned long long)arg1;
- (long long)_diskSpaceBudgetForPrefetchPhase:(unsigned long long)arg1;
- (long long)_diskSpaceBudgetForPrefetchPhase:(unsigned long long)arg1 prefetchOptimizeMode:(long long)arg2;
- (void)_enqueueCheckCPLBGDownloadFromNow:(id)arg1 withReason:(id)arg2;
- (void)_handlePrefetchError:(id)arg1 forPLCloudResourceWithObjectID:(id)arg2;
- (void)_incrementPrefetchCountForPrefetchPhase:(unsigned long long)arg1 resources:(id)arg2 photoLibrary:(id)arg3;
- (id)_inflightResourceIdentifiersForPrefetchPhase:(unsigned long long)arg1;
- (unsigned long long)_intentForPrefetchPhase:(unsigned long long)arg1;
- (bool)_isInflightResourceIdentifier:(id)arg1;
- (bool)_isPrefetchDisabled;
- (bool)_prefetchIsEnabledForPhase:(unsigned long long)arg1;
- (long long)_prefetchOptimizeModeBasedOnLibrarySize;
- (void)_prefetchResources:(id)arg1 photoLibrary:(id)arg2 prefetchPhase:(unsigned long long)arg3 shouldAutoPefetchNextBatch:(bool)arg4;
- (id)_prefetchStatusForDebug:(bool)arg1;
- (void)_reloadDefaultDownload;
- (void)_reloadDownloadOriginalsSetting;
- (void)_removeAllInflightResourceIdentifiers;
- (void)_removeInflightResourceIdentifier:(id)arg1 prefetchPhase:(unsigned long long)arg2 cplResource:(id)arg3;
- (void)_resourcesToPrefetchWithPrefetchPhase:(unsigned long long)arg1 photoLibrary:(id)arg2 applyPerPrefetchLimit:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(id /* block */)arg2;
- (void)_setLastCompletePrefetchDate:(id)arg1;
- (unsigned long long)_smallLibrarySizeThresholdForTotalSizeOfLocallyAvailableOriginalResources:(long long)arg1;
- (void)_startAutomaticPrefetch;
- (void)_startPrefetchNextBatch;
- (long long)_totalSizeOfLocallyAvailableOriginalResources;
- (long long)_totalSizeOfOriginalResources;
- (long long)_totalSizeOfOriginalResourcesForPrefetchWithPredicate:(id)arg1;
- (id)_volumeInfo;
- (void)_writeDownloadFinishedMarkerIfNeeded;
- (void)clearPrefetchState;
- (void)handleCPLConfigurationChange;
- (void)handleCPLStatusChange;
- (void)handleOptimizeModeChange;
- (id)init;
- (id)initWithCPLManager:(id)arg1 pruneManager:(id)arg2 libraryServicesManager:(id)arg3;
- (void)invalidate;
- (void)prefetchResourcesWithPredicates:(id)arg1 photoLibrary:(id)arg2 prefetchPhase:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)prefetchStatusForDebug:(bool)arg1;
- (void)startAutomaticPrefetch;
- (void)stop;

@end
