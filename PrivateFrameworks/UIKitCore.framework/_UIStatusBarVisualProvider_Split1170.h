
@interface _UIStatusBarVisualProvider_Split1170 : _UIStatusBarVisualProvider_FixedSplit <_UIStatusBarVisualProvider_CustomSplit>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)LTEAPlusFontSize;
+ (double)baseFontSize;
+ (double)bottomLeadingTopOffset;
+ (double)expandedFontSize;
+ (double)nativeDisplayWidth;
+ (struct CGSize { double x1; double x2; })notchSize;
+ (double)pillCenteringOffset;
+ (double)pillFontSize;

- (double)expandedIconScale;
- (struct CGSize { double x1; double x2; })expandedPillSize;
- (double)itemSpacing;
- (double)leadingItemSpacing;
- (double)leadingSmallPillSpacing;
- (double)lowerExpandedBaselineOffset;
- (double)normalIconScale;
- (struct CGSize { double x1; double x2; })pillSize;
- (struct CGSize { double x1; double x2; })smallPillSize;
- (id)stringForCellularType:(long long)arg1 condensed:(bool)arg2;

@end
