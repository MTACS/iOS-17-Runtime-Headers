
@protocol PXCuratedLibraryMutableAssetsDataSourceManager <PXMutableAssetsDataSourceManager>

@required

- (NSPredicate *)allPhotosFilterPredicate;
- (bool)canIncludeUnsavedSyndicatedAssets;
- (bool)forceAccurateAllSectionsIfNeeded;
- (bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (bool)forceAccurateSectionsIfNeeded:(NSIndexSet *)arg1;
- (bool)forceAccurateSectionsIfNeeded:(NSIndexSet *)arg1 inZoomLevel:(long long)arg2;
- (long long)libraryFilter;
- (void)loadIfNeeded;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1 identifier:(NSString *)arg2;
- (void)resumeChangeDelivery:(id)arg1;
- (void)setAllPhotosFilterPredicate:(NSPredicate *)arg1;
- (void)setCanIncludeUnsavedSyndicatedAssets:(bool)arg1;
- (void)setLibraryFilter:(long long)arg1;
- (void)setTransientKeyAsset:(id <PXDisplayAsset>)arg1 forAssetCollection:(id <PXDisplayAssetCollection>)arg2 zoomLevel:(long long)arg3;
- (void)setZoomLevel:(long long)arg1;
- (long long)zoomLevel;

@end
