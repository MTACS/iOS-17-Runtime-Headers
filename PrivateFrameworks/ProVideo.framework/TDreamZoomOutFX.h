
@interface TDreamZoomOutFX : TDreamProgramWrapper {
    double  _aspectRatio;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    double  _radius;
    int  _rotacion;
    double  _scale;
    int  aspectRatioUniform;
    int  centerUniform;
    int  radiusUniform;
    int  rotacionUniform;
    int  scaleUniform;
}

@property (nonatomic) double aspectRatio;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic) double radius;
@property (nonatomic) int rotacion;
@property (nonatomic) double scale;

- (void)adjustAspectRatio;
- (double)aspectRatio;
- (struct CGPoint { double x1; double x2; })center;
- (id)init;
- (double)radius;
- (int)rotacion;
- (double)scale;
- (void)setAspectRatio:(double)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRadius:(double)arg1;
- (void)setRotacion:(int)arg1;
- (void)setScale:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUniforms;

@end
