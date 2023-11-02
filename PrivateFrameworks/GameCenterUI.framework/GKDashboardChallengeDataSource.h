
@interface GKDashboardChallengeDataSource : GKCollectionDataSource <GKDashboardChallengeDetailViewControllerDelegate> {
    NSArray * _challenges;
    GKGameRecord * _gameRecord;
    bool  _shouldShowPlay;
}

@property (nonatomic, retain) NSArray *challenges;
@property (nonatomic, retain) GKGameRecord *gameRecord;
@property (nonatomic) bool shouldShowPlay;

- (void).cxx_destruct;
- (id)challenges;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)gameRecord;
- (id)initWithGameRecord:(id)arg1;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (void)newDashboardUserDidSelectPlayChallenge:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)preferredCollectionHeight;
- (id)sectionHeaderText;
- (void)setChallenges:(id)arg1;
- (void)setGameRecord:(id)arg1;
- (void)setShouldShowPlay:(bool)arg1;
- (void)setupCollectionView:(id)arg1;
- (bool)shouldShowPlay;
- (void)userDidSelectPlay:(id)arg1;

@end
