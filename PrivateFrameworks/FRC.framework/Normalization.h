
@interface Normalization : FRCMetalBase {
    <MTLComputePipelineState> * _denormalizeKernel;
    <MTLComputePipelineState> * _denormalizeToPlanarKernel;
    <MTLRenderPipelineState> * _denormalizeYCbCr10RenderKernel;
    <MTLRenderPipelineState> * _denormalizeYCbCr8RenderKernel;
    <MTLComputePipelineState> * _normalizePackedToPlanarKernel;
    <MTLComputePipelineState> * _normalizePlanarToPlanarKernel;
    <MTLComputePipelineState> * _normalizeYUV420ToPlanarKernel;
    bool  _selfNormalization;
    <MTLComputePipelineState> * _statisticsPackedKernel;
    <MTLComputePipelineState> * _statisticsPlanarKernel;
    <MTLComputePipelineState> * _statisticsYUV420Kernel;
    bool  _useSIMDSum;
    <MTLBuffer> * _vertsBuffer;
}

@property (nonatomic) bool selfNormalization;

- (void).cxx_destruct;
- (struct { float x1; float x2; })calcAnchorParamsFromNormParams:(struct { float x1; float x2; float x3[2]; float x4[2]; int x5; })arg1 anchor:(int)arg2;
- (struct { float x1; float x2; int x3; })calcDeNormParamsFromNormaParams:(struct { float x1; float x2; float x3[2]; float x4[2]; int x5; })arg1 timeScale:(float)arg2;
- (struct { float x1; float x2; })calcFrameStatistics:(struct __CVBuffer { }*)arg1;
- (struct { float x1; float x2; })calcTextureStatistics:(id)arg1;
- (void)denormalizeFrame:(struct __CVBuffer { }*)arg1 destination:(struct __CVBuffer { }*)arg2 params:(const struct { float x1; float x2; float x3[2]; float x4[2]; int x5; }*)arg3 timeScale:(float)arg4 callback:(id /* block */)arg5;
- (void)encodeDenormalizationRenderToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 params:(struct { float x1; float x2; int x3; })arg4;
- (void)encodeDenormalizationToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 params:(struct { float x1; float x2; int x3; })arg4;
- (void)encodeNormalizationToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 params:(struct { float x1; float x2; })arg4;
- (id)init;
- (struct { float x1; float x2; float x3[2]; float x4[2]; int x5; })normalizeFramesFirstInput:(struct __CVBuffer { }*)arg1 secondInput:(struct __CVBuffer { }*)arg2 firstOutput:(struct __CVBuffer { }*)arg3 secondOutput:(struct __CVBuffer { }*)arg4 callback:(id /* block */)arg5;
- (void)normalizeWithParmas:(struct { float x1; float x2; float x3[2]; float x4[2]; int x5; })arg1 firstInput:(struct __CVBuffer { }*)arg2 secondInput:(struct __CVBuffer { }*)arg3 firstOutput:(struct __CVBuffer { }*)arg4 secondOutput:(struct __CVBuffer { }*)arg5;
- (bool)selfNormalization;
- (void)setSelfNormalization:(bool)arg1;
- (void)setupMetal;

@end
