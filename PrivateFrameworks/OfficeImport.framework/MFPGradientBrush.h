
@interface MFPGradientBrush : MFPBrush {
    NSArray * mBlend;
    NSArray * mColorBlend;
    struct CGShading { } * mShading;
    struct CGFunction { } * mShadingFunction;
    NSArray * mStops;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mTransform;
    int  mWrapMode;
}

- (void).cxx_destruct;
- (id)color;
- (id)colorAtPosition:(float)arg1;
- (void)createPhoneBrush;
- (void)createShading;
- (void)createShadingFunction;
- (void)createStopsFromBlend;
- (void)createStopsFromColorBlend;
- (void)createStopsFromStartAndEndColors;
- (void)dealloc;
- (id)endColor;
- (void)fillPath:(id)arg1;
- (id)init;
- (void)setBlend:(id)arg1;
- (void)setColorBlend:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setWrapMode:(int)arg1;
- (id)startColor;

@end
