
@interface STUIStatusBarVisualProvider_Split1242 : STUIStatusBarVisualProvider_FixedSplit <STUIStatusBarVisualProvider_CustomSplit>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)additionalBottomLeadingMargin;
+ (double)baseFontSize;
+ (double)height;
+ (double)nativeDisplayWidth;
+ (struct CGSize { double x1; double x2; })notchSize;
+ (double)pillCenteringOffset;
+ (bool)shrinksSingleCharacterTypes;
+ (double)trailingEdgeInsetLeadingAdjustment;

- (double)expandedIconScale;
- (struct CGSize { double x1; double x2; })expandedPillSize;
- (double)itemSpacing;
- (double)lowerExpandedBaselineOffset;
- (double)normalIconScale;
- (struct CGSize { double x1; double x2; })pillSize;

@end
