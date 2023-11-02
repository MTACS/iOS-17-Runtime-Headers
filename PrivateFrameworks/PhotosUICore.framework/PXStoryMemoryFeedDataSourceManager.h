
@interface PXStoryMemoryFeedDataSourceManager : PXSectionedDataSourceManager <PXChangeObserver, PXPreferencesObserver, PXSectionedDataSourceManagerObserver, PXStoryMutableMemoryFeedDataSourceManager> {
    PXFetchResultBasedMemoriesDataSourceManager * _allMemoriesDataSourceManager;
    PXFetchResultBasedMemoriesDataSourceManager * _favoriteMemoriesDataSourceManager;
    bool  _hasAnyFavorites;
    bool  _isActive;
    PXLibraryFilterState * _libraryFilterState;
    PHPhotoLibrary * _photoLibrary;
    PXUpdater * _updater;
    bool  _wantsFavoritesOnly;
}

@property (nonatomic, readonly) PXFetchResultBasedMemoriesDataSourceManager *allMemoriesDataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXFetchResultBasedMemoriesDataSourceManager *favoriteMemoriesDataSourceManager;
@property (nonatomic, readonly) bool hasAnyFavorites;
@property (nonatomic, readonly) bool hasAnyMemories;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, readonly) bool wantsFavoritesOnly;

- (void).cxx_destruct;
- (void)_invalidateChildDataSourceManagers;
- (void)_invalidateDataSource;
- (void)_invalidateHasAnyFavorites;
- (void)_setDataSourceToEmpty;
- (void)_setNeedsUpdate;
- (void)_updateChildDataSourceManagers;
- (void)_updateDataSource;
- (void)_updateHasAnyFavorites;
- (id)allMemoriesDataSourceManager;
- (id)createInitialDataSource;
- (void)didPerformChanges;
- (id)favoriteMemoriesDataSourceManager;
- (bool)hasAnyFavorites;
- (bool)hasAnyMemories;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (bool)isActive;
- (id)libraryFilterState;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1 identifier:(id)arg2;
- (void)performChanges:(id /* block */)arg1;
- (id)photoLibrary;
- (void)preferencesDidChange;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (void)setHasAnyFavorites:(bool)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setWantsFavoritesOnly:(bool)arg1;
- (id)updater;
- (bool)wantsFavoritesOnly;

@end
