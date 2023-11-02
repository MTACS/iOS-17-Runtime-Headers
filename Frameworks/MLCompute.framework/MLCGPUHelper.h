
@interface MLCGPUHelper : NSObject

+ (id)allocateAndCopyToTemporaryMPSImageBatchForTensor:(id)arg1 commandBuffer:(id)arg2 batchSize:(unsigned long long)arg3 copyingKernel:(id)arg4 sourceMTLBuffer:(id)arg5 MLCDataType:(int)arg6 heapAllocator:(id)arg7;
+ (id)allocateMPSImageBatchForTensor:(id)arg1 commandBuffer:(id)arg2 kernel:(id)arg3 batchSize:(unsigned long long)arg4 heapAllocator:(id)arg5 imageBatchIsTemporary:(bool)arg6;
+ (id)allocateTemporaryMPSImageBatchForTensor:(id)arg1 commandBuffer:(id)arg2 kernel:(id)arg3 batchSize:(unsigned long long)arg4;
+ (void)concatChannelsForwardWithParams:(struct ConcatImageParams { unsigned short x1; unsigned short x2; unsigned short x3; })arg1 sourceImageBatch:(id)arg2 resultImageBatch:(id)arg3 commandBuffer:(id)arg4 device:(id)arg5 deviceIndex:(unsigned long long)arg6;
+ (void)copyMPSImageBatchToMTLBuffer:(id)arg1 commandBuffer:(id)arg2 sourceImageBatch:(id)arg3 destinationMTLBuffer:(id)arg4 MLCDataType:(int)arg5;
+ (void)copyMTLBufferToMPSImageBatch:(id)arg1 commandBuffer:(id)arg2 sourceMTLBuffer:(id)arg3 destinationImageBatch:(id)arg4 MLCDataType:(int)arg5;
+ (void)didModifyRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 buffer:(id)arg2;
+ (unsigned long long)mtlResourceOptions;
+ (unsigned long long)mtlStorageMode;
+ (void)synchronizeResource:(id)arg1 commandBuffer:(id)arg2;

@end
