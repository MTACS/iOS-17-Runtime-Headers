
@interface GKLeaderboardScoreFlowLayout : UICollectionViewFlowLayout {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSizeBeforeInsertingItemsAbove;
    double  _heightOfInsertedItems;
    double  _initialContentOffset;
    bool  _isInsertingItemsAbove;
}

@property (nonatomic) struct CGSize { double x1; double x2; } contentSizeBeforeInsertingItemsAbove;
@property (nonatomic) double heightOfInsertedItems;
@property (nonatomic) double initialContentOffset;
@property (nonatomic) bool isInsertingItemsAbove;

- (struct CGSize { double x1; double x2; })contentSizeBeforeInsertingItemsAbove;
- (double)heightOfInsertedItems;
- (double)initialContentOffset;
- (bool)isInsertingItemsAbove;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)setContentSizeBeforeInsertingItemsAbove:(struct CGSize { double x1; double x2; })arg1;
- (void)setHeightOfInsertedItems:(double)arg1;
- (void)setInitialContentOffset:(double)arg1;
- (void)setIsInsertingItemsAbove:(bool)arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end
