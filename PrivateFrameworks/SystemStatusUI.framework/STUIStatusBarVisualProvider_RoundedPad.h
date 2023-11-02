
@interface STUIStatusBarVisualProvider_RoundedPad : STUIStatusBarVisualProvider_Pad

+ (double)baselineOffset;
+ (double)cornerRadius;
+ (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
+ (double)height;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })regionCursorInsets;
+ (bool)regionCursorIsPill;

- (id)pillFont;
- (struct CGSize { double x1; double x2; })pillSize;
- (id)pillSmallFont;
- (struct CGSize { double x1; double x2; })smallPillSize;

@end
