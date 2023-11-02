
@interface PXContentSyndicationDataSourceManager : PXCollectionsDataSourceManager {
    <PXDisplayAssetFetchResult> * _allAssetsFetchResult;
}

@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *allAssetsFetchResult;
@property (nonatomic, readonly) PXContentSyndicationDataSource *dataSource;

+ (id)createCountsController;

- (void).cxx_destruct;
- (id)allAssetsFetchResult;
- (id)assetFetchResultProvider;
- (id)createAssetsDataSourceManager;
- (id)imageProvider;
- (id)socialLayerHighlightProvider;

@end
