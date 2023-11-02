
@interface ICQCloudStorageDataController : NSObject {
    ACAccount * _account;
    _TtC11iCloudQuota26RecommendationsDataFetcher * _recommendationsDataFetcher;
    bool  _shouldIgnoreCache;
}

@property (nonatomic, readonly) ICQiCloudDetailsPageInfo *cachediCloudDetailsPage;
@property (nonatomic) bool iCloudDetailsPageShown;
@property (nonatomic) bool shouldIgnoreCache;

+ (id)_requestQueue;

- (void).cxx_destruct;
- (id)cachedStorageSummary;
- (id)cachediCloudDetailsPage;
- (void)fetchAppsSyncingToiCloudDriveWithCompletion:(id /* block */)arg1;
- (void)fetchBackupinfoWithCompletion:(id /* block */)arg1;
- (void)fetchStorageAppsWithCompletion:(id /* block */)arg1;
- (void)fetchStorageByApp:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchStorageSummaryWithCompletion:(id /* block */)arg1;
- (bool)iCloudDetailsPageShown;
- (id)initWithAccount:(id)arg1;
- (void)sendDismissStatusForTip:(id)arg1 completion:(id /* block */)arg2;
- (void)sendDisplayStatusForTip:(id)arg1 completion:(id /* block */)arg2;
- (void)setICloudDetailsPageShown:(bool)arg1;
- (void)setShouldIgnoreCache:(bool)arg1;
- (bool)shouldIgnoreCache;

@end
