
@protocol PXMutableAssetsDataSourceManager <NSObject, PXMutableSectionedDataSourceManager>

@required

- (long long)backgroundFetchOriginSection;
- (void)ensureLastSectionHasContent;
- (void)ensureStartingSectionHasContent;
- (void)excludeAssetsAtIndexPaths:(PXIndexPathSet *)arg1;
- (NSPredicate *)filterPredicate;
- (bool)forceAccurateAllSectionsIfNeeded;
- (bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (bool)forceAccurateSectionsIfNeeded:(NSIndexSet *)arg1;
- (void)forceIncludeAssetsAtIndexPaths:(PXIndexPathSet *)arg1;
- (void)refreshResultsForAssetCollection:(id <PXDisplayAssetCollection>)arg1;
- (void)setBackgroundFetchOriginSection:(long long)arg1;
- (void)setCurationEnabled:(bool)arg1 forAssetCollection:(id <PXDisplayAssetCollection>)arg2;
- (void)setCurationEnabledForAllCollections:(bool)arg1 collectionsToDiff:(NSSet *)arg2;
- (void)setFilterPredicate:(NSPredicate *)arg1;
- (void)setFilterPredicate:(NSPredicate *)arg1 provideIncrementalChangeDetailsForAssetCollections:(NSSet *)arg2;
- (void)setFilteringDisabled:(bool)arg1 forAssetCollection:(id <PXDisplayAssetCollection>)arg2;
- (void)setSortDescriptors:(NSArray *)arg1;
- (NSArray *)sortDescriptors;
- (void)startBackgroundFetchIfNeeded;
- (void)stopExcludingAssets:(NSArray *)arg1;
- (void)stopForceIncludingAllAssets;

@end
