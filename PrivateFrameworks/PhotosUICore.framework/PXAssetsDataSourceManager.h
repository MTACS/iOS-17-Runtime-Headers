
@interface PXAssetsDataSourceManager : PXSectionedDataSourceManager <PXMutableAssetsDataSourceManager> {
    NSPredicate * _filterPredicate;
    bool  _isBackgroundFetching;
    bool  _isLoadingInitialDataSource;
    NSAttributedString * _localizedEmptyPlaceholderAttributedMessage;
    NSString * _localizedEmptyPlaceholderTitle;
    NSString * _localizedLoadingInitialDataSourceMessage;
    NSArray * _sortDescriptors;
    bool  _supportsFiltering;
}

@property (nonatomic) long long backgroundFetchOriginSection;
@property (nonatomic, readonly) PXAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSPredicate *filterPredicate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBackgroundFetching;
@property (nonatomic, readonly) bool isLoadingInitialDataSource;
@property (nonatomic, readonly, copy) NSAttributedString *localizedEmptyPlaceholderAttributedMessage;
@property (nonatomic, readonly, copy) NSString *localizedEmptyPlaceholderTitle;
@property (nonatomic, readonly, copy) NSString *localizedLoadingInitialDataSourceMessage;
@property (nonatomic, readonly) PXSharedLibrarySharingSuggestionsCountsManager *px_sharedLibrarySharingSuggestionsCountsManager;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (nonatomic, readonly, copy) NSArray *sortDescriptors;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsCurationToggling;
@property (nonatomic, readonly) bool supportsFiltering;

- (void).cxx_destruct;
- (long long)backgroundFetchOriginSection;
- (id)createDataSourceManagerForAsset:(id)arg1;
- (id)createDataSourceManagerForAssetsInSectionOfAsset:(id)arg1;
- (void)ensureLastSectionHasContent;
- (void)ensureStartingSectionHasContent;
- (void)excludeAssetsAtIndexPaths:(id)arg1;
- (id)filterPredicate;
- (bool)forceAccurateAllSectionsIfNeeded;
- (bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (bool)forceAccurateSectionsIfNeeded:(id)arg1;
- (void)forceIncludeAssetsAtIndexPaths:(id)arg1;
- (bool)isBackgroundFetching;
- (bool)isLoadingInitialDataSource;
- (id)localizedEmptyPlaceholderAttributedMessage;
- (id)localizedEmptyPlaceholderTitle;
- (id)localizedLoadingInitialDataSourceMessage;
- (id)mutableChangeObject;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1 identifier:(id)arg2;
- (id)px_sharedLibrarySharingSuggestionsCountsManager;
- (void)refreshResultsForAssetCollection:(id)arg1;
- (void)registerChangeObserver:(id)arg1 context:(void*)arg2;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (void)setBackgroundFetchOriginSection:(long long)arg1;
- (void)setCurationEnabled:(bool)arg1 forAssetCollection:(id)arg2;
- (void)setCurationEnabledForAllCollections:(bool)arg1 collectionsToDiff:(id)arg2;
- (void)setFilterPredicate:(id)arg1;
- (void)setFilterPredicate:(id)arg1 provideIncrementalChangeDetailsForAssetCollections:(id)arg2;
- (void)setFilteringDisabled:(bool)arg1 forAssetCollection:(id)arg2;
- (id)sharedLibraryStatusProvider;
- (id)sortDescriptors;
- (void)startBackgroundFetchIfNeeded;
- (void)stopExcludingAssets:(id)arg1;
- (void)stopForceIncludingAllAssets;
- (bool)supportsCurationToggling;
- (bool)supportsFiltering;
- (void)unregisterChangeObserver:(id)arg1 context:(void*)arg2;
- (void)waitForAvailabilityOfAsset:(id)arg1 completionHandler:(id /* block */)arg2;

@end
