
@protocol MTLBinaryArchiveSPI <MTLBinaryArchive>

@required

- (bool)addComputePipelineFunctionsWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addLibraryWithDescriptor:(MTLStitchedLibraryDescriptor *)arg1 error:(id*)arg2;
- (bool)addMeshRenderPipelineFunctionsWithDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1 error:(id*)arg2;
- (bool)addMeshRenderPipelineFunctionsWithDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addRenderPipelineFunctionsWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)addTileRenderPipelineFunctionsWithDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (NSMutableArray *)archiveFunctionIds;
- (bool)enumerateArchivesFromBackingFile:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, struct { unsigned char x1[32]; }*, NSObject<OS_dispatch_data> *, void*
- (bool)enumerateArchivesFromPipelineCollection:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, struct { unsigned char x1[32]; }*, NSObject<OS_dispatch_data> *, void*
- (NSString *)formattedDescription:(unsigned long long)arg1;
- (void)initMetalScriptWithArchive:(id <MTLBinaryArchive>)arg1;
- (NSArray *)keys;
- (<NSObject> *)newPipelineDescriptorAtIndex:(unsigned long long)arg1 pipelineType:(unsigned int*)arg2 error:(id*)arg3;
- (unsigned long long)options;
- (void*)pipelineCollection;
- (unsigned long long)recompilablePipelineCount;
- (bool)recompileToArchive:(id <MTLBinaryArchiveSPI>)arg1 error:(id*)arg2;
- (bool)serializeToURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)storeComputePipelineDescriptor:(MTLComputePipelineDescriptor *)arg1;
- (bool)storeMeshRenderPipelineDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1;
- (bool)storeRenderPipelineDescriptor:(MTLRenderPipelineDescriptor *)arg1;
- (bool)storeTileRenderPipelineDescriptor:(MTLTileRenderPipelineDescriptor *)arg1;

@end
