
@interface _MTLIndirectDrawIndexedArguments : NSObject {
    unsigned long long  _baseInstance;
    unsigned long long  _baseVertex;
    unsigned long long  _indexBufferGPUVirtualAddress;
    unsigned long long  _indexBufferOffset;
    void * _indexBufferVirtualAddress;
    unsigned long long  _indexCount;
    unsigned long long  _indexType;
    unsigned long long  _instanceCount;
    unsigned long long  _primitiveType;
}

@property (nonatomic) unsigned long long baseInstance;
@property (nonatomic) unsigned long long baseVertex;
@property (nonatomic) unsigned long long indexBufferGPUVirtualAddress;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) void*indexBufferVirtualAddress;
@property (nonatomic) unsigned long long indexCount;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic) unsigned long long primitiveType;

- (unsigned long long)baseInstance;
- (unsigned long long)baseVertex;
- (unsigned long long)indexBufferGPUVirtualAddress;
- (unsigned long long)indexBufferOffset;
- (void*)indexBufferVirtualAddress;
- (unsigned long long)indexCount;
- (unsigned long long)indexType;
- (unsigned long long)instanceCount;
- (unsigned long long)primitiveType;
- (void)setBaseInstance:(unsigned long long)arg1;
- (void)setBaseVertex:(unsigned long long)arg1;
- (void)setIndexBufferGPUVirtualAddress:(unsigned long long)arg1;
- (void)setIndexBufferOffset:(unsigned long long)arg1;
- (void)setIndexBufferVirtualAddress:(void*)arg1;
- (void)setIndexCount:(unsigned long long)arg1;
- (void)setIndexType:(unsigned long long)arg1;
- (void)setInstanceCount:(unsigned long long)arg1;
- (void)setPrimitiveType:(unsigned long long)arg1;

@end
