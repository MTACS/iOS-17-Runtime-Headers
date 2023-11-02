
@interface MTLToolsPipelineLibrary : MTLToolsObject <MTLPipelineLibrarySPI>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property bool disableRunTimeCompilation;
@property (nonatomic, readonly) <MTLPipelineCache> *functionCache;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) NSArray *metallibPaths;
@property (nonatomic, readonly) <MTLPipelineCache> *pipelineCache;
@property (readonly) NSArray *pipelineNames;
@property (readonly) Class superclass;

- (id)device;
- (bool)disableRunTimeCompilation;
- (id)functionCache;
- (id)label;
- (id)metallibPaths;
- (id)newComputePipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
- (id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
- (id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)pipelineCache;
- (id)pipelineNames;
- (void)setDisableRunTimeCompilation:(bool)arg1;
- (void)setLabel:(id)arg1;

@end
