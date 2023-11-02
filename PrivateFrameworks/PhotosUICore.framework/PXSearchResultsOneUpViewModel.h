
@interface PXSearchResultsOneUpViewModel : NSObject {
    PXPhotosDataSource * _dataSource;
    PXAssetsDataSourceManager * _dataSourceManager;
    PXAssetReference * _initialAssetReference;
    PXPhotoKitUIMediaProvider * _mediaProvider;
    PXSearchQueryMatchInfo * _searchQueryMatchInfo;
}

@property (nonatomic, retain) PXPhotosDataSource *dataSource;
@property (nonatomic, retain) PXAssetsDataSourceManager *dataSourceManager;
@property (nonatomic, retain) PXAssetReference *initialAssetReference;
@property (nonatomic, retain) PXPhotoKitUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXSearchQueryMatchInfo *searchQueryMatchInfo;

- (void).cxx_destruct;
- (id)dataSource;
- (id)dataSourceManager;
- (id)initWithOneUpWithAsset:(id)arg1 atIndex:(unsigned long long)arg2 inAssetCollection:(id)arg3 searchQueryMatchInfo:(id)arg4;
- (id)initialAssetReference;
- (id)mediaProvider;
- (id)searchQueryMatchInfo;
- (void)setDataSource:(id)arg1;
- (void)setDataSourceManager:(id)arg1;
- (void)setInitialAssetReference:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)updateDataSourceWithFetchResult:(id)arg1;

@end
