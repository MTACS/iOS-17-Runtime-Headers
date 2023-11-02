
@interface PXCuratedLibraryZoomLevelDataConfiguration : NSObject <PXPhotosDataSourceProvider> {
    PXAssetsDataSourceManager * _assetsDataSourceManager;
    PHPhotoLibrary * _photoLibrary;
    long long  _zoomLevel;
}

@property (nonatomic, readonly) PXAssetsDataSourceManager *assetsDataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long zoomLevel;

- (void).cxx_destruct;
- (id)assetsDataSourceManager;
- (id)createInitialPhotosDataSourceForDataSourceManager:(id)arg1;
- (id)init;
- (id)initWithZoomLevel:(long long)arg1;
- (id)initWithZoomLevel:(long long)arg1 assetsDataSourceManager:(id)arg2;
- (id)photoLibrary;
- (void)setPhotoLibrary:(id)arg1;
- (long long)zoomLevel;

@end
