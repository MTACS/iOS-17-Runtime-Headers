
@interface VNRShaders : NSObject {
    <MTLComputePipelineState> * _chromaInDownsample;
    <MTLComputePipelineState> * _chromaInOutDownsampleDeghost;
    <MTLComputePipelineState> * _deghostPropagateLuma;
    <MTLComputePipelineState> * _deghostPropagateLumaChroma;
    <MTLComputePipelineState> * _fusionBottomChroma;
    <MTLComputePipelineState> * _fusionBottomLuma;
    <MTLComputePipelineState> * _fusionInitialBottomChroma;
    <MTLComputePipelineState> * _fusionInitialBottomLuma;
    <MTLComputePipelineState> * _fusionInitialMidChroma;
    <MTLComputePipelineState> * _fusionInitialMidLuma;
    <MTLComputePipelineState> * _fusionInitialTopChroma;
    <MTLComputePipelineState> * _fusionInitialTopLuma;
    <MTLComputePipelineState> * _fusionMidChroma;
    <MTLComputePipelineState> * _fusionMidLuma;
    <MTLComputePipelineState> * _fusionTopChroma;
    <MTLComputePipelineState> * _fusionTopLuma;
    <MTLLibrary> * _library;
    <MTLComputePipelineState> * _lumaInDownsample;
    <MTLComputePipelineState> * _lumaInOutDownsampleDeghost;
    <MTLComputePipelineState> * _simpleCopy;
}

@property (readonly) <MTLComputePipelineState> *chromaInDownsample;
@property (readonly) <MTLComputePipelineState> *chromaInOutDownsampleDeghost;
@property (readonly) <MTLComputePipelineState> *deghostPropagateLuma;
@property (readonly) <MTLComputePipelineState> *deghostPropagateLumaChroma;
@property (readonly) <MTLComputePipelineState> *fusionBottomChroma;
@property (readonly) <MTLComputePipelineState> *fusionBottomLuma;
@property (readonly) <MTLComputePipelineState> *fusionInitialBottomChroma;
@property (readonly) <MTLComputePipelineState> *fusionInitialBottomLuma;
@property (readonly) <MTLComputePipelineState> *fusionInitialMidChroma;
@property (readonly) <MTLComputePipelineState> *fusionInitialMidLuma;
@property (readonly) <MTLComputePipelineState> *fusionInitialTopChroma;
@property (readonly) <MTLComputePipelineState> *fusionInitialTopLuma;
@property (readonly) <MTLComputePipelineState> *fusionMidChroma;
@property (readonly) <MTLComputePipelineState> *fusionMidLuma;
@property (readonly) <MTLComputePipelineState> *fusionTopChroma;
@property (readonly) <MTLComputePipelineState> *fusionTopLuma;
@property (readonly) <MTLComputePipelineState> *lumaInDownsample;
@property (readonly) <MTLComputePipelineState> *lumaInOutDownsampleDeghost;
@property (readonly) <MTLComputePipelineState> *simpleCopy;

- (void).cxx_destruct;
- (id)chromaInDownsample;
- (id)chromaInOutDownsampleDeghost;
- (id)createFusionShaderUsingMetalDevice:(id)arg1 colorChannel:(int)arg2 isFirstFrame:(bool)arg3 isTopBand:(bool)arg4 isBottomBand:(bool)arg5;
- (id)deghostPropagateLuma;
- (id)deghostPropagateLumaChroma;
- (id)fusionBottomChroma;
- (id)fusionBottomLuma;
- (id)fusionInitialBottomChroma;
- (id)fusionInitialBottomLuma;
- (id)fusionInitialMidChroma;
- (id)fusionInitialMidLuma;
- (id)fusionInitialTopChroma;
- (id)fusionInitialTopLuma;
- (id)fusionMidChroma;
- (id)fusionMidLuma;
- (id)fusionTopChroma;
- (id)fusionTopLuma;
- (id)initWithMetalDevice:(id)arg1;
- (id)lumaInDownsample;
- (id)lumaInOutDownsampleDeghost;
- (id)simpleCopy;

@end
