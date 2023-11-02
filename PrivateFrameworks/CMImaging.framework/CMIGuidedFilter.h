
@interface CMIGuidedFilter : NSObject {
    <MTLComputePipelineState> * _applyCoefficientsPipelineState;
    <MTLComputePipelineState> * _calculateCoefficientsPipelineState;
    <MTLComputePipelineState> * _filterCoefficientsPipelineState;
    FigMetalContext * _metal;
}

+ (bool)isSingleChannelTexture:(id)arg1;

- (void).cxx_destruct;
- (int)encodeToCommandBuffer:(id)arg1 inputTexture:(id)arg2 guideTexture:(id)arg3 outputTexture:(id)arg4 kernelRadius:(unsigned long long)arg5 epsilon:(float)arg6;
- (id)initWithOptionalCommandQueue:(id)arg1 allocator:(id)arg2;

@end
