
@interface PLSyndicationResourcePrefetchManager : NSObject {
    <PLSyndicationResourcePrefetchManagerDelegate> * _delegate;
}

@property (nonatomic, readonly) <PLSyndicationResourcePrefetchManagerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_fetchDownloadThrottlingDateAndClearIfNeededWithManagedObjectContext:(id)arg1;
- (void)_handleDownloadFinishedWithSuccess:(bool)arg1 error:(id)arg2 resource:(id)arg3 downloadThrottlingDate:(id)arg4 networkAccessAllowed:(bool)arg5 managedObjectContext:(id)arg6;
- (void)_prepareResourceForPrefetch:(id)arg1;
- (id)_resourcesForPrefetchWithManagedObjectContext:(id)arg1 predicate:(id)arg2;
- (id)delegate;
- (id)highPriorityResourcesForPrefetchWithManagedObjectContext:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)lowPriorityResourcesForPrefetchWithManagedObjectContext:(id)arg1;
- (void)prefetchResourceWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (void)prefetchResourceWithObjectIDs:(id)arg1 completion:(id /* block */)arg2;

@end
