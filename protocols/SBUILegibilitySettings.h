
@protocol SBUILegibilitySettings <NSObject>

@required

- (double)imageOutset;
- (double)minFillHeight;
- (UIColor *)primaryColor;
- (UIColor *)secondaryColor;
- (UIColor *)shadowColor;
- (struct { double x1; double x2; double x3; long long x4; })shadowSettings;
- (long long)style;

@end
