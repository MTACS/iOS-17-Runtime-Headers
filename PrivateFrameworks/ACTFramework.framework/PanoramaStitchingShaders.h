
@interface PanoramaStitchingShaders : NSObject {
    <MTLComputePipelineState> * _computeCentralStitchingMask;
    <MTLComputePipelineState> * _computeSeamCost;
    <MTLComputePipelineState> * _initializeSeamPreviousSlice;
    <MTLComputePipelineState> * _initializeSeamPreviousSliceWithMask;
    <MTLComputePipelineState> * _seamCutAscend;
    <MTLComputePipelineState> * _seamCutDescend;
}

@property (nonatomic, readonly) <MTLComputePipelineState> *computeCentralStitchingMask;
@property (nonatomic, readonly) <MTLComputePipelineState> *computeSeamCost;
@property (nonatomic, readonly) <MTLComputePipelineState> *initializeSeamPreviousSlice;
@property (nonatomic, readonly) <MTLComputePipelineState> *initializeSeamPreviousSliceWithMask;
@property (nonatomic, readonly) <MTLComputePipelineState> *seamCutAscend;
@property (nonatomic, readonly) <MTLComputePipelineState> *seamCutDescend;

- (void).cxx_destruct;
- (id)computeCentralStitchingMask;
- (id)computeSeamCost;
- (id)initWithContext:(id)arg1;
- (id)initializeSeamPreviousSlice;
- (id)initializeSeamPreviousSliceWithMask;
- (id)seamCutAscend;
- (id)seamCutDescend;

@end
