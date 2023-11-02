
@interface PKTitleDetailIconCell : UICollectionViewListCell {
    double  _additionalIconPadding;
    bool  _centerDetailText;
    bool  _centerTitleText;
    UIFont * _detailFont;
    UILabel * _detailLabel;
    NSString * _detailText;
    UIColor * _detailTextColor;
    UIImage * _icon;
    UIImageView * _iconView;
    UIFont * _titleFont;
    UILabel * _titleLabel;
    NSString * _titleText;
    UIColor * _titleTextColor;
}

@property (nonatomic) double additionalIconPadding;
@property (nonatomic) bool centerDetailText;
@property (nonatomic) bool centerTitleText;
@property (nonatomic, retain) UIFont *detailFont;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, retain) UIColor *detailTextColor;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, retain) UIColor *titleTextColor;

- (void).cxx_destruct;
- (void)_configureView;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (double)additionalIconPadding;
- (bool)centerDetailText;
- (bool)centerTitleText;
- (id)detailFont;
- (id)detailText;
- (id)detailTextColor;
- (id)icon;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAdditionalIconPadding:(double)arg1;
- (void)setCenterDetailText:(bool)arg1;
- (void)setCenterTitleText:(bool)arg1;
- (void)setDetailFont:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setDetailTextColor:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleFont;
- (id)titleText;
- (id)titleTextColor;

@end
