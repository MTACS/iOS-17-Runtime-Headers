
@interface SBIconLegibilityLabelAccessoryView : SBIconLabelAccessoryView {
    UIImageView * _iconImageView;
}

@property (nonatomic, readonly) UIImageView *iconImageView;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (double)baselineOffsetFromBottom;
- (id)firstBaselineAnchor;
- (bool)hasBaseline;
- (id)iconImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lastBaselineAnchor;
- (void)updateWithBaseImage:(id)arg1 legibilitySettings:(id)arg2;
- (void)updateWithLegibilitySettings:(id)arg1 labelFont:(id)arg2;

@end
