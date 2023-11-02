
@interface _PipelineLibrarySerializer : NSObject {
    void * _binarySerializer;
}

- (id)addComputePipelineDescriptor:(const void*)arg1;
- (unsigned long long)addLibrary:(void*)arg1;
- (id)addMeshRenderPipelineDescriptor:(const void*)arg1;
- (id)addRenderPipelineDescriptor:(const void*)arg1;
- (id)addSpecializedFunction:(id)arg1 descriptor:(const void*)arg2;
- (id)addTileRenderPipelineDescriptor:(const void*)arg1;
- (void)dealloc;
- (id)init;
- (unsigned long long)totalSize;
- (unsigned long long)writeToMemory:(char *)arg1 size:(unsigned long long)arg2;

@end
