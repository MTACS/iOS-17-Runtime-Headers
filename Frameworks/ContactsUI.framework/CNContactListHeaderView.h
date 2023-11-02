
@interface CNContactListHeaderView : UICollectionViewListCell {
    UIView * _headerView;
}

@property (nonatomic, retain) UIView *headerView;

- (void).cxx_destruct;
- (id)headerView;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setHeaderView:(id)arg1;

@end
