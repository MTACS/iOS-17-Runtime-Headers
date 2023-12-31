
@interface CVAFilterRenderStagelight : NSObject {
    NSString * _label;
    <MTLComputePipelineState> * _renderingStageLightKernel_bothCubes;
    <MTLComputePipelineState> * _renderingStageLightKernel_cube;
    <MTLComputePipelineState> * _renderingStageLightKernel_noCube;
    <MTLComputePipelineState> * _renderingStageLightKernel_proxyCube;
}

@property (readonly) NSString *label;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg1 srcColorTex:(id)arg2 srcAlphaTex:(id)arg3 dstYTex:(id)arg4 dstUVTex:(id)arg5 stageLightProxyLut:(id)arg6 stageLightLut:(id)arg7 blackBackgroundIntensity:(float)arg8 vignetteIntensity:(float)arg9;
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4;
- (id)label;

@end
