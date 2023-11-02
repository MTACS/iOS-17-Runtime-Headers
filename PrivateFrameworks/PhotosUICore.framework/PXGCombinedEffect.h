
@interface PXGCombinedEffect : PXGEffect {
    PXGShader * _combinedShader;
    NSArray * _effects;
}

@property (nonatomic, readonly) NSArray *effects;

+ (id)combinedShaderSourceForEffects:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)effects;
- (id)initWithEffects:(id)arg1;
- (id)initWithEntityManager:(id)arg1;
- (id)shader;

@end
