
@interface MTLIndirectCommandBufferDescriptor : NSObject <NSCopying> {
    struct MTLIndirectCommandBufferDescriptorState { 
        unsigned long long commandTypes; 
        bool inheritPipelineState; 
        bool inheritBuffers; 
        unsigned long long maxVertexBufferBindCount; 
        unsigned long long maxFragmentBufferBindCount; 
        unsigned long long maxKernelBufferBindCount; 
        unsigned long long maxKernelThreadgroupMemoryBindCount; 
        unsigned long long maxObjectBufferBindCount; 
        unsigned long long maxMeshBufferBindCount; 
        unsigned long long maxObjectThreadgroupMemoryBindCount; 
        bool supportRayTracing; 
        bool supportDynamicAttributeStride; 
        unsigned long long resourceIndex; 
    }  _state;
}

@property (nonatomic) unsigned long long commandTypes;
@property (nonatomic) bool inheritBuffers;
@property (nonatomic) bool inheritPipelineState;
@property (nonatomic) unsigned long long maxFragmentBufferBindCount;
@property (nonatomic) unsigned long long maxKernelBufferBindCount;
@property (nonatomic) unsigned long long maxKernelThreadgroupMemoryBindCount;
@property (nonatomic) unsigned long long maxMeshBufferBindCount;
@property (nonatomic) unsigned long long maxObjectBufferBindCount;
@property (nonatomic) unsigned long long maxObjectThreadgroupMemoryBindCount;
@property (nonatomic) unsigned long long maxVertexBufferBindCount;
@property (nonatomic) unsigned long long resourceIndex;
@property (nonatomic) bool supportDynamicAttributeStride;
@property (nonatomic) bool supportRayTracing;

- (unsigned long long)commandTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)inheritBuffers;
- (bool)inheritPipelineState;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxFragmentBufferBindCount;
- (unsigned long long)maxKernelBufferBindCount;
- (unsigned long long)maxKernelThreadgroupMemoryBindCount;
- (unsigned long long)maxMeshBufferBindCount;
- (unsigned long long)maxObjectBufferBindCount;
- (unsigned long long)maxObjectThreadgroupMemoryBindCount;
- (unsigned long long)maxVertexBufferBindCount;
- (unsigned long long)resourceIndex;
- (void)setCommandTypes:(unsigned long long)arg1;
- (void)setInheritBuffers:(bool)arg1;
- (void)setInheritPipelineState:(bool)arg1;
- (void)setMaxFragmentBufferBindCount:(unsigned long long)arg1;
- (void)setMaxKernelBufferBindCount:(unsigned long long)arg1;
- (void)setMaxKernelThreadgroupMemoryBindCount:(unsigned long long)arg1;
- (void)setMaxMeshBufferBindCount:(unsigned long long)arg1;
- (void)setMaxObjectBufferBindCount:(unsigned long long)arg1;
- (void)setMaxObjectThreadgroupMemoryBindCount:(unsigned long long)arg1;
- (void)setMaxVertexBufferBindCount:(unsigned long long)arg1;
- (void)setResourceIndex:(unsigned long long)arg1;
- (void)setSupportDynamicAttributeStride:(bool)arg1;
- (void)setSupportRayTracing:(bool)arg1;
- (bool)supportDynamicAttributeStride;
- (bool)supportRayTracing;

@end
