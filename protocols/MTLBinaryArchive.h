
@protocol MTLBinaryArchive <NSObject>

@required

- (bool)addComputePipelineFunctionsWithDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id*)arg2;
- (bool)addFunctionWithDescriptor:(MTLFunctionDescriptor *)arg1 library:(id <MTLLibrary>)arg2 error:(id*)arg3;
- (bool)addRenderPipelineFunctionsWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 error:(id*)arg2;
- (bool)addTileRenderPipelineFunctionsWithDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 error:(id*)arg2;
- (<MTLDevice> *)device;
- (NSString *)label;
- (bool)serializeToURL:(NSURL *)arg1 error:(id*)arg2;
- (void)setLabel:(NSString *)arg1;

@end
