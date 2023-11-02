
@protocol PXPhotosDataSourceProvider <NSObject>

@required

- (PXPhotosDataSource *)createInitialPhotosDataSourceForDataSourceManager:(PXPhotoKitAssetsDataSourceManager *)arg1;

@optional

- (PXPhotosDataSource *)loadInitialPhotosDataSourceForDataSourceManager:(PXPhotoKitAssetsDataSourceManager *)arg1;
- (NSString *)localizedInitialLoadingStatusMessageForDataSourceManager:(PXPhotoKitAssetsDataSourceManager *)arg1;

@end
