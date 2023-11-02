
@protocol SMUTVCarouselView

@required

- (UICollectionView *)_collectionView;
- (double)autoscrollInterval;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)centerItemAtPageIndex:(long long)arg1;
- (<SMUTVCarouselViewDataSource> *)dataSource;
- (<SMUTVCarouselViewDelegate> *)delegate;
- (id)dequeueReusableCellWithReuseIdentifier:(NSString *)arg1 forIndex:(long long)arg2;
- (struct CGPoint { double x1; double x2; })focusDirection;
- (UICollectionViewCell *)focusedCell;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (UIView *)headerView;
- (long long)indexForCell:(UICollectionViewCell *)arg1;
- (double)interitemSpacing;
- (struct CGSize { double x1; double x2; })itemSize;
- (void)layoutIfNeeded;
- (double)pageControlMargin;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(NSString *)arg2;
- (void)reloadData;
- (unsigned long long)scrollMode;
- (void)setAutoscrollInterval:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDataSource:(id <SMUTVCarouselViewDataSource>)arg1;
- (void)setDelegate:(id <SMUTVCarouselViewDelegate>)arg1;
- (void)setFocusDirection:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHeaderView:(UIView *)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPageControlMargin:(double)arg1;
- (void)setScrollMode:(unsigned long long)arg1;
- (void)setShouldScaleOnIdleFocus:(bool)arg1;
- (void)setShowsPageControl:(bool)arg1;
- (void)setUnitScrollDuration:(double)arg1;
- (bool)shouldScaleOnIdleFocus;
- (double)showcaseFactor;
- (bool)showsPageControl;
- (double)unitScrollDuration;
- (NSArray *)visibleCells;

@end
