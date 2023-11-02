
@interface SeymourUI.CollectionView : UICollectionView {
    void $__lazy_storage_$_smoothDecelerationAnimation;
    void contentInsetBehaviorProvider;
    void onLayoutUpdate;
}

- (void).cxx_destruct;
- (bool)_scrollToTopIfPossible:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)layoutSubviews;

@end
