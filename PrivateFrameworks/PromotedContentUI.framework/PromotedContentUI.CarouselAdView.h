
@interface PromotedContentUI.CarouselAdView : APPCPromotedContentView <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    void $__lazy_storage_$__adSize;
    void $__lazy_storage_$_actionButton;
    void $__lazy_storage_$_adSizeWidth;
    void $__lazy_storage_$_advertiserContainerView;
    void $__lazy_storage_$_advertiserLabel;
    void $__lazy_storage_$_backgroundCollectionController;
    void $__lazy_storage_$_backgroundCollectionView;
    void $__lazy_storage_$_blurView;
    void $__lazy_storage_$_collectionView;
    void $__lazy_storage_$_headlineLabel;
    void $__lazy_storage_$_logoImageView;
    void actionButtonHeight;
    void actionButtonHorizontalMargin;
    void actionButtonMinimumWidth;
    void advertiserViewHorizontalMargin;
    void collectionViewTopMargin;
    void dataRepresentation;
    void elements;
    void headlineHorizontalMargin;
    void logoImageViewHeight;
    void logoImageViewLeadingMargin;
    void logoImageViewMaxWidth;
    void prefetchingIndexPaths;
    void style;
    void topMargin;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)didMoveToWindow;
- (void)didSelectActionButtonWithSender:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
