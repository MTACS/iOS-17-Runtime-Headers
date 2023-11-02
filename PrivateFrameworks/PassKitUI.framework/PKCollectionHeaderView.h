
@interface PKCollectionHeaderView : UICollectionViewListCell {
    double  _bottomPadding;
    UIImage * _image;
    UIImageView * _imageView;
    UILabel * _primaryLabel;
    NSString * _primaryText;
    UILabel * _secondaryLabel;
    NSString * _secondaryText;
    UILabel * _tertiaryLabel;
    NSString * _tertiaryText;
    double  _topPadding;
}

@property (nonatomic) double bottomPadding;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, copy) NSString *tertiaryText;
@property (nonatomic) double topPadding;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (double)bottomPadding;
- (double)heightOfHeaderWithoutText;
- (id)image;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)primaryText;
- (id)secondaryText;
- (void)setBottomPadding:(double)arg1;
- (void)setImage:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setTertiaryText:(id)arg1;
- (void)setTopPadding:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tertiaryText;
- (double)topPadding;

@end
