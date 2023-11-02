
@interface GKLeaderboardSetDataSource : GKLeaderboardCollectionDataSource {
    NSDictionary * _leaderboardAssetNames;
    NSDictionary * _leaderboardSetAssetNames;
    NSArray * _leaderboardSets;
}

@property (nonatomic, retain) NSDictionary *leaderboardAssetNames;
@property (nonatomic, retain) NSDictionary *leaderboardSetAssetNames;
@property (nonatomic, retain) NSArray *leaderboardSets;

- (void).cxx_destruct;
- (long long)allowedColumnCount:(long long)arg1;
- (void)handleSelectionInCollectionView:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (id)leaderboardAssetNames;
- (id)leaderboardSetAssetNames;
- (id)leaderboardSets;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (void)prepareCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)presentLeaderboardsListWithSet:(id)arg1 segueToLeaderboard:(id)arg2;
- (void)removeLeaderboardSetsWithoutImages;
- (void)setLeaderboardAssetNames:(id)arg1;
- (void)setLeaderboardSetAssetNames:(id)arg1;
- (void)setLeaderboardSets:(id)arg1;
- (struct CGSize { double x1; double x2; })standardCellSizeForCollectionView:(id)arg1;
- (id)title;
- (void)updateHighlightsInSectionHeader:(id)arg1;

@end
