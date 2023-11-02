
@interface MTLIOAccelIndirectCommandBuffer : MTLIOAccelResource {
    unsigned long long  _commandBufferType;
    MTLIndirectCommandBufferDescriptor * _descriptor;
    struct MTLIndirectCommandBufferHeader { 
        unsigned long long headerSize; 
        unsigned int commandTypes; 
        bool inheritPipelineState; 
        bool inheritBuffers; 
        unsigned char maxVertexBufferBindCount; 
        unsigned char maxFragmentBufferBindCount; 
        unsigned char maxKernelBufferBindCount; 
        unsigned char maxObjectBufferBindCount; 
        unsigned char maxMeshBufferBindCount; 
        bool supportRayTracing; 
        bool supportDynamicAttributeStride; 
        unsigned char maxKernelThreadgroupMemoryBindCount; 
        unsigned char maxObjectThreadgroupMemoryBindCount; 
        unsigned long long size; 
    }  _internalHeader;
    unsigned long long  _maxCommandCount;
    MTLIOAccelBuffer * _privateICBuffer;
    <MTLIndirectComputeCommandEncoder> * _privateIndirectComputeEncoder;
    <MTLIndirectRenderCommandEncoder> * _privateIndirectRenderEncoder;
}

@property (readonly) unsigned long long commandBufferType;
@property (readonly) MTLIndirectCommandBufferDescriptor *descriptor;
@property (readonly) struct MTLResourceID { unsigned long long x1; } gpuResourceID;
@property (readonly) MTLIOAccelBuffer *privateICBuffer;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long storageMode;

- (unsigned long long)commandBufferType;
- (void)dealloc;
- (id)descriptor;
- (bool)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasResource:(id)arg1;
- (void)getHeader:(void**)arg1 headerSize:(unsigned long long*)arg2;
- (unsigned long long)gpuHandle;
- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (id)indirectComputeCommandAtIndex:(unsigned long long)arg1;
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2 maxCommandCount:(unsigned long long)arg3;
- (bool)isAliasable;
- (bool)isComplete;
- (void)makeAliasable;
- (id)privateICBuffer;
- (void)resetWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)storageMode;
- (unsigned long long)uniqueIdentifier;
- (void)waitUntilComplete;

@end
