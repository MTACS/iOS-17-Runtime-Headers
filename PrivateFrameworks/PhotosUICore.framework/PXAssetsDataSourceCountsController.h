
@interface PXAssetsDataSourceCountsController : PXObservable <PXAssetsDataSourceManagerObserver, PXMutableAssetsDataSourceCountsController> {
    PXAssetsDataSourceManager * _assetsDataSourceManager;
    struct { 
        unsigned long long photosCount; 
        unsigned long long videosCount; 
        unsigned long long othersCount; 
    }  _counts;
    struct { 
        unsigned long long photosCount; 
        unsigned long long videosCount; 
        unsigned long long othersCount; 
    }  _guestCounts;
    bool  _hasUsableCounts;
    bool  _isPreparingAssetTypeCounts;
    NSObject<OS_dispatch_queue> * _prepareCountsQueue;
    bool  _waitingToPrepare;
}

@property (nonatomic, readonly) PXAssetsDataSourceManager *assetsDataSourceManager;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } counts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } guestCounts;
@property (nonatomic) bool hasUsableCounts;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPreparingAssetTypeCounts;
@property (readonly) Class superclass;
@property (nonatomic) bool waitingToPrepare;

- (void).cxx_destruct;
- (void)_dataSourceManagerDidChange;
- (void)_handlePreparationCompletion;
- (void)_prepareCounts;
- (void)_prepareDataSource:(id)arg1;
- (void)_updateCounts;
- (id)assetsDataSourceManager;
- (void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })counts;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })guestCounts;
- (bool)hasUsableCounts;
- (id)init;
- (id)initWithAssetsDataSourceManager:(id)arg1;
- (bool)isPreparingAssetTypeCounts;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)prepareCountsIfNeeded;
- (void)setCounts:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setGuestCounts:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setHasUsableCounts:(bool)arg1;
- (void)setIsPreparingAssetTypeCounts:(bool)arg1;
- (void)setWaitingToPrepare:(bool)arg1;
- (bool)waitingToPrepare;

@end
