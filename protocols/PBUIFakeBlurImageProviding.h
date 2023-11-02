
@protocol PBUIFakeBlurImageProviding <NSObject>

@required

- (id)imageForWallpaperStyle:(inout long long*)arg1 variant:(long long)arg2 traitCollection:(UITraitCollection *)arg3;
- (UIView *)newImageProviderView;
- (bool)parallaxEnabledForVariant:(long long)arg1;
- (double)parallaxFactorForVariant:(long long)arg1;
- (bool)updateImageProviderView:(UIView *)arg1 withImage:(id)arg2;
- (double)zoomFactorForVariant:(long long)arg1;

@end
