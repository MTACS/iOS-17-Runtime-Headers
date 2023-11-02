
@interface GKDashboardSectionHeaderView : UICollectionReusableView {
    NSLayoutConstraint * _leftMarginConstraint;
    bool  _onDarkBackground;
    NSLayoutConstraint * _rightMarginConstraint;
    UIColor * _titleColor;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) UIFont *font;
@property (nonatomic) NSLayoutConstraint *leftMarginConstraint;
@property (nonatomic) bool onDarkBackground;
@property (nonatomic) NSLayoutConstraint *rightMarginConstraint;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic) UILabel *titleLabel;

+ (double)defaultHeight;
+ (struct CGSize { double x1; double x2; })platformSizeForTitle:(id)arg1 withFont:(id)arg2;
+ (double)widthForTitle:(id)arg1 withFont:(id)arg2;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)font;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)leftMarginConstraint;
- (bool)onDarkBackground;
- (id)rightMarginConstraint;
- (void)setFont:(id)arg1;
- (void)setLeftMarginConstraint:(id)arg1;
- (void)setOnDarkBackground:(bool)arg1;
- (void)setRightMarginConstraint:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)title;
- (id)titleColor;
- (id)titleLabel;

@end
