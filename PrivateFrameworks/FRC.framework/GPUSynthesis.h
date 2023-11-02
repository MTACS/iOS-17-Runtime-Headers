
@interface GPUSynthesis : FRCMetalBase {
    <MTLComputePipelineState> * _averageErrorMap;
    <MTLComputePipelineState> * _combine2Textures;
    <MTLComputePipelineState> * _generateAlphaMap;
    <MTLComputePipelineState> * _postSmoothFilter;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeAlphaCmdToCommandBuffer:(id)arg1 fromBuffer0:(id)arg2 buffer1:(id)arg3 toAlpha:(id)arg4 timeScale:(float)arg5 toNormalized0:(id)arg6 toNormalized1:(id)arg7;
- (void)encodeAverageErrorCmdToCommandBuffer:(id)arg1 minErrorMap0:(id)arg2 minErrorMap1:(id)arg3 avgErrorMap0:(id)arg4 avgErrorMap1:(id)arg5 width:(int)arg6 height:(int)arg7;
- (void)encodeCombineCmdToCommandBuffer:(id)arg1 fromBuffer0:(id)arg2 buffer1:(id)arg3 best0:(id)arg4 best1:(id)arg5 map:(id)arg6 normalized0:(id)arg7 normalized1:(id)arg8 alpha:(id)arg9 flowStats0:(struct { struct { float x_1_1_1; float x_1_1_2; int x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; int x_2_1_3; } x2; float x3; float x4; }*)arg10 flowStats1:(struct { struct { float x_1_1_1; float x_1_1_2; int x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; int x_2_1_3; } x2; float x3; float x4; }*)arg11 toTexture:(id)arg12;
- (void)encodePostSmoothFilterCmdToCommandBuffer:(id)arg1 map:(id)arg2 fromTexture:(id)arg3 toTexture:(id)arg4;
- (id)initWithDevice:(id)arg1 commmandQueue:(id)arg2;
- (bool)setupMetal;

@end
