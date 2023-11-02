
@interface PTGlobalReduction : NSObject {
    PTMTLDropHints * _dropHints;
    PTMetalContext * _metalContext;
    <MTLComputePipelineState> * _parallelReductionAverage;
    <MTLComputePipelineState> * _parallelReductionMax;
    <MTLComputePipelineState> * _parallelReductionMin;
    <MTLComputePipelineState> * _parallelReductionTextureMinMaxSimd;
    <MTLComputePipelineState> * _parallelReductionTextureSimd;
    NSArray * _simdMinMaxTextures;
    NSArray * _simdTextures;
    bool  _supportGpuSIMD;
    <MTLTexture> * _texPing;
    <MTLTexture> * _texPong;
    short  simdReductionThreadGroups;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  simdReductionThreadsPerGroup;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1 textureSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithMetalContext:(id)arg1 textureSize:(struct CGSize { double x1; double x2; })arg2 pixelFormat:(unsigned long long)arg3;
- (void)parallelReduction:(id)arg1 inTexture:(id)arg2 globalBuffer:(id)arg3 offset:(int)arg4 pipelineState:(id)arg5 reductionType:(int)arg6 factor:(float)arg7;
- (void)parallelReductionAverage:(id)arg1 inTexture:(id)arg2 outGlobalAverage:(id)arg3;
- (void)parallelReductionMax:(id)arg1 inTexture:(id)arg2 globalMaxBuffer:(id)arg3;
- (void)parallelReductionMin:(id)arg1 inTexture:(id)arg2 globalMinBuffer:(id)arg3;
- (void)parallelReductionMinMax:(id)arg1 inTexture:(id)arg2 globalMinMaxBuffer:(id)arg3;
- (void)parallelReductionTextureMinMaxSimd:(id)arg1 inTexture:(id)arg2 globalBuffer:(id)arg3;
- (void)parallelReductionTextureSimd:(id)arg1 inTexture:(id)arg2 globalBuffer:(id)arg3 offset:(int)arg4 reductionType:(int)arg5 factor:(float)arg6;

@end
