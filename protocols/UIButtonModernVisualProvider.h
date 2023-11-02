
@protocol UIButtonModernVisualProvider <UIButtonVisualProvider>

@required

- (void)alignmentRectInsetsHaveChangedForChildImageView:(UIImageView *)arg1;
- (void)applyConfiguration;
- (void)automaticallyUpdateConfigurationIfNecessary:(id <_UIButtonConfigurationShim>)arg1;
- (bool)hasBaseline;
- (bool)hasMultilineText;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateLayoutData;
- (double)previousFirstBaselineOffsetForAttributeLowering;
- (double)previousLastBaselineOffsetForAttributeLowering;
- (void)setNeedsUpdateConfiguration;
- (void)setPreviousFirstBaselineOffsetForAttributeLowering:(double)arg1;
- (void)setPreviousLastBaselineOffsetForAttributeLowering:(double)arg1;
- (void)setVendsBaselineInformationToAutoLayout:(bool)arg1;
- (void)setWidthForMultilineTextLayout:(double)arg1;
- (UILabel *)subtitleViewCreateIfNeeded:(bool)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateBaselineInformationDependentOnBounds;
- (void)updateConfigurationIfNecessary;
- (bool)vendsBaselineInformationToAutoLayout;
- (double)widthForMultilineTextLayout;

@end
