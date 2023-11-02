
@interface PLBackgroundJobSyndicationSyncWorker : PLBackgroundJobWorker <PLSyndicationSyncManagerDelegate> {
    bool  _cancelled;
    CSSearchQuery * _currentQuery;
    NSDictionary * _currentWorkItem;
    PLDatabaseContext * _databaseContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSSet * _supportedQueryTypes;
    PLSyndicationSyncManager * _syncManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (bool)_hasPendingAttachmentJobsInLibrary:(id)arg1;
- (bool)_hasPendingChatJobsInLibrary:(id)arg1;
- (bool)_hasPendingDeleteJobsInLibrary:(id)arg1;
- (bool)_hasPendingJobsBasedOnLastSyncDate:(id)arg1;
- (bool)_needsSyndicationFullIndexSyncInLibrary:(id)arg1;
- (bool)_supportsSyndicationQueryType:(long long)arg1;
- (id)_syndicationStartingDateInLibrary:(id)arg1;
- (id)_workItemsBatchedFromDate:(id)arg1 library:(id)arg2 type:(long long)arg3;
- (void)executeQueryForSyncManager:(id)arg1 type:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 batchHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (void)executeQueryForSyncManager:(id)arg1 type:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 itemHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id)initWithLibraryBundle:(id)arg1;
- (bool)isInterruptible;
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (id)photoLibraryWithDatabaseContext:(id)arg1;
- (void)stopWorkingOnItem:(id)arg1;
- (bool)syncManager:(id)arg1 shouldContinueWithLibrary:(id)arg2;
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;
- (void)workerDidFinishWithDatabaseContext:(id)arg1;

@end
