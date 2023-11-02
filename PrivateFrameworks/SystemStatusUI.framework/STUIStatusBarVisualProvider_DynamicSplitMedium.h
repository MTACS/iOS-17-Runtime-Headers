
@interface STUIStatusBarVisualProvider_DynamicSplitMedium : STUIStatusBarVisualProvider_DynamicSplit

+ (double)baseFontSize;
+ (double)expandedFontSize;

- (double)bottomLeadingTopOffset;
- (double)expandedIconScale;
- (id)leadingItemCutoffWidths;
- (double)lowerExpandedBaselineOffset;
- (double)normalIconScale;
- (id)trailingItemCutoffWidths;

@end
