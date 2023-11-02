
@interface PXGCombinedShaderSource : PXGShaderSource {
    NSArray * _combinedShaderSources;
    NSArray * _combinedUniforms;
    bool  _isEmpty;
}

@property (nonatomic, readonly) bool isEmpty;

- (void).cxx_destruct;
- (id)aliasedUniformsForEffects:(id)arg1;
- (id)description;
- (id)initWithEffects:(id)arg1;
- (bool)isEmpty;
- (bool)isValidForEffects:(id)arg1;

@end
