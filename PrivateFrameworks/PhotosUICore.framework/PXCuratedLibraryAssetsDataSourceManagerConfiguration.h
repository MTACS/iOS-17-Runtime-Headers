
@interface PXCuratedLibraryAssetsDataSourceManagerConfiguration : NSObject {
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

+ (id)configurationWithPhotoLibrary:(id)arg1;
+ (id)configurationWithPhotoLibrary:(id)arg1 yearsAssetsDataSourceManager:(id)arg2 monthsAssetsDataSourceManager:(id)arg3 daysAssetsDataSourceManager:(id)arg4 allPhotosAssetsDataSourceManager:(id)arg5;

- (void).cxx_destruct;
- (id)configurationForZoomLevel:(long long)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)keyAssetCollectionReferenceInDataSource:(id)arg1 zoomLevel:(long long)arg2 matchingAssetCollectionReference:(id)arg3 fromDataSource:(id)arg4 zoomLevel:(long long)arg5;
- (id)photoLibrary;

@end
