
@interface PXGTextLegibilityEffect : PXGEffect {
    double  _alpha;
    PXGShader * _shader;
    double  _strength;
    UIColor * _tintColor;
    PXGUniform * _values;
}

@property (nonatomic) double alpha;
@property (nonatomic) double strength;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (void)_updateValues;
- (double)alpha;
- (id)initWithEntityManager:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setStrength:(double)arg1;
- (void)setTintColor:(id)arg1;
- (id)shader;
- (double)strength;
- (id)tintColor;

@end
