
@protocol PBUIWallpaperLegibilityProviding <NSObject>

@required

- (UIColor *)averageColorForVariant:(long long)arg1;
- (UIColor *)averageColorInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forVariant:(long long)arg2;
- (UIColor *)averageColorInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forVariant:(long long)arg2 withSmudgeRadius:(double)arg3;
- (double)contrastForVariant:(long long)arg1;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forVariant:(long long)arg2;
- (_UILegibilitySettings *)legibilitySettingsForVariant:(long long)arg1;

@end
