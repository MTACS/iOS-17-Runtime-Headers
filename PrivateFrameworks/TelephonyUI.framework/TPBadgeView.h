
@interface TPBadgeView : TPView {
    NSLayoutConstraint * _heightAnchorLayoutConstraint;
    double  _heightAnchorLayoutConstraintConstantFontMultiplier;
    double  _layerCornerRadius;
    unsigned long long  _sizeCategory;
    unsigned long long  _theme;
    UILabel * _titleLabel;
    double  _titleLabelFontSize;
    NSLayoutConstraint * _titleLabelLeadingAnchorLayoutConstraint;
    double  _titleLabelLeadingAnchorLayoutConstraintConstant;
    NSLayoutConstraint * _titleLabelTrailingAnchorLayoutConstraint;
    double  _titleLabelTrailingAnchorLayoutConstraintConstant;
    NSLayoutConstraint * _widthAnchorLayoutConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *heightAnchorLayoutConstraint;
@property (nonatomic) double heightAnchorLayoutConstraintConstantFontMultiplier;
@property (nonatomic) double layerCornerRadius;
@property (nonatomic) unsigned long long sizeCategory;
@property (nonatomic, readonly) double suggestedHeight;
@property (nonatomic) unsigned long long theme;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) double titleLabelFontSize;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelLeadingAnchorLayoutConstraint;
@property (nonatomic) double titleLabelLeadingAnchorLayoutConstraintConstant;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelTrailingAnchorLayoutConstraint;
@property (nonatomic) double titleLabelTrailingAnchorLayoutConstraintConstant;
@property (nonatomic, retain) NSLayoutConstraint *widthAnchorLayoutConstraint;

- (void).cxx_destruct;
- (bool)_hasBaseline;
- (struct CGSize { double x1; double x2; })_layoutSizeThatFits:(struct CGSize { double x1; double x2; })arg1 fixedAxes:(unsigned long long)arg2;
- (void)commonInit;
- (id)firstBaselineAnchor;
- (id)heightAnchorLayoutConstraint;
- (double)heightAnchorLayoutConstraintConstantFontMultiplier;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 theme:(unsigned long long)arg2;
- (id)lastBaselineAnchor;
- (double)layerCornerRadius;
- (void)loadConstraints;
- (double)scaledLayoutValueForBaseValue:(double)arg1;
- (double)scaledLayoutValueForBaseValue:(double)arg1 shouldLowerBound:(bool)arg2;
- (void)setHeightAnchorLayoutConstraint:(id)arg1;
- (void)setHeightAnchorLayoutConstraintConstantFontMultiplier:(double)arg1;
- (void)setLayerCornerRadius:(double)arg1;
- (void)setSizeCategory:(unsigned long long)arg1;
- (void)setTheme:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabelFontSize:(double)arg1;
- (void)setTitleLabelLeadingAnchorLayoutConstraint:(id)arg1;
- (void)setTitleLabelLeadingAnchorLayoutConstraintConstant:(double)arg1;
- (void)setTitleLabelTrailingAnchorLayoutConstraint:(id)arg1;
- (void)setTitleLabelTrailingAnchorLayoutConstraintConstant:(double)arg1;
- (void)setWidthAnchorLayoutConstraint:(id)arg1;
- (unsigned long long)sizeCategory;
- (double)suggestedHeight;
- (unsigned long long)theme;
- (id)title;
- (id)titleLabel;
- (double)titleLabelFontSize;
- (id)titleLabelLeadingAnchorLayoutConstraint;
- (double)titleLabelLeadingAnchorLayoutConstraintConstant;
- (id)titleLabelTrailingAnchorLayoutConstraint;
- (double)titleLabelTrailingAnchorLayoutConstraintConstant;
- (void)unloadConstraints;
- (void)updateActiveHorizontalConstraints;
- (void)updateConstraintsConstants;
- (void)updateFonts;
- (void)updateSizeCategory;
- (void)updateTheme;
- (id)widthAnchorLayoutConstraint;

@end
