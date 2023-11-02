
@interface PXSAInboxDataSourceManager : PXInboxModelDataSourceManager <PXFeedSectionInfosManagerDelegate, PXInboxModelMediaProvider, PXInboxProviderSource> {
    PXFeedSectionInfosManager * _feedSectionInfosManager;
    PXSAInboxDetailViewControllerProvider * _sharedAlbumDetailViewControllerProvider;
    PXSAInboxTitleProvider * _sharedAlbumTitleProvider;
}

@property (nonatomic, readonly) PXSAInboxDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXInboxModelDetailViewControllerProvider> *detailViewControllerProvider;
@property (nonatomic, retain) PXFeedSectionInfosManager *feedSectionInfosManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXInboxModelMediaProvider> *mediaProvider;
@property (nonatomic, retain) PXSAInboxDetailViewControllerProvider *sharedAlbumDetailViewControllerProvider;
@property (nonatomic, retain) PXSAInboxTitleProvider *sharedAlbumTitleProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PXInboxModelTitleProvider> *titleProvider;

- (void).cxx_destruct;
- (id)_dataSourceSnapshot;
- (id)_sectionInfosForDataSource;
- (void)_updateDataSource;
- (id)createInitialDataSource;
- (id)detailViewControllerProvider;
- (id)feedSectionInfosManager;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (id)init;
- (id)mediaProvider;
- (id)providerSource;
- (int)requestImageForPreviewItem:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 resultHandler:(id /* block */)arg3;
- (void)setFeedSectionInfosManager:(id)arg1;
- (void)setSharedAlbumDetailViewControllerProvider:(id)arg1;
- (void)setSharedAlbumTitleProvider:(id)arg1;
- (id)sharedAlbumDetailViewControllerProvider;
- (id)sharedAlbumTitleProvider;
- (id)titleProvider;

@end
