
@interface PXContentSyndicationPhotoKitDataSourceManager : PXContentSyndicationDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    <PXContentSyndicationAssetFetchResultProvider> * _assetFetchResultProvider;
    <PXContentSyndicationSocialLayerHighlightProvider> * _highlightProvider;
    <PXUIImageProvider> * _imageProvider;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PXContentSyndicationPhotoKitDataSource *dataSource;
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
- (id)initWithPhotoLibrary:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (id)socialLayerHighlightProvider;

@end
