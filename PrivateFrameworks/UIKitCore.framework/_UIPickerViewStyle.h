
@interface _UIPickerViewStyle : NSObject

@property (nonatomic, readonly) double columnHighlightCornerRadius;

- (void)_resetFontCacheForLegitbilityWeightIfNeeded:(long long)arg1;
- (void)applyCustomizationsToColumn:(id)arg1;
- (id)centerCellDigitFontWithTraitCollection:(id)arg1;
- (id)centerCellFontWithTraitCollection:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })columnContentEdgeInsets;
- (double)columnHighlightCornerRadius;
- (void)configureMaskGradientLayer:(id)arg1;
- (id)createCenterHighlightView;
- (double)defaultRowHeightForSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })defaultSizeForTraitCollection:(id)arg1;
- (double)horizontalPaddingForCenterHighlightView;
- (double)horizontalPaddingForContents;
- (id)nonCenterCellDigitFontWithTraitCollection:(id)arg1;
- (id)nonCenterCellFontWithTraitCollection:(id)arg1;
- (double)paddingAroundWheels;
- (double)paddingBetweenWheels;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })perspectiveTransform;
- (id)selectionFeedbackGeneratorConfiguration;
- (bool)sizeIsValid:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forTraitCollection:(id)arg2;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transformForCellAtY:(double)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rowHeight:(double)arg3 selectionBarRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (double)verticalPaddingForCenterHighlightView;

@end
