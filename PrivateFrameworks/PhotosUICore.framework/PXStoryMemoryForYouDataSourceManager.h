
@interface PXStoryMemoryForYouDataSourceManager : PXSectionedDataSourceManager <PXChangeObserver, PXMemoryForYouDataSourceManager, PXSectionedDataSourceManagerObserver, PXStoryMutableMemoryForYouDataSourceManager> {
    PXFetchResultBasedMemoriesDataSourceManager * _forYouMemoriesDataSourceManager;
    bool  _isActive;
    PXLibraryFilterState * _libraryFilterState;
    PHPhotoLibrary * _photoLibrary;
    PXStateBasedMemoriesDataSource * _previousForYouMemoriesDataSource;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_forYouMemoriesDataSourceDidChangeDuringInitialization;
    bool  _queue_isInitialized;
    PXUpdater * _updater;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXFetchResultBasedMemoriesDataSourceManager *forYouMemoriesDataSourceManager;
@property (nonatomic, readonly) bool hasAnyMemories;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) PHFetchResult *memories;
@property (nonatomic, readonly) NSDate *mostRecentCreationDate;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) PXStateBasedMemoriesDataSource *previousForYouMemoriesDataSource;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool queue_forYouMemoriesDataSourceDidChangeDuringInitialization;
@property (nonatomic) bool queue_isInitialized;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;

- (void).cxx_destruct;
- (void)_invalidateChildDataSourceManager;
- (void)_invalidateDataSource;
- (void)_rebuildChildDataSourceManager;
- (void)_rebuildDataSource;
- (void)_setNeedsUpdate;
- (void)_updateChildDataSourceManager;
- (void)_updateDataSource;
- (id)createInitialDataSource;
- (id)dailyMemoriesFromMemoryFetchResult:(id)arg1;
- (id)dataSourceFromFetchResult:(id)arg1;
- (void)didPerformChanges;
- (id)forYouMemoriesDataSourceManager;
- (id)forYouMemoryFetchOptions;
- (bool)hasAnyMemories;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1 libraryFilterState:(id)arg2;
- (bool)isActive;
- (id)libraryFilterState;
- (id)memories;
- (id)mostRecentCreationDate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1 identifier:(id)arg2;
- (void)performChanges:(id /* block */)arg1;
- (id)photoLibrary;
- (id)previousForYouMemoriesDataSource;
- (id)queue;
- (bool)queue_forYouMemoriesDataSourceDidChangeDuringInitialization;
- (bool)queue_isInitialized;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setPreviousForYouMemoriesDataSource:(id)arg1;
- (void)setQueue_forYouMemoriesDataSourceDidChangeDuringInitialization:(bool)arg1;
- (void)setQueue_isInitialized:(bool)arg1;
- (id)updater;

@end
