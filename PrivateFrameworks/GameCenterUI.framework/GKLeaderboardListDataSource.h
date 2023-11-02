
@interface GKLeaderboardListDataSource : GKLeaderboardCollectionDataSource {
    NSDictionary * _assetNames;
    UICollectionView * _collectionView;
    GKLeaderboardSet * _leaderboardSet;
    NSMutableArray * _leaderboards;
    NSTimer * _timer;
}

@property (nonatomic, retain) NSDictionary *assetNames;
@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic, retain) GKLeaderboardSet *leaderboardSet;
@property (nonatomic, retain) NSMutableArray *leaderboards;
@property (nonatomic, retain) NSTimer *timer;

- (void).cxx_destruct;
- (id)assetNames;
- (id)collectionView;
- (void)dealloc;
- (void)handleSelectionInCollectionView:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (id)leaderboardSet;
- (id)leaderboards;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (void)prepareCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)removeLeaderboardsWithoutImages;
- (void)setAssetNames:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setLeaderboardSet:(id)arg1;
- (void)setLeaderboards:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setupCollectionView:(id)arg1;
- (void)setupTimer;
- (struct CGSize { double x1; double x2; })standardCellSizeForCollectionView:(id)arg1;
- (id)timer;
- (id)title;
- (void)updateHighlightsInSectionHeader:(id)arg1;

@end
