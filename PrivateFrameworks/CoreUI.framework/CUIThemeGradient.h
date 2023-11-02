
@interface CUIThemeGradient : NSObject <CUIThemeGradientDrawing> {
    struct CGImage { } * _gradientImage;
    struct CGFunction { } * colorShader;
    struct CGColorSpace { } * colorSpace;
    id  gradientEvaluator;
}

- (struct CGImage { }*)_createRadialGradientImageWithWidth:(double)arg1 height:(double)arg2;
- (id)_initWithGradientEvaluator:(id)arg1 colorSpace:(struct CGColorSpace { }*)arg2;
- (int)blendMode;
- (id)colorLocations;
- (id)colorStops;
- (void)dealloc;
- (void)drawAngleGradientInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 relativeCenterPosition:(struct CGPoint { double x1; double x2; })arg2 withContext:(struct CGContext { }*)arg3;
- (void)drawFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 options:(unsigned long long)arg3 withContext:(struct CGContext { }*)arg4;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 angle:(double)arg2;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 angle:(double)arg2 options:(unsigned long long)arg3 withContext:(struct CGContext { }*)arg4;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 angle:(double)arg2 withContext:(struct CGContext { }*)arg3;
- (void)drawRadialGradientInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 relativeCenterPosition:(struct CGPoint { double x1; double x2; })arg2 withContext:(struct CGContext { }*)arg3;
- (id)fillColor;
- (id)gradientByApplyingEffects:(id)arg1;
- (id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(struct CGColorSpace { }*)arg9;
- (id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(struct CGColorSpace { }*)arg9 dither:(bool)arg10;
- (id)interpolatedColorAtLocation:(double)arg1;
- (bool)isDithered;
- (id)opacityLocations;
- (id)opacityStops;
- (double)smoothingCoefficient;

@end