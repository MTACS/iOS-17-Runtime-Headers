
@interface PLCloudResourcePruneManager : NSObject {
    PLCloudPhotoLibraryManager * _cplManager;
    PLLibraryServicesManager * _lsm;
    bool  _stopped;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void).cxx_destruct;
- (long long)_fetchResourcesForPruningWithBudget:(long long)arg1 urgency:(long long)arg2 batchHandler:(id /* block */)arg3;
- (struct __CFDictionary { }*)_handleCacheDeletePurge:(int)arg1 info:(struct __CFDictionary { }*)arg2;
- (struct __CFDictionary { }*)_handleCacheDeletePurgeable:(int)arg1 info:(struct __CFDictionary { }*)arg2;
- (void)_handleCacheDeleteRegistration;
- (id)_identifierForResource:(id)arg1;
- (long long)_localResourcesSize;
- (id)_predicateForPruneWithUrgency:(long long)arg1;
- (long long)_purgeableAmountWithBudget:(long long)arg1 debugString:(id)arg2;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(id /* block */)arg2;
- (long long)_totalPurgeableAmountForUrgency:(long long)arg1;
- (void)_updateLocalStateForPrunedResources:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)dealloc;
- (long long)diskSpaceToPrune;
- (id)init;
- (id)initWithCPLManager:(id)arg1 libraryServicesManager:(id)arg2;
- (long long)pruneResources:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)pruneStatusForDebug:(bool)arg1;
- (void)startAutomaticPruneWithBudget:(long long)arg1 urgency:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)stop;
- (void)updateCacheDeletePurgeableAmount;

@end
