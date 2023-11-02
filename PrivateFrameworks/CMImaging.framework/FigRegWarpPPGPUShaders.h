
@interface FigRegWarpPPGPUShaders : NSObject {
    <MTLComputePipelineState> * _affineMinSamplesSolverPipeline;
    <MTLComputePipelineState> * _boxFilterPipeline;
    <MTLComputePipelineState> * _copyImagePipeline;
    <MTLComputePipelineState> * _cornerDetectionFinalPassPipeline;
    <MTLComputePipelineState> * _cornerDetectionFirstPass4x4Pipeline;
    <MTLComputePipelineState> * _cornerMatchingPipeline;
    <MTLComputePipelineState> * _cornerResponsePipeline;
    <MTLComputePipelineState> * _downscaleImagePipeline;
    <MTLComputePipelineState> * _homographyMinSamplesSolverPipeline;
    <MTLComputePipelineState> * _homographySolverUsingAllCornersPipeline;
    <MTLComputePipelineState> * _homographySolverUsingInliersPipeline;
    <MTLComputePipelineState> * _reorderCornersPipeline;
    <MTLComputePipelineState> * _rigidMinSamplesSolverPipeline;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1;

@end
