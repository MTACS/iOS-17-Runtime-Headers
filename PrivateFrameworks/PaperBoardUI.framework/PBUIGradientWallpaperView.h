
@interface PBUIGradientWallpaperView : PBUIWallpaperView {
    PBUIWallpaperGradient * _wallpaperGradient;
}

@property (nonatomic, readonly, copy) PBUIWallpaperGradient *wallpaperGradient;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_computeAverageColor;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withSmudgeRadius:(double)arg2;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6;
- (bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (id)wallpaperGradient;
- (long long)wallpaperType;

@end
