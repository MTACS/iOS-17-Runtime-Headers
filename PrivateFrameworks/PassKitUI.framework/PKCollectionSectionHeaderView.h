
@interface PKCollectionSectionHeaderView : UICollectionViewListCell {
    double  _bottomPadding;
    UIFont * _primaryFont;
    UILabel * _primaryLabel;
    NSString * _primaryText;
    UIFont * _secondaryFont;
    UILabel * _secondaryLabel;
    NSString * _secondaryText;
    double  _topPadding;
}

@property (nonatomic) double bottomPadding;
@property (nonatomic, copy) UIFont *primaryFont;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, copy) UIFont *secondaryFont;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic) double topPadding;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)_resetFont;
- (double)bottomPadding;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)primaryFont;
- (id)primaryText;
- (id)secondaryFont;
- (id)secondaryText;
- (void)setBottomPadding:(double)arg1;
- (void)setPrimaryFont:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryFont:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setTopPadding:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)topPadding;

@end
