
@interface STUIStatusBarVisualProvider_Split828 : STUIStatusBarVisualProvider_FixedSplit <STUIStatusBarVisualProvider_CustomSplit>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)LTEAPlusFontSize;
+ (double)additionalBottomLeadingMargin;
+ (double)baseFontSize;
+ (double)height;
+ (double)leadingCenteringOffset;
+ (double)leadingSmallPillSpacing;
+ (double)nativeDisplayWidth;
+ (struct CGSize { double x1; double x2; })notchSize;
+ (double)pillCenteringOffset;
+ (bool)shrinksSingleCharacterTypes;

- (double)baselineBottomInset;
- (double)bottomLeadingTopOffset;
- (double)condensedPointSizeForCellularType:(long long)arg1 defaultPointSize:(double)arg2 baselineOffset:(double*)arg3;
- (double)expandedIconScale;
- (struct CGSize { double x1; double x2; })expandedPillSize;
- (double)grabberHeight;
- (double)itemSpacing;
- (double)leadingItemSpacing;
- (double)lowerExpandedBaselineOffset;
- (double)normalIconScale;
- (struct CGSize { double x1; double x2; })pillSize;
- (struct CGSize { double x1; double x2; })smallPillSize;
- (id)stringForCellularType:(long long)arg1 condensed:(bool)arg2;

@end
