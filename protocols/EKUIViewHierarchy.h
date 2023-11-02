
@protocol EKUIViewHierarchy <NSObject>

@required

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })ekui_affineTransform;
- (double)ekui_height;
- (long long)ekui_horizontalSizeClass;
- (long long)ekui_interfaceOrientation;
- (<EKUIViewHierarchy> *)ekui_rootViewHierarchy;
- (struct CGSize { double x1; double x2; })ekui_size;
- (UIColor *)ekui_tintColor;
- (long long)ekui_verticalSizeClass;
- (double)ekui_width;

@end
