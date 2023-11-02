
@interface _VNInstanceMaskObservationMaskProductionResources : NSObject {
    <MTLComputePipelineState> * _applyMaskComputeState;
    BGRBilinearUpsampler * _bilinearUpsampler;
    NSObject<OS_dispatch_semaphore> * _completionSemaphore;
    <MTLComputePipelineState> * _cropCopyingComputeState;
    VNMetalContext * _metalContext;
}

@property (readonly) <MTLComputePipelineState> *applyMaskComputeState;
@property (readonly) BGRBilinearUpsampler *bilinearUpsampler;
@property (readonly) NSObject<OS_dispatch_semaphore> *completionSemaphore;
@property (readonly) <MTLComputePipelineState> *cropCopyingComputeState;
@property (readonly) VNMetalContext *metalContext;

- (void).cxx_destruct;
- (id)applyMaskComputeState;
- (id)bilinearUpsampler;
- (id)completionSemaphore;
- (id)cropCopyingComputeState;
- (void)dealloc;
- (id)metalContext;

@end
