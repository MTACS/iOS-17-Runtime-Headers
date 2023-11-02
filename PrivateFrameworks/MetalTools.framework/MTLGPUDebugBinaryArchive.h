
@interface MTLGPUDebugBinaryArchive : MTLToolsBinaryArchive

- (bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithBinaryArchive:(id)arg1 device:(id)arg2;

@end
