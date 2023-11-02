
@interface CVAFilterRenderComposite : NSObject {
    NSString * _label;
    <MTLComputePipelineState> * _renderingCompositeApplyColorCubes;
    <MTLComputePipelineState> * _renderingCompositeFixUpAddNoiseKernel;
    <MTLComputePipelineState> * _renderingCompositeFixupAndBGColorMapKernel;
    <MTLComputePipelineState> * _renderingCompositeFixupAndColorMapKernel;
    <MTLComputePipelineState> * _renderingCompositeFixupAndFGColorMapKernel;
}

@property (readonly) NSString *label;

- (void).cxx_destruct;
- (void)encodeColorCubesToCommandBuffer:(id)arg1 sdofYTexture:(id)arg2 sdofUVTexture:(id)arg3 alphaTexture:(id)arg4 fgColorLut:(id)arg5 bgColorLut:(id)arg6 dstColorTex:(id)arg7 dstColorTex_plane1:(id)arg8;
- (void)encodeToCommandBuffer:(id)arg1 srcForegroundTex:(id)arg2 srcBackgroundTex:(id)arg3 srcCocTex:(id)arg4 dstYTex:(id)arg5 dstUVTex:(id)arg6 fgColorLut:(id)arg7 bgColorLut:(id)arg8 frameNumber:(unsigned int)arg9 seedGeneratorFactor:(unsigned int)arg10 noiseBits:(int)arg11 noiseBitsFactor:(float)arg12 cubeIntensity:(float)arg13 maxBlurRadius:(struct optional<float> { bool x1; float x2; })arg14;
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4;
- (id)label;

@end
