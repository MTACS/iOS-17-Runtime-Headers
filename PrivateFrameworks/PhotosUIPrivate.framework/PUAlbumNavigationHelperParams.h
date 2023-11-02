
@interface PUAlbumNavigationHelperParams : NSObject {
    PXPhotoKitCollectionsDataSourceManager * _dataSourceManager;
    <PXGridPresentation> * _gridPresentation;
    PUSessionInfo * _sessionInfo;
    PUAlbumListViewControllerSpec * _spec;
}

@property (nonatomic, readonly) PXPhotoKitCollectionsDataSource *dataSource;
@property (nonatomic, retain) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (nonatomic, retain) <PXGridPresentation> *gridPresentation;
@property (nonatomic, retain) PUSessionInfo *sessionInfo;
@property (nonatomic, retain) PUAlbumListViewControllerSpec *spec;

- (void).cxx_destruct;
- (id)dataSource;
- (id)dataSourceManager;
- (id)gridPresentation;
- (id)sessionInfo;
- (void)setDataSourceManager:(id)arg1;
- (void)setGridPresentation:(id)arg1;
- (void)setSessionInfo:(id)arg1;
- (void)setSpec:(id)arg1;
- (id)spec;

@end
