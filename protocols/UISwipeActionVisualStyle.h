
@protocol UISwipeActionVisualStyle <NSObject>

@required

- (double)buttonCornerRadiusForStyle:(unsigned long long)arg1 view:(UIView *)arg2;
- (UIColor *)defaultButtonBackgroundColor;
- (double)defaultButtonWidth;
- (unsigned long long)defaultCollectionViewCompositionalLayoutSwipeStyle;
- (double)defaultContentHeightForView:(UIView *)arg1;
- (unsigned long long)defaultSwipeActionUIStyleForUITableViewStyle:(long long)arg1;
- (UIColor *)defaultTintColor;
- (double)horizontalPadding;
- (double)iconToTitleSpacing;
- (double)interButtonPaddingForStyle:(unsigned long long)arg1;
- (double)interitemButtonCornerRadiusForStyle:(unsigned long long)arg1;
- (double)maxButtonWidth;
- (double)maxFontSize;
- (unsigned long long)maxLines;
- (double)minFontSize;
- (double)paddingToSwipeViewForStyle:(unsigned long long)arg1;
- (double)titleFontWeight;

@end
