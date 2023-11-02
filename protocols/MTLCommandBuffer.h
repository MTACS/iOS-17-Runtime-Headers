
@protocol MTLCommandBuffer <NSObject>

@required

- (double)GPUEndTime;
- (double)GPUStartTime;
- (<MTLAccelerationStructureCommandEncoder> *)accelerationStructureCommandEncoder;
- (<MTLAccelerationStructureCommandEncoder> *)accelerationStructureCommandEncoderWithDescriptor:(MTLAccelerationStructurePassDescriptor *)arg1;
- (void)addCompletedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLCommandBuffer> *, void*
- (void)addScheduledHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLCommandBuffer> *, void*
- (<MTLBlitCommandEncoder> *)blitCommandEncoder;
- (<MTLBlitCommandEncoder> *)blitCommandEncoderWithDescriptor:(MTLBlitPassDescriptor *)arg1;
- (<MTLCommandQueue> *)commandQueue;
- (void)commit;
- (<MTLComputeCommandEncoder> *)computeCommandEncoder;
- (<MTLComputeCommandEncoder> *)computeCommandEncoderWithDescriptor:(MTLComputePassDescriptor *)arg1;
- (<MTLComputeCommandEncoder> *)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (<MTLDevice> *)device;
- (void)encodeSignalEvent:(id <MTLEvent>)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id <MTLEvent>)arg1 value:(unsigned long long)arg2;
- (void)enqueue;
- (NSError *)error;
- (unsigned long long)errorOptions;
- (double)kernelEndTime;
- (double)kernelStartTime;
- (NSString *)label;
- (<MTLLogContainer> *)logs;
- (<MTLParallelRenderCommandEncoder> *)parallelRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (void)popDebugGroup;
- (void)presentDrawable:(id <MTLDrawable>)arg1;
- (void)presentDrawable:(id <MTLDrawable>)arg1 afterMinimumDuration:(double)arg2;
- (void)presentDrawable:(id <MTLDrawable>)arg1 atTime:(double)arg2;
- (void)pushDebugGroup:(NSString *)arg1;
- (<MTLRenderCommandEncoder> *)renderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (<MTLResourceStateCommandEncoder> *)resourceStateCommandEncoder;
- (<MTLResourceStateCommandEncoder> *)resourceStateCommandEncoderWithDescriptor:(MTLResourceStatePassDescriptor *)arg1;
- (bool)retainedReferences;
- (void)setLabel:(NSString *)arg1;
- (unsigned long long)status;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
