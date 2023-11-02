
@protocol MTLPipelineLibrarySPI <MTLPipelineLibrary>

@required

- (<MTLDevice> *)device;
- (bool)disableRunTimeCompilation;
- (<MTLPipelineCache> *)functionCache;
- (NSString *)label;
- (NSArray *)metallibPaths;
- (MTLComputePipelineDescriptor *)newComputePipelineDescriptorWithName:(NSString *)arg1 error:(id*)arg2;
- (<MTLComputePipelineState> *)newComputePipelineStateWithName:(NSString *)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (MTLRenderPipelineDescriptor *)newRenderPipelineDescriptorWithName:(NSString *)arg1 error:(id*)arg2;
- (<MTLRenderPipelineState> *)newRenderPipelineStateWithName:(NSString *)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (<MTLPipelineCache> *)pipelineCache;
- (NSArray *)pipelineNames;
- (void)setDisableRunTimeCompilation:(bool)arg1;
- (void)setLabel:(NSString *)arg1;

@end
