
@interface PXCMMSharedAlbumsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    NSMutableOrderedSet * __remainingSharedAlbumObjectIDsToFetch;
    PXCMMSharedAlbumsInvitationsDataSourceState * __state;
    bool  _hasCreatedInitialDataSource;
    bool  _isLoading;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (retain) NSMutableOrderedSet *_remainingSharedAlbumObjectIDsToFetch;
@property (nonatomic, retain) PXCMMSharedAlbumsInvitationsDataSourceState *_state;
@property (nonatomic, readonly) PXCMMSharedAlbumsInvitationsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;
- (id)_remainingSharedAlbumObjectIDsToFetch;
- (id)_state;
- (void)_workerQueue_fetchRemainingSharedAlbumsInBatches;
- (id)createInitialDataSource;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)mediaProvider;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)set_remainingSharedAlbumObjectIDsToFetch:(id)arg1;
- (void)set_state:(id)arg1;
- (id)sharedAlbums;
- (void)startLoadingIfNeeded;

@end
