
@interface PXContentSyndicationConfigurationProvider : PXObservable <PXCollectionsDataSourceManagerObserver, PXSettingsKeyObserver, SLHighlightCenterDelegate> {
    bool  _contentSyndicationIsAvailable;
    long long  _dataSourceType;
    PXLibraryFilterState * _libraryFilterState;
    PHPhotoLibrary * _photoLibrary;
    bool  _readyToLoadActualDataSourceManager;
    bool  _showContentSyndicationItemInSidebar;
    bool  _showUnsavedSyndicatedContentInFeaturedPhotos;
    bool  _showUnsavedSyndicatedContentInMemories;
    bool  _showUnsavedSyndicatedContentInPhotosGrids;
    SLHighlightCenter * _socialLayerHighlightCenter;
    PXContentSyndicationDataSourceManager * _syndicationItemsDataSourceManager;
    PHPhotoLibrary * _syndicationPhotoLibrary;
    int  _systemLibraryChangeToken;
    NSNumber * _testingOverride_contentSyndicationEnabled;
}

@property (nonatomic) bool contentSyndicationIsAvailable;
@property (nonatomic) long long dataSourceType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic) bool readyToLoadActualDataSourceManager;
@property (nonatomic) bool showContentSyndicationItemInSidebar;
@property (nonatomic, readonly) bool showUnsavedSyndicatedContentInFeaturedPhotos;
@property (nonatomic, readonly) bool showUnsavedSyndicatedContentInMemories;
@property (nonatomic) bool showUnsavedSyndicatedContentInPhotosGrids;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXContentSyndicationDataSourceManager *syndicationItemsDataSourceManager;
@property (nonatomic, retain) PHPhotoLibrary *syndicationPhotoLibrary;
@property (nonatomic) int systemLibraryChangeToken;
@property (nonatomic, retain) NSNumber *testingOverride_contentSyndicationEnabled;

+ (id)contentSyndicationConfigurationProviderWithPhotoLibrary:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_createDataSourceManagerIfNeeded;
- (id)_dataSourceManagerForDataSourceType:(long long)arg1;
- (void)_invalidateDataSourceManager;
- (void)_markDataSourceManagerAsReadyToLoad;
- (void)_updateContentSyndicationAvailability;
- (void)_updateDataSourceType;
- (void)_updateEverything;
- (void)_updateShowContentSyndicationItemInSidebar;
- (void)_updateShowUnsavedSyndicatedContentInFeaturedPhotos;
- (void)_updateShowUnsavedSyndicatedContentInMemories;
- (void)_updateShowUnsavedSyndicatedContentInPhotosGrids;
- (bool)contentSyndicationIsAvailable;
- (long long)dataSourceType;
- (void)dealloc;
- (void)highlightCenter:(id)arg1 didRemoveHighlights:(id)arg2;
- (void)highlightCenterSettingsEnablementHasChanged:(id)arg1;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)libraryFilterState;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photoLibrary;
- (bool)readyToLoadActualDataSourceManager;
- (void)setContentSyndicationIsAvailable:(bool)arg1;
- (void)setDataSourceType:(long long)arg1;
- (void)setReadyToLoadActualDataSourceManager:(bool)arg1;
- (void)setShowContentSyndicationItemInSidebar:(bool)arg1;
- (void)setShowUnsavedSyndicatedContentInFeaturedPhotos:(bool)arg1;
- (void)setShowUnsavedSyndicatedContentInMemories:(bool)arg1;
- (void)setShowUnsavedSyndicatedContentInPhotosGrids:(bool)arg1;
- (void)setSyndicationItemsDataSourceManager:(id)arg1;
- (void)setSyndicationPhotoLibrary:(id)arg1;
- (void)setSystemLibraryChangeToken:(int)arg1;
- (void)setTestingOverride_contentSyndicationEnabled:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)showContentSyndicationItemInSidebar;
- (bool)showUnsavedSyndicatedContentInFeaturedPhotos;
- (bool)showUnsavedSyndicatedContentInMemories;
- (bool)showUnsavedSyndicatedContentInPhotosGrids;
- (id)syndicationItemsDataSourceManager;
- (id)syndicationPhotoLibrary;
- (int)systemLibraryChangeToken;
- (id)testingOverride_contentSyndicationEnabled;

@end
