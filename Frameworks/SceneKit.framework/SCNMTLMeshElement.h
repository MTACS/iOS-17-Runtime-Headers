
@interface SCNMTLMeshElement : NSObject <NSCopying> {
    <MTLBuffer> * _drawIndexedPrimitivesIndirectBuffer;
    long long  _drawIndexedPrimitivesIndirectBufferOffset;
    long long  _effectiveIndexCount;
    long long  _effectiveIndexOffset;
    SCNMTLBuffer * _indexBuffer;
    long long  _indexCount;
    unsigned long long  _indexType;
    unsigned long long  _instanceCount;
    unsigned long long  _primitiveType;
    long long  _sharedIndexBufferOffset;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;

@end
