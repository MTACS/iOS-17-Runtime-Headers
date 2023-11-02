
@protocol _UIStatusBarRegionCursorInsetProvider <_UIStatusBarVisualProvider>

@required

+ (double)regionCursorCornerRadius;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })regionCursorInsets;
+ (bool)regionCursorIsPill;

@end
