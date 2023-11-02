
@interface ICDocCamFilterButton : UIButton {
    UIView * _backgroundView;
    UIImageView * _filterIconView;
    UILabel * _filterNameLabel;
    short  _filterType;
    NSLayoutConstraint * _iconSizeConstraint;
    NSLayoutConstraint * _labelVerticalSpacingConstraint;
}

@property (nonatomic, readonly) UIColor *activeBackgroundViewColor;
@property (nonatomic) UIView *backgroundView;
@property (nonatomic) UIImageView *filterIconView;
@property (nonatomic) UILabel *filterNameLabel;
@property (nonatomic) short filterType;
@property (nonatomic) double iconSize;
@property (nonatomic) NSLayoutConstraint *iconSizeConstraint;
@property (nonatomic, readonly) UIColor *inactiveBackgroundViewColor;
@property (nonatomic, readonly) UIColor *inactiveTextColor;
@property (nonatomic) NSLayoutConstraint *labelVerticalSpacingConstraint;

+ (id)filterButtonWithType:(short)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)activeBackgroundViewColor;
- (void)awakeFromNib;
- (id)backgroundView;
- (void)dealloc;
- (id)filterIconView;
- (id)filterNameLabel;
- (short)filterType;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (double)iconSize;
- (id)iconSizeConstraint;
- (id)imageForFilterType:(short)arg1;
- (id)inactiveBackgroundViewColor;
- (id)inactiveTextColor;
- (bool)isAccessibilityElement;
- (id)labelVerticalSpacingConstraint;
- (void)setBackgroundView:(id)arg1;
- (void)setFilterIconView:(id)arg1;
- (void)setFilterNameLabel:(id)arg1;
- (void)setFilterType:(short)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIconSize:(double)arg1;
- (void)setIconSizeConstraint:(id)arg1;
- (void)setLabelVerticalSpacingConstraint:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)updateForAccessibilityDarkerSystemColors:(id)arg1;

@end
