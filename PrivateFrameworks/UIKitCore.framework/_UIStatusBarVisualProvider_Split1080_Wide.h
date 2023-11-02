
@interface _UIStatusBarVisualProvider_Split1080_Wide : _UIStatusBarVisualProvider_FixedSplit <_UIStatusBarVisualProvider_CustomSplit>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)additionalBottomLeadingMargin;
+ (double)expandedEdgeInset;
+ (double)expandedFontSize;
+ (double)height;
+ (double)leadingCenteringOffset;
+ (double)nativeDisplayWidth;
+ (struct CGSize { double x1; double x2; })notchSize;
+ (double)referenceScreenScale;

- (double)baselineBottomInset;
- (double)bottomLeadingTopOffset;
- (double)expandedIconScale;
- (struct CGSize { double x1; double x2; })expandedPillSize;
- (double)itemSpacing;
- (double)lowerExpandedBaselineOffset;

@end
