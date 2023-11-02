
@protocol NTKFaceColorPalette <NSObject>

@required

- (UIColor *)primaryColor;
- (UIColor *)primaryShiftedColor;
- (UIColor *)secondaryColor;
- (UIColor *)secondaryShiftedColor;
- (UIColor *)swatch;

@end
