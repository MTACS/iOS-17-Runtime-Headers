
@interface ComposerShader : ForwardDmShader {
    bool  _dolby84;
    bool  _forLLDovi;
}

+ (id)createShaderWithName:(id)arg1 dolby84:(bool)arg2 forLLDovi:(bool)arg3;

- (id)getComputePipeLineStateForDevice:(id)arg1 Library:(id)arg2;
- (id)initShaderWithName:(id)arg1 dolby84:(bool)arg2 forLLDovi:(bool)arg3;

@end
