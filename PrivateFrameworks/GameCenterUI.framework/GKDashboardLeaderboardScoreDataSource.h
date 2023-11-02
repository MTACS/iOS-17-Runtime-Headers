
@interface GKDashboardLeaderboardScoreDataSource : GKCollectionDataSource {
    bool  _forceInitialShowMore;
    GKGameRecord * _gameRecord;
    GKLeaderboard * _leaderboard;
    NSArray * _scores;
    bool  _showingMoreScores;
    SEL  _timeScopeAction;
    id  _timeScopeTarget;
    long long  _visibleItemCount;
}

@property (nonatomic) bool forceInitialShowMore;
@property (nonatomic, retain) GKGameRecord *gameRecord;
@property (nonatomic, retain) GKLeaderboard *leaderboard;
@property (nonatomic, readonly) bool needsShowMoreCell;
@property (nonatomic, readonly) bool needsShowcaseCell;
@property (nonatomic) long long playerScope;
@property (nonatomic, retain) NSArray *scores;
@property (nonatomic, readonly) UIFont *sectionHeaderFont;
@property (getter=isShowingMoreScores, nonatomic) bool showingMoreScores;
@property (nonatomic) long long timeScope;
@property (nonatomic) SEL timeScopeAction;
@property (nonatomic) id timeScopeTarget;
@property (nonatomic) long long visibleItemCount;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (bool)forceInitialShowMore;
- (id)gameRecord;
- (bool)hasFriendsButton;
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;
- (bool)isShowMoreIndexPath:(id)arg1;
- (bool)isShowcaseIndexPath:(id)arg1;
- (bool)isShowingMoreScores;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (id)leaderboard;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (bool)needsShowMoreCell;
- (bool)needsShowcaseCell;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)playerScope;
- (double)preferredCollectionHeight;
- (void)revealMoreItemsInCollectionView:(id)arg1 section:(long long)arg2 completion:(id /* block */)arg3;
- (id)scores;
- (void)sectionHeaderButtonPressed:(id)arg1;
- (id)sectionHeaderFont;
- (id)sectionHeaderText;
- (void)setForceInitialShowMore:(bool)arg1;
- (void)setGameRecord:(id)arg1;
- (void)setLeaderboard:(id)arg1;
- (void)setPlayerScope:(long long)arg1;
- (void)setScores:(id)arg1;
- (void)setShowingMoreScores:(bool)arg1;
- (void)setTimeScope:(long long)arg1;
- (void)setTimeScopeAction:(SEL)arg1;
- (void)setTimeScopeTarget:(id)arg1;
- (void)setVisibleItemCount:(long long)arg1;
- (void)setupCollectionView:(id)arg1;
- (void)showMoreInCollectionView:(id)arg1 section:(long long)arg2;
- (long long)timeScope;
- (SEL)timeScopeAction;
- (id)timeScopeTarget;
- (long long)visibleItemCount;

@end
