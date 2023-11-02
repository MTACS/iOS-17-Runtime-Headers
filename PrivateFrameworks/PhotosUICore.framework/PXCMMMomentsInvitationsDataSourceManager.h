
@interface PXCMMMomentsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    NSMutableOrderedSet * __remainingAssetCollectionObjectIDsToFetch;
    PXCMMMomentsInvitationsDataSourceState * __state;
    bool  _hasCreatedInitialDataSource;
    bool  _isLoading;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (retain) NSMutableOrderedSet *_remainingAssetCollectionObjectIDsToFetch;
@property (nonatomic, retain) PXCMMMomentsInvitationsDataSourceState *_state;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createInvitationsDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;
- (id)_remainingAssetCollectionObjectIDsToFetch;
- (id)_state;
- (void)_workerQueue_fetchRemainingAssetCollectionsInBatches;
- (id)assetCollections;
- (id)createInitialDataSource;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)mediaProvider;
- (id)photoLibrary;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)set_remainingAssetCollectionObjectIDsToFetch:(id)arg1;
- (void)set_state:(id)arg1;
- (void)startLoadingIfNeeded;

@end
