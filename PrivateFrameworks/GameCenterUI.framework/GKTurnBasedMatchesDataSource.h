
@interface GKTurnBasedMatchesDataSource : GKSplittingDataSource {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cellMarginInsets;
    NSObject<GKTurnBasedMatchesDataSourceDelegate> * _delegateWeak;
    SEL  _detailPressedAction;
    GKGame * _game;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cellMarginInsets;
@property (nonatomic) NSObject<GKTurnBasedMatchesDataSourceDelegate> *delegate;
@property (nonatomic) SEL detailPressedAction;
@property (nonatomic, retain) GKGame *game;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cellMarginInsets;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureCollectionView:(id)arg1;
- (void)configureDataSource;
- (id)delegate;
- (SEL)detailPressedAction;
- (id)game;
- (unsigned long long)numberOfMatches;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCellMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailPressedAction:(SEL)arg1;
- (void)setGame:(id)arg1;

@end
