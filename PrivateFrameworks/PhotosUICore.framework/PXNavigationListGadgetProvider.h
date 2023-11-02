
@interface PXNavigationListGadgetProvider : PXGadgetProvider <PXNavigationListDataSectionManagerObserver, PXPreferencesObserver> {
    NSPredicate * _assetsFilterPredicate;
    bool  _backgroundFetchingIsActive;
    NSNumber * _contentPrivacyEnabledCache;
    PXNavigationListDataSectionManager * _dataSourceManager;
    bool  _excludesHiddenAlbum;
    NSNumber * _hiddenAlbumVisibleCache;
    bool  _isLimitedLibraryPicker;
    bool  _isPresentedInPicker;
    PHPhotoLibrary * _photoLibrary;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
    bool  _shouldShowNavigationListOnIpad;
    PXExtendedTraitCollection * _traitCollection;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSPredicate *assetsFilterPredicate;
@property (nonatomic) bool backgroundFetchingIsActive;
@property (nonatomic, retain) NSNumber *contentPrivacyEnabledCache;
@property (nonatomic, retain) PXNavigationListDataSectionManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool excludesHiddenAlbum;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *hiddenAlbumVisibleCache;
@property (nonatomic, readonly) bool isLimitedLibraryPicker;
@property (nonatomic, readonly) bool isPresentedInPicker;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) bool shouldShowNavigationListForDeviceAndLayoutClass;
@property (nonatomic) bool shouldShowNavigationListOnIpad;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXExtendedTraitCollection *traitCollection;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (void)_initializeDataSourceManagerIfNeeded;
- (bool)_isContentPrivacyEnabled;
- (void)_resetGadgets;
- (bool)_shouldHiddenAlbumBeVisible;
- (void)_updateGadgets;
- (id)assetsFilterPredicate;
- (bool)backgroundFetchingIsActive;
- (id)contentPrivacyEnabledCache;
- (id)dataSourceManager;
- (void)dealloc;
- (unsigned long long)estimatedNumberOfGadgets;
- (bool)excludesHiddenAlbum;
- (void)generateGadgets;
- (id)hiddenAlbumVisibleCache;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 extendedTraitCollection:(id)arg2 isPresentedInPicker:(bool)arg3 isLimitedLibraryPicker:(bool)arg4 assetsFilterPredicate:(id)arg5 excludesHiddenAlbum:(bool)arg6 photoLibrary:(id)arg7;
- (bool)isLimitedLibraryPicker;
- (bool)isPresentedInPicker;
- (void)loadDataForGadgets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)pauseLoadingRemainingData;
- (id)photoLibrary;
- (void)preferencesDidChange;
- (void)setBackgroundFetchingIsActive:(bool)arg1;
- (void)setContentPrivacyEnabledCache:(id)arg1;
- (void)setDataSourceManager:(id)arg1;
- (void)setHiddenAlbumVisibleCache:(id)arg1;
- (void)setShouldShowNavigationListOnIpad:(bool)arg1;
- (bool)shouldShowNavigationListForDeviceAndLayoutClass;
- (bool)shouldShowNavigationListOnIpad;
- (void)startLoadingRemainingData;
- (id)traitCollection;
- (unsigned long long)type;

@end
