
@protocol PXCuratedLibraryAssetsDataSourceManagerDelegate <NSObject>

@optional

- (void)curatedLibraryAssetsDataSourceManager:(PXCuratedLibraryAssetsDataSourceManager *)arg1 didTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (PXAssetCollectionReference *)curatedLibraryAssetsDataSourceManager:(PXCuratedLibraryAssetsDataSourceManager *)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2;
- (long long)curatedLibraryAssetsDataSourceManager:(PXCuratedLibraryAssetsDataSourceManager *)arg1 transitionTypeFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (void)curatedLibraryAssetsDataSourceManager:(PXCuratedLibraryAssetsDataSourceManager *)arg1 willTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (bool)isSelectingAssetsFromCuratedLibraryAssetsDataSourceManager:(PXCuratedLibraryAssetsDataSourceManager *)arg1;
- (NSSet *)visibleAssetCollectionsFromCuratedLibraryAssetsDataSourceManager:(PXCuratedLibraryAssetsDataSourceManager *)arg1;

@end
