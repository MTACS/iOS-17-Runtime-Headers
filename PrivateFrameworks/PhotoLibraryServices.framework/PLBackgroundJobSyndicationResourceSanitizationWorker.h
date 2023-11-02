
@interface PLBackgroundJobSyndicationResourceSanitizationWorker : PLBackgroundJobWorker <PLSyndicationResourcePrefetchManagerDelegate> {
    PLPhotoLibrary * _currentLibrary;
    PLSyndicationResourcePrefetchManager * _prefetchManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isNetworkAccessAllowed;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;

+ (bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;
+ (id)syndicationWorkerCriteria;

- (void).cxx_destruct;
- (void)batchRequestResourcesForPrefetchManager:(id)arg1 itemIdentifiersWithBundleIDs:(id)arg2 destURLs:(id)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (unsigned long long)batchSize;
- (id)downloadThrottlingDateForPrefetchManager:(id)arg1;
- (id)initWithLibraryBundle:(id)arg1;
- (bool)isNetworkAccessAllowed;
- (id)name;
- (void)performTransactionForPrefetchManager:(id)arg1 synchronous:(bool)arg2 block:(id /* block */)arg3;
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (void)prefetchManager:(id)arg1 receivedNewDownloadThrottlingDate:(id)arg2 managedObjectContext:(id)arg3;
- (id)requestLocalAvailabilityChangeForPrefetchManager:(id)arg1 resource:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)resourceIDsForPrefetchWithLibrary:(id)arg1;
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;

@end
