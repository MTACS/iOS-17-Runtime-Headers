
@interface CMIWarpStage : NSObject {
    <MTLComputePipelineState> * _gdcPipeline;
    <MTLComputePipelineState> * _gdcYUVPipeline;
    <MTLComputePipelineState> * _inverseGDCPipeline;
    <MTLComputePipelineState> * _inverseGDCYUVPipeline;
    FigMetalContext * _metal;
    <MTLComputePipelineState> * _simpleDemosaicPipeline;
    <MTLComputePipelineState> * _warpPipeline;
    <MTLComputePipelineState> * _warpWithGDCPipeline;
}

- (void).cxx_destruct;
- (int)_compileShaders;
- (id)initWithOptionalCommandQueue:(id)arg1 allocator:(id)arg2;
- (int)runGDC:(id)arg1 outputTex:(id)arg2 warpConfig:(struct CMIWarpConfig { }*)arg3 gdcParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg4 inverseGDC:(bool)arg5;
- (int)runGDCWithInputLuma:(id)arg1 inputChromaTex:(id)arg2 outputLumaTex:(id)arg3 outputChromaTex:(id)arg4 warpConfig:(struct CMIWarpConfig { }*)arg5 gdcParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg6 inverseGDC:(bool)arg7;
- (int)runWarpUsingTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 inputBayerTex:(id)arg2 firstPix:(int)arg3 outputRGBTex:(id)arg4;
- (int)runWarpUsingTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 inputLumaTex:(id)arg2 inputChromaTex:(id)arg3 outputLumaTex:(id)arg4 outputChromaTex:(id)arg5;
- (int)runWarpUsingTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 inputLumaTex:(id)arg2 inputChromaTex:(id)arg3 outputLumaTex:(id)arg4 outputChromaTex:(id)arg5 inputFrameGDCParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg6 outputFrameGDCParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg7;
- (int)runWarpUsingTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 inputTex:(id)arg2 outputTex:(id)arg3;
- (int)runWarpUsingTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 inputTex:(id)arg2 outputTex:(id)arg3 inputFrameGDCParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg4 outputFrameGDCParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg5;

@end
