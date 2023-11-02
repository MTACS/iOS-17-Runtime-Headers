
@interface PXCMMMomentShareInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    long long  _filter;
    bool  _hasCreatedInitialDataSource;
    bool  _isLoading;
    PHPhotoLibrary * _photoLibrary;
    NSMutableOrderedSet * _remainingMomentShareObjectIDsToFetch;
    PXCMMMomentShareInvitationsDataSourceState * _state;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (nonatomic, readonly) PXCMMMomentShareInvitationsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)mostRecentCreationDate;
+ (id)mostRecentCreationDateForPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 changedObjects:(id)arg4;
- (void)_startLoadingIfNeeded;
- (void)_workerQueue_fetchRemainingMomentSharesInBatchesWithMomentShares:(id)arg1;
- (id)createInitialDataSource;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)mediaProvider;
- (id)momentShares;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)setFilter:(long long)arg1;

@end
