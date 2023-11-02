
@interface _MRCMetalHybridBinarizer : NSObject {
    <MTLComputePipelineState> * _calcuateBlackPointsPipelineState;
    <MTLComputePipelineState> * _fixBlackPointsPipelineState;
    _MRCMetalContext * _metalContext;
    <MTLComputePipelineState> * _thresholdPipelineState;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMetalContext:(id)arg1 error:(id*)arg2;
- (id)newTextureByBinarizingPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;

@end
