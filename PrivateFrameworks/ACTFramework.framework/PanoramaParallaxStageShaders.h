
@interface PanoramaParallaxStageShaders : NSObject {
    <MTLComputePipelineState> * _applyWarpToSlice;
    <MTLComputePipelineState> * _computePreShifts;
    <MTLComputePipelineState> * _downsampleShifts;
}

@property (nonatomic, readonly) <MTLComputePipelineState> *applyWarpToSlice;
@property (nonatomic, readonly) <MTLComputePipelineState> *computePreShifts;
@property (nonatomic, readonly) <MTLComputePipelineState> *downsampleShifts;

- (void).cxx_destruct;
- (id)applyWarpToSlice;
- (id)computePreShifts;
- (id)downsampleShifts;
- (id)initWithContext:(id)arg1;

@end
