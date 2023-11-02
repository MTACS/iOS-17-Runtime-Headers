
@interface PanoramaAssemblyShaders : NSObject {
    <MTLComputePipelineState> * _addSliceToProjectiveGrid;
    <MTLComputePipelineState> * _addSliceToStaging;
    <MTLComputePipelineState> * _addStagingToOutput;
    <MTLComputePipelineState> * _prepareForDenoising;
    <MTLComputePipelineState> * _resetPanoSizedState;
    <MTLComputePipelineState> * _resetSliceSizedState;
}

@property (nonatomic, readonly) <MTLComputePipelineState> *addSliceToProjectiveGrid;
@property (nonatomic, readonly) <MTLComputePipelineState> *addSliceToStaging;
@property (nonatomic, readonly) <MTLComputePipelineState> *addStagingToOutput;
@property (nonatomic, readonly) <MTLComputePipelineState> *prepareForDenoising;
@property (nonatomic, readonly) <MTLComputePipelineState> *resetPanoSizedState;
@property (nonatomic, readonly) <MTLComputePipelineState> *resetSliceSizedState;

- (void).cxx_destruct;
- (id)addSliceToProjectiveGrid;
- (id)addSliceToStaging;
- (id)addStagingToOutput;
- (id)initWithContext:(id)arg1;
- (id)prepareForDenoising;
- (id)resetPanoSizedState;
- (id)resetSliceSizedState;

@end
