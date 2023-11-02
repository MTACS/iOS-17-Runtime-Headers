
@interface CKMomentSharePreviewAssetsDataSourceManager : PXAssetsDataSourceManager {
    PXStaticDisplayAssetsDataSource * _currentDataSource;
    PHMomentShare * _momentShare;
    IMMomentShareCache * _momentShareCache;
    NSURL * _momentShareURL;
}

@property (nonatomic, readonly) PHMomentShare *momentShare;
@property (nonatomic, readonly) NSURL *momentShareURL;

- (void).cxx_destruct;
- (void)_fetchMomentShare;
- (void)_handleFetchedMomentShare:(id)arg1 error:(id)arg2;
- (void)_momentShareCacheDidChange:(id)arg1;
- (id)createInitialDataSource;
- (id)init;
- (id)initWithMomentShareURL:(id)arg1;
- (id)momentShare;
- (id)momentShareURL;

@end
