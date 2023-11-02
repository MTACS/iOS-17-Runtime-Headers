
@interface PXContentSyndicationMockCMMDataSourceManager : PXContentSyndicationDataSourceManager <PXSectionedDataSourceManagerObserver> {
    <PXContentSyndicationAssetFetchResultProvider> * _assetFetchResultProvider;
    PXCMMInvitationsDataSourceManager * _cmmDataSourceManager;
    <PXContentSyndicationSocialLayerHighlightProvider> * _highlightProvider;
    <PXUIImageProvider> * _imageProvider;
}

@property (nonatomic, retain) PXCMMInvitationsDataSourceManager *cmmDataSourceManager;
@property (nonatomic, readonly) PXContentSyndicationMockCMMDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createCountsController;

- (void).cxx_destruct;
- (void)_handleDataSourceChange;
- (id)allAssetsFetchResult;
- (id)assetFetchResultProvider;
- (id)cmmDataSourceManager;
- (id)createAssetsDataSourceManager;
- (id)createInitialDataSource;
- (id)imageProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setCmmDataSourceManager:(id)arg1;
- (id)socialLayerHighlightProvider;

@end
