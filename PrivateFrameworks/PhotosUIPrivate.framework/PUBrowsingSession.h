
@interface PUBrowsingSession : NSObject <PUAssetActionManagerDelegate, PUAssetsDataSourceManagerDelegate, PXAssetEditOperationManagerObserver, PXLoadingStatusManagerObserver> {
    PUAssetActionManager * _actionManager;
    PUContentTileProvider * _contentTileProvider;
    PUAssetsDataSourceManager * _dataSourceManager;
    PXAssetEditOperationManager * _editOperationManager;
    NSString * _emptyPlaceholderSubtitle;
    NSString * _emptyPlaceholderTitle;
    <PXAssetImportStatusManager> * _importStatusManager;
    PXLoadingStatusManager * _loadingStatusManager;
    PUMediaProvider * _mediaProvider;
    PUOneUpMergedVideoProvider * _mergedVideoProvider;
    PXPhotosDetailsContext * _photosDetailsContext;
    PXContentPrivacyController * _privacyController;
    PUTileAnimator * _tileAnimator;
    PUBrowsingViewModel * _viewModel;
}

@property (nonatomic, readonly) PUAssetActionManager *actionManager;
@property (nonatomic, retain) PUContentTileProvider *contentTileProvider;
@property (nonatomic, readonly) PUAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXAssetEditOperationManager *editOperationManager;
@property (nonatomic, readonly) NSString *emptyPlaceholderSubtitle;
@property (nonatomic, readonly) NSString *emptyPlaceholderTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXAssetImportStatusManager> *importStatusManager;
@property (nonatomic, readonly) PXLoadingStatusManager *loadingStatusManager;
@property (nonatomic, retain) PUMediaProvider *mediaProvider;
@property (nonatomic, readonly) PUOneUpMergedVideoProvider *mergedVideoProvider;
@property (nonatomic, readonly) PXPhotosDetailsContext *photosDetailsContext;
@property (nonatomic, readonly) PXContentPrivacyController *privacyController;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUTileAnimator *tileAnimator;
@property (nonatomic, retain) PUBrowsingViewModel *viewModel;

+ (id)importBrowsingSessionWithDeviceUUID:(id)arg1;

- (void).cxx_destruct;
- (id)actionManager;
- (id)assetActionManagerCurrentAssetsDataSource:(id)arg1;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationStatusForAsset:(id)arg2 context:(void*)arg3;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void*)arg3;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;
- (void)configureTilingView:(id)arg1;
- (id)contentTileProvider;
- (id)dataSourceManager;
- (id)editOperationManager;
- (id)emptyPlaceholderSubtitle;
- (id)emptyPlaceholderTitle;
- (id)imageWellThumbnailProvider;
- (id)importStatusManager;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3;
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3 photosDetailsContext:(id)arg4 lowMemoryMode:(bool)arg5;
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3 photosDetailsContext:(id)arg4 lowMemoryMode:(bool)arg5 importStatusManager:(id)arg6;
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3 photosDetailsContext:(id)arg4 lowMemoryMode:(bool)arg5 importStatusManager:(id)arg6 privacyController:(id)arg7;
- (id)loadingStatusManager;
- (void)loadingStatusManager:(id)arg1 didUpdateLoadingStatus:(id)arg2 forItemIdentifier:(id)arg3;
- (id)mediaProvider;
- (id)mergedVideoProvider;
- (id)photosDetailsContext;
- (id)privacyController;
- (void)setContentTileProvider:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setTileAnimator:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)tileAnimator;
- (id)viewModel;

@end
