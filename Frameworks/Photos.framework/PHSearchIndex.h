
@interface PHSearchIndex : NSObject {
    PSIDatabase * __psiSearchIndex;
    bool  _isCheckingIfTheSearchIndexIsReady;
    PHPhotoLibrary * _photoLibrary;
    PLSearchIndexSceneTaxonomyProvider * _sceneTaxonomyProvider;
    NSTimer * _searchIndexStatusTimer;
    PSIDatabase * _unverifiedPsiSearchIndex;
}

@property (nonatomic, retain) PSIDatabase *_psiSearchIndex;
@property (nonatomic) bool isCheckingIfTheSearchIndexIsReady;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PSIDatabase *psiSearchIndex;
@property (nonatomic, retain) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider;
@property (nonatomic, retain) NSTimer *searchIndexStatusTimer;
@property (nonatomic, retain) PSIDatabase *unverifiedPsiSearchIndex;

+ (bool)_ensureSearchIndexIsReadyToBeQueriedForPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)_openQueryConnectionToSearchIndexForPhotoLibrary:(id)arg1 completion:(id /* block */)arg2;
- (id)_psiSearchIndex;
- (void)dealloc;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (bool)isCheckingIfTheSearchIndexIsReady;
- (id)photoLibrary;
- (void)preWarmSearchIndexSynchronously:(bool)arg1 completion:(id /* block */)arg2;
- (id)psiSearchIndex;
- (id)sceneTaxonomyProvider;
- (id)searchIndexStatusTimer;
- (void)setIsCheckingIfTheSearchIndexIsReady:(bool)arg1;
- (void)setSceneTaxonomyProvider:(id)arg1;
- (void)setSearchIndexStatusTimer:(id)arg1;
- (void)setUnverifiedPsiSearchIndex:(id)arg1;
- (void)set_psiSearchIndex:(id)arg1;
- (void)startMonitoringSearchIndexStatus;
- (void)stopMonitoringSearchIndexStatus;
- (id)unverifiedPsiSearchIndex;

@end
