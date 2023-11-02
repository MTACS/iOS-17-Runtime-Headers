
@interface GKDashboardLeaderboardSetDataSource : GKCollectionDataSource {
    GKGameRecord * _gameRecord;
    NSDictionary * _leaderboardAssetNames;
    NSDictionary * _leaderboardSetAssetNames;
    NSArray * _leaderboardSets;
}

@property (nonatomic, retain) GKGameRecord *gameRecord;
@property (nonatomic, retain) NSDictionary *leaderboardAssetNames;
@property (nonatomic, retain) NSDictionary *leaderboardSetAssetNames;
@property (nonatomic, retain) NSArray *leaderboardSets;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)gameRecord;
- (id)initWithGameRecord:(id)arg1;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (id)leaderboardAssetNames;
- (id)leaderboardSetAssetNames;
- (id)leaderboardSets;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (double)preferredCollectionHeight;
- (void)removeLeaderboardSetsWithoutImages;
- (id)sectionHeaderText;
- (void)setGameRecord:(id)arg1;
- (void)setLeaderboardAssetNames:(id)arg1;
- (void)setLeaderboardSetAssetNames:(id)arg1;
- (void)setLeaderboardSets:(id)arg1;
- (void)setupCollectionView:(id)arg1;

@end
