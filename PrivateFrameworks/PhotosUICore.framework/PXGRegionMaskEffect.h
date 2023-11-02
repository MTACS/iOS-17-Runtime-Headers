
@interface PXGRegionMaskEffect : PXGEffect {
    double  _alpha;
    PXRegion * _region;
    PXGShader * _shader;
    PXGUniform * _valuesUniform;
}

@property (nonatomic) double alpha;
@property (nonatomic, retain) PXRegion *region;

- (void).cxx_destruct;
- (void)_updateValues;
- (double)alpha;
- (id)initWithEntityManager:(id)arg1;
- (id)region;
- (void)setAlpha:(double)arg1;
- (void)setRegion:(id)arg1;
- (id)shader;

@end
