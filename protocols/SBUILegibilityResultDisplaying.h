
@protocol SBUILegibilityResultDisplaying <NSObject>

@required

- (<SBUILegibilityEngine> *)legibilityEngine;
- (<SBUILegibilitySettings> *)legibilitySettings;
- (UIImage *)origImage;
- (UIImage *)shadowImage;
- (UIImage *)strengthenedImage;
- (void)updateOrigImage:(UIImage *)arg1 shadowImage:(UIImage *)arg2 strengthenedShadowImage:(UIImage *)arg3 settings:(id <SBUILegibilitySettings>)arg4 engine:(id <SBUILegibilityEngine>)arg5 isTemplate:(bool)arg6 withStrength:(double*)arg7 context:(id)arg8;

@end
