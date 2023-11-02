
@interface PLServerPhotoLibraryBundle : PLPhotoLibraryBundle <NSFilePresenter> {
    PLBackgroundJobService * _backgroundJobService;
    PLLazyObject * _lazyTouchCoalescer;
    Class  _libraryServicesDelegateClass;
    NSOperationQueue * _presentedItemOperationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newTouchCoalescer;
- (void)_touch;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg1;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)bindAssetsdService:(id)arg1 error:(id*)arg2;
- (id)boundAssetsdServices;
- (bool)calculateTotalSizeWithResult:(id /* block */)arg1;
- (void)clearShutdownReason;
- (void)close;
- (id)initWithLibraryURL:(id)arg1 bundleController:(id)arg2 backgroundJobService:(id)arg3 libraryServicesDelegateClass:(Class)arg4;
- (void)invalidateClientConnectionsWithReason:(id)arg1;
- (id)newAssetsdClient;
- (id)newBoundAssetsdServicesTable;
- (id)newChangePublisher;
- (id)newLibraryServicesManager;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)relinquishPresentedItemToReader:(id /* block */)arg1;
- (void)relinquishPresentedItemToWriter:(id /* block */)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)arg1;
- (bool)shouldRelinquishToWriterOfSubitemAtURL:(id)arg1;
- (void)shutdownWithReason:(id)arg1;
- (void)touch;
- (id)transferAssets:(id)arg1 toBundle:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)transferPersons:(id)arg1 toBundle:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)unbindAssetsdService:(id)arg1;

@end
