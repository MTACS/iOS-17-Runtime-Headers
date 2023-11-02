
@interface PXPhotoKitPeopleSuggestionsDataSourceManager : PXPeopleSuggestionsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    NSMutableOrderedSet * __remainingPeopleToFetch;
    PXPhotoKitPeopleSuggestionsDataSourceState * __state;
    PHAssetCollection * _assetCollection;
    bool  _hasCreatedInitialDataSource;
    bool  _hasFinishedLoadingFinalDataSource;
    bool  _hasStartedLoadingFinalDataSource;
    bool  _isPrefetching;
    bool  _needsDeferredLoading;
    PXUpdater * _updater;
}

@property (retain) NSMutableOrderedSet *_remainingPeopleToFetch;
@property (nonatomic, retain) PXPhotoKitPeopleSuggestionsDataSourceState *_state;
@property (nonatomic, retain) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PXPhotoKitPeopleSuggestionsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasFinishedLoadingFinalDataSource;
@property (nonatomic) bool hasStartedLoadingFinalDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXUpdater *updater;

+ (id)mockDataSourceManagerFromPeopleInPhotosInAssetCollection:(id)arg1;
+ (id)personsForClient:(unsigned long long)arg1 fetchOptions:(id)arg2;
+ (id)photosGraphPeopleSuggestionsDataSourceManagerWithAssetCollection:(id)arg1;
+ (id)sharedLibraryPeopleSuggestionsDataSourceManager;
+ (id)sharedWorkerQueue;

- (void).cxx_destruct;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;
- (void)_handleFinishedLoadingFinalDataSourceFetchResult:(id)arg1;
- (id)_initWithAssetCollection:(id)arg1;
- (void)_loadFinalDataSource;
- (id)_remainingPeopleToFetch;
- (id)_state;
- (void)_workerQueue_fetchRemainingPeopleInBatches;
- (id)assetCollection;
- (void)boostLoading;
- (void)cancelLoading;
- (id)createInitialDataSource;
- (bool)hasFinishedLoadingFinalDataSource;
- (bool)hasStartedLoadingFinalDataSource;
- (id)initWithPeopleFetchResult:(id)arg1;
- (bool)isLoading;
- (id)mediaProvider;
- (id)people;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)setAssetCollection:(id)arg1;
- (void)setHasFinishedLoadingFinalDataSource:(bool)arg1;
- (void)setHasStartedLoadingFinalDataSource:(bool)arg1;
- (void)setUpdater:(id)arg1;
- (void)set_remainingPeopleToFetch:(id)arg1;
- (void)set_state:(id)arg1;
- (void)startLoading;
- (void)startPrefetchingIfNeeded;
- (id)updater;

@end
