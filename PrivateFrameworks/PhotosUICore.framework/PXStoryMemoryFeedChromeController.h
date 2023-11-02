
@interface PXStoryMemoryFeedChromeController : NSObject <PXChangeObserver, PXFeedChromeController, PXSectionedDataSourceManagerObserver> {
    PXStoryMemoryFeedDataSourceManager * _dataSourceManager;
    bool  _isActive;
    PXLibraryFilterState * _libraryFilterState;
    UINavigationItem * _navigationItem;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
}

@property (nonatomic, readonly) PXStoryMemoryFeedDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isActive;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleFavoritesToggleButton:(id)arg1;
- (void)_invalidateChrome;
- (void)_updateChrome;
- (id)dataSourceManager;
- (id)init;
- (id)initWithViewController:(id)arg1 dataSourceManager:(id)arg2;
- (bool)isActive;
- (id)libraryFilterState;
- (id)navigationItem;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setIsActive:(bool)arg1;
- (id)sharedLibraryStatusProvider;

@end
