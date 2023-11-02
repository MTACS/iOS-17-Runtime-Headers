
@interface PXContentSyndicationMockSingleAssetsDataSourceManager : PXContentSyndicationDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    PHFetchResult * _allPhotosFetchResult;
    <PXContentSyndicationAssetFetchResultProvider> * _assetFetchResultProvider;
    <PXContentSyndicationSocialLayerHighlightProvider> * _highlightProvider;
    <PXUIImageProvider> * _imageProvider;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PXContentSyndicationMockSingleAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createCountsController;

- (void).cxx_destruct;
- (id)allAssetsFetchResult;
- (id)assetFetchResultProvider;
- (id)createAssetsDataSourceManager;
- (id)createInitialDataSource;
- (id)imageProvider;
- (id)init;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)socialLayerHighlightProvider;

@end
