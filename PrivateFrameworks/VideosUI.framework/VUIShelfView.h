
@interface VUIShelfView : UIView {
    UICollectionView * _collectionView;
    UIView * _headerView;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UIView *headerView;

- (void).cxx_destruct;
- (id)collectionView;
- (id)headerView;
- (void)layoutSubviews;
- (void)setCollectionView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
