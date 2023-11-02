
@interface MTLGPUDebugLibrary : MTLToolsLibrary

// Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools

- (id)initWithLibrary:(id)arg1 device:(id)arg2;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 error:(id*)arg4;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/GPUToolsDiagnostics.framework/GPUToolsDiagnostics

- (void)newFunctionWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newFunctionWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newFunctionWithName:(id)arg1;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3;
- (void)newIntersectionFunctionWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newIntersectionFunctionWithDescriptor:(id)arg1 error:(id*)arg2;

@end
