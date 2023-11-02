
@interface CVAFilterColorAlphaToFgBg : NSObject {
    NSString * _label;
    <MTLComputePipelineState> * _splitBgKernel_rgba;
    <MTLComputePipelineState> * _splitFgBgKernel_rgba;
    <MTLComputePipelineState> * _splitFgKernel_rgba;
}

@property (readonly) NSString *label;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg1 srcColorTex:(id)arg2 srcAlphaTex:(id)arg3 dstForegroundTex:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 srcColorTex:(id)arg2 srcAlphaTex:(id)arg3 dstForegroundTex:(id)arg4 dstBackgroundTex:(id)arg5;
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4;
- (id)label;

@end
