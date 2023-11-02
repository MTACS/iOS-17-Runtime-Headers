
@interface PXGColorTintEffect : PXGEffect {
    PXGShader * _shader;
    UIColor * _tintColor;
    PXGUniform * _tintColorUniform;
}

@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)initWithEntityManager:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)shader;
- (id)tintColor;

@end
