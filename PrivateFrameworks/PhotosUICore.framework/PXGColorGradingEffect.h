
@interface PXGColorGradingEffect : PXGEffect {
    PXGColorLookupCube * _colorLookupCube;
    PXGUniform * _cubeUniform;
    PXGUniform * _grayUniform;
    float  _intensity;
    PXGShader * _shader;
    PXGUniform * _valuesUniform;
}

@property (nonatomic, retain) PXGColorLookupCube *colorLookupCube;
@property (nonatomic) float intensity;

- (void).cxx_destruct;
- (id)colorLookupCube;
- (unsigned long long)hash;
- (id)initWithEntityManager:(id)arg1;
- (float)intensity;
- (bool)isEqual:(id)arg1;
- (void)setColorLookupCube:(id)arg1;
- (void)setIntensity:(float)arg1;
- (id)shader;

@end
