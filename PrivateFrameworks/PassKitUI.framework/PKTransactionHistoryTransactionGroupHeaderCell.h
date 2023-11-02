
@interface PKTransactionHistoryTransactionGroupHeaderCell : PKDashboardCollectionViewCell {
    UIImage * _image;
    UIView * _imageBackgroundView;
    UIImageView * _imageView;
    bool  _isTemplateLayout;
    bool  _strokeImage;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    bool  _useShadows;
}

@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool useShadows;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setupImageView;
- (void)_updateImageViewDynamicColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (void)setStrokeImage:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUseShadows:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (id)title;
- (bool)useShadows;

@end
