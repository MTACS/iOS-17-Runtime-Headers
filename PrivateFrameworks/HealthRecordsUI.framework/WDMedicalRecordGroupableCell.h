
@interface WDMedicalRecordGroupableCell : UITableViewCell {
    NSLayoutConstraint * _bottomConstraint;
    bool  _extraTopPadding;
    long long  _intendedPlacement;
    UIColor * _pillBackgroundColor;
    UIColor * _pillBackgroundColorOverride;
    UIView * _pillBackgroundView;
    double  _sectionTopPadding;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _separatorInsets;
    NSLayoutConstraint * _separatorLeadingConstant;
    NSLayoutConstraint * _separatorTrailingConstraint;
    HKSeparatorLineView * _separatorView;
    NSLayoutConstraint * _topConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomConstraint;
@property (nonatomic) bool extraTopPadding;
@property (nonatomic) long long intendedPlacement;
@property (nonatomic, retain) UIColor *pillBackgroundColor;
@property (nonatomic, retain) UIColor *pillBackgroundColorOverride;
@property (nonatomic, retain) UIView *pillBackgroundView;
@property (nonatomic) double sectionTopPadding;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } separatorInsets;
@property (nonatomic, retain) NSLayoutConstraint *separatorLeadingConstant;
@property (nonatomic, retain) NSLayoutConstraint *separatorTrailingConstraint;
@property (nonatomic, retain) HKSeparatorLineView *separatorView;
@property (nonatomic, retain) NSLayoutConstraint *topConstraint;

+ (double)defaultGap;
+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (double)_cornerRadius;
- (double)_topPadding;
- (void)_updateBasedOnAccessibilityCategory:(bool)arg1;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (void)_updateForIntendedPlacement;
- (id)bottomConstraint;
- (bool)extraTopPadding;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (long long)intendedPlacement;
- (id)pillBackgroundColor;
- (id)pillBackgroundColorOverride;
- (id)pillBackgroundView;
- (void)prepareForReuse;
- (double)sectionTopPadding;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInsets;
- (id)separatorLeadingConstant;
- (id)separatorTrailingConstraint;
- (id)separatorView;
- (void)setBottomConstraint:(id)arg1;
- (void)setExtraTopPadding:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setIntendedPlacement:(long long)arg1;
- (void)setPillBackgroundColor:(id)arg1;
- (void)setPillBackgroundColorOverride:(id)arg1;
- (void)setPillBackgroundView:(id)arg1;
- (void)setSectionTopPadding:(double)arg1;
- (void)setSeparatorDashStyle:(long long)arg1 hidden:(bool)arg2;
- (void)setSeparatorInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSeparatorLeadingConstant:(id)arg1;
- (void)setSeparatorTrailingConstraint:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setTopConstraint:(id)arg1;
- (void)setUpConstraints;
- (void)setupSubviews;
- (id)topConstraint;
- (void)traitCollectionDidChange:(id)arg1;

@end
