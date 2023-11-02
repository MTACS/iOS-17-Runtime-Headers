
@interface STUIStatusBarVisualProvider_Split1080 : STUIStatusBarVisualProvider_Split1125

+ (double)height;
+ (double)leadingCenteringOffset;
+ (double)nativeDisplayWidth;
+ (struct CGSize { double x1; double x2; })notchSize;
+ (double)pillCenteringOffset;
+ (double)referenceScreenScale;

- (double)baselineBottomInset;
- (double)itemSpacing;
- (double)leadingSmallPillSpacing;
- (long long)normalIconSize;
- (struct CGSize { double x1; double x2; })pillSize;
- (struct CGSize { double x1; double x2; })smallPillSize;
- (id)stringForCellularType:(long long)arg1 condensed:(bool)arg2;

@end
