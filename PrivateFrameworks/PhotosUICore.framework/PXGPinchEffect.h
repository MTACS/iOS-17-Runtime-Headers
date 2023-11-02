
@interface PXGPinchEffect : PXGEffect {
    PXGUniform * _normalizedCenter;
    PXGUniform * _scale;
    PXGShader * _shader;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } normalizedCenter;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (id)initWithEntityManager:(id)arg1;
- (struct CGPoint { double x1; double x2; })normalizedCenter;
- (double)scale;
- (void)setNormalizedCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScale:(double)arg1;
- (id)shader;

@end
