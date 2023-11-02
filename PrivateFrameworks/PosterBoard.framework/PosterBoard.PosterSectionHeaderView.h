
@interface PosterBoard.PosterSectionHeaderView : UICollectionReusableView <PosterBoard.PosterPairObserver> {
    void delegate;
    void posterPair;
    void title;
    void titleLabel;
    void titleLabelSpacingFromBottomEdge;
}

@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)posterPairDidUpdateLocalizedTitle:(id)arg1;
- (void)prepareForReuse;
- (void)setTitle:(id)arg1;
- (id)title;

@end
