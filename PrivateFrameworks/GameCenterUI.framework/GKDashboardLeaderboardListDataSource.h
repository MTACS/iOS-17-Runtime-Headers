
@interface GKDashboardLeaderboardListDataSource : GKCollectionDataSource {
    NSDictionary * _assetNames;
    GKGameRecord * _gameRecord;
    GKLeaderboardSet * _leaderboardSet;
    NSArray * _leaderboards;
}

@property (nonatomic, retain) NSDictionary *assetNames;
@property (nonatomic, retain) GKGameRecord *gameRecord;
@property (nonatomic, retain) GKLeaderboardSet *leaderboardSet;
@property (nonatomic, retain) NSArray *leaderboards;

- (void).cxx_destruct;
- (id)assetNames;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)gameRecord;
- (id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (id)leaderboardSet;
- (id)leaderboards;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (double)preferredCollectionHeight;
- (void)removeLeaderboardsWithoutImages;
- (id)sectionHeaderText;
- (void)setAssetNames:(id)arg1;
- (void)setGameRecord:(id)arg1;
- (void)setLeaderboardSet:(id)arg1;
- (void)setLeaderboards:(id)arg1;
- (void)setupCollectionView:(id)arg1;

@end
