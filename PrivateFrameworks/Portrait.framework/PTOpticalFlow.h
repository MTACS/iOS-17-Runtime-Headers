
@interface PTOpticalFlow : NSObject {
    bool  _allocateDisplacementFWD;
    int  _colorHeight;
    int  _colorWidth;
    <MTLTexture> * _displacementFWD;
    bool  _inverseFlow;
    LKTFlowGPU * _lktflowgpuContext;
    PTMetalContext * _metalContext;
    <MTLComputePipelineState> * _warpTexture;
}

- (void).cxx_destruct;
- (id)displacementFWD;
- (short)estimateDisplacementFWD:(id)arg1 sourceRGBA:(id)arg2 destRGBA:(id)arg3;
- (short)estimateDisplacementStream:(id)arg1 destRGBA:(id)arg2 outDisplacement:(id)arg3;
- (short)estimateDisplacementStream:(id)arg1 index:(int)arg2 doOpticalFlow:(bool)arg3 destRGBA:(id)arg4;
- (id)initWithMetalContext:(id)arg1 colorSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 lktPreset:(long long)arg3;
- (id)initWithMetalContext:(id)arg1 colorSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 lktPreset:(long long)arg3 allocateDisplacementFWD:(bool)arg4 needConversionBGRA2YUVA:(bool)arg5 inverseFlow:(bool)arg6;
- (void)reset;
- (short)setDisplacementFWD:(id)arg1;
- (id)toTextureArray:(id)arg1;
- (short)warp:(id)arg1 inTexture:(id)arg2 inDisplacement:(id)arg3 outTextureWarped:(id)arg4;

@end
