
@interface MTLCountersDevice : MTLToolsDevice {
    bool  _APITimingEnabled;
}

@property (nonatomic, readonly) bool APITimingEnabled;

- (bool)APITimingEnabled;
- (void)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(id /* block */)arg4;
- (id)newBufferWithDescriptor:(id)arg1;
- (id)newBufferWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newCommandQueue;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newDagStringWithGraphs:(id)arg1;
- (id)newDefaultLibrary;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id*)arg3;
- (id)newDynamicLibrary:(id)arg1 error:(id*)arg2;
- (id)newDynamicLibraryFromURL:(id)arg1 error:(id*)arg2;
- (id)newDynamicLibraryWithURL:(id)arg1 error:(id*)arg2;
- (id)newFence;
- (id)newFunctionWithGLCoreIR:(void*)arg1 functionType:(unsigned long long)arg2;
- (id)newFunctionWithGLCoreIR:(void*)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;
- (id)newFunctionWithGLESIR:(void*)arg1 functionType:(unsigned long long)arg2;
- (id)newFunctionWithGLESIR:(void*)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;
- (id)newFunctionWithGLIR:(void*)arg1 functionType:(unsigned long long)arg2;
- (id)newFunctionWithGLIR:(void*)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;
- (id)newHeapWithDescriptor:(id)arg1;
- (id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newLibraryWithCIFiltersForComputePipeline:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id*)arg3;
- (id)newLibraryWithData:(id)arg1 error:(id*)arg2;
- (void)newLibraryWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newLibraryWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithDescriptorSPI:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithGraphs:(id)arg1 functions:(id)arg2 error:(id*)arg3;
- (id)newLibraryWithGraphsSPI:(id)arg1 functions:(id)arg2 error:(id*)arg3;
- (id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newLibraryWithStitchedDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newLibraryWithStitchedDescriptor:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithStitchedDescriptorSPI:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithURL:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newTextureWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(id /* block */)arg4;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned long long)arg3;

@end
