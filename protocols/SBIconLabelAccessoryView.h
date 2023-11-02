
@protocol SBIconLabelAccessoryView <SBReusableView>

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (double)baselineOffsetFromBottom;
- (bool)hasBaseline;
- (void)updateWithLegibilitySettings:(_UILegibilitySettings *)arg1 labelFont:(UIFont *)arg2;

@end
