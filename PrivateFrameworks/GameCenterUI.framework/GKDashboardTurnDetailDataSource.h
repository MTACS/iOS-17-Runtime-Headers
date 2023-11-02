
@interface GKDashboardTurnDetailDataSource : GKCollectionDataSource {
    GKTurnBasedMatch * _match;
}

@property (nonatomic, retain) GKTurnBasedMatch *match;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)initWithMatch:(id)arg1;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (id)match;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)preferredCollectionHeight;
- (id)sectionHeaderText;
- (void)setMatch:(id)arg1;
- (void)setupCollectionView:(id)arg1;

@end
