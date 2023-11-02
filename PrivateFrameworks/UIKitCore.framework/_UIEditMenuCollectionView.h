
@interface _UIEditMenuCollectionView : UICollectionView {
    NSArray * _pages;
    long long  _targetPage;
}

@property (nonatomic, readonly) double currentPage;
@property (nonatomic, retain) NSArray *pages;
@property (nonatomic) long long targetPage;

- (void).cxx_destruct;
- (void)_prepareToPageWithHorizontalVelocity:(double)arg1 verticalVelocity:(double)arg2;
- (double)clampedPageForPageProgress:(double)arg1;
- (struct CGPoint { double x1; double x2; })contentOffsetForPage:(long long)arg1;
- (double)currentPage;
- (void)decrementTargetPage;
- (void)incrementTargetPage;
- (double)pageProgressForContentOffset:(struct CGPoint { double x1; double x2; })arg1 clamped:(bool)arg2;
- (id)pages;
- (void)resetTargetPage;
- (void)scrollToTargetPageAnimated:(bool)arg1;
- (void)setPages:(id)arg1;
- (void)setTargetPage:(long long)arg1;
- (long long)targetPage;
- (double)viewWidthForPageProgress:(double)arg1;

@end
