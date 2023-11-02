
@interface GKDashboardTurnDataSource : GKCollectionDataSource {
    NSArray * _matches;
    bool  _shouldShowPlay;
    bool  _shouldShowQuit;
}

@property (nonatomic, retain) NSArray *matches;
@property (nonatomic) bool shouldShowPlay;
@property (nonatomic) bool shouldShowQuit;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)init;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (id)matches;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)preferredCollectionHeight;
- (id)sectionHeaderText;
- (void)setMatches:(id)arg1;
- (void)setShouldShowPlay:(bool)arg1;
- (void)setShouldShowQuit:(bool)arg1;
- (void)setupCollectionView:(id)arg1;
- (bool)shouldShowPlay;
- (bool)shouldShowQuit;

@end
