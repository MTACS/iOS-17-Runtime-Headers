
@interface TLKLayoutUtilities : NSObject

+ (void)applyMinimumSizeTouchInsetsForControlsInView:(id)arg1;
+ (void)applyRowBoundedSizingToImageView:(id)arg1 isCompactWidth:(bool)arg2;
+ (double)ceilingValue:(double)arg1 inView:(id)arg2;
+ (double)contentHeightOfTableView:(id)arg1 forWidth:(double)arg2 maxHeight:(double)arg3;
+ (id)controlsInView:(id)arg1;
+ (double)deviceScaledFlooredValue:(double)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })deviceScaledRoundedInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })deviceScaledRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (double)deviceScaledRoundedValue:(double)arg1;
+ (double)flooredValue:(double)arg1 inView:(id)arg2;
+ (struct CGSize { double x1; double x2; })idealImageSizeWithSize:(struct CGSize { double x1; double x2; })arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)isLTR;
+ (bool)isSuperLargeAccessibilitySize;
+ (bool)isWideScreen;
+ (struct CGSize { double x1; double x2; })maxThumbnailSize;
+ (struct CGSize { double x1; double x2; })maxThumbnailSizeIsCompactWidth:(bool)arg1;
+ (struct CGSize { double x1; double x2; })minimumButtonSize;
+ (void)requireIntrinsicSizeForView:(id)arg1;
+ (void)requireIntrinsicSizeForView:(id)arg1 withPriority:(float)arg2;
+ (double)roundedValue:(double)arg1 inView:(id)arg2;
+ (double)scaledValueForValue:(double)arg1 withFont:(id)arg2;
+ (void)setDynamicBaselineAlignmentsForLabel:(id)arg1 top:(double)arg2 bottom:(double)arg3;
+ (bool)widthIsCompact:(double)arg1;

@end
