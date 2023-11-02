
@interface PXSearchZeroKeywordGadgetLayout : UICollectionViewFlowLayout {
    double  _columnWidth;
}

@property (nonatomic) double columnWidth;

- (double)columnWidth;
- (bool)flipsHorizontallyInOppositeLayoutDirection;
- (void)setColumnWidth:(double)arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end
