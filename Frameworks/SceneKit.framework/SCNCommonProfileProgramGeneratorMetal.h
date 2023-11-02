
@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator {
    bool  _allowHotReload;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _commonProfileIORange;
    NSArray * _injectionPointRanges;
    NSArray * _lightingInjectionPointRanges;
    NSString * _originalLightingSourceCode;
    NSString * _originalSourceCode;
    bool  _useFunctionConstants;
}

- (void)_loadSourceCode;
- (struct __C3DFXProgram { }*)_newProgramWithHashCode:(struct __C3DProgramHashCode { }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 introspectionDataPtr:(void*)arg3;
- (struct __C3DFXProgram { }*)_newProgramWithHashCodeWithFunctionConstants:(struct __C3DProgramHashCode { }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 introspectionDataPtr:(void*)arg3;
- (void)collectShaderForProgram:(struct __C3DFXMetalProgram { }*)arg1 hashCode:(id)arg2 newVertexFunctionName:(id)arg3 newFragmentFunctionName:(id)arg4 sourceCodeBlock:(id /* block */)arg5 additionalFileBlock:(id /* block */)arg6;
- (void)dealloc;
- (void)emptyShaderCache;
- (id)initAllowingHotReload:(bool)arg1;
- (int)profile;
- (id)splitInputOutputStructsIfNeededForSourceCode:(id)arg1 generatedFromReplacementStrings:(id)arg2 perPixelLighting:(bool)arg3 clipDistanceCount:(unsigned long long)arg4;

@end
