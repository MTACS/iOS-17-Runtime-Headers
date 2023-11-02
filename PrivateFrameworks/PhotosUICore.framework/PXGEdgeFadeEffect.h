
@interface PXGEdgeFadeEffect : PXGEffect {
    PXGUniform * _directionUniform;
    PXGShader * _shader;
}

@property (nonatomic) long long direction;

- (void).cxx_destruct;
- (long long)direction;
- (id)initWithEntityManager:(id)arg1;
- (void)setDirection:(long long)arg1;
- (id)shader;

@end
