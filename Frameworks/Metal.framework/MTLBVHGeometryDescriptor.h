
@interface MTLBVHGeometryDescriptor : NSObject {
    <MTLBuffer> * _maskBuffer;
    unsigned long long  _maskBufferOffset;
    unsigned long long  _primitiveCount;
    <MTLBuffer> * _primitiveDataBuffer;
    unsigned long long  _primitiveDataBufferOffset;
    unsigned long long  _primitiveDataElementSize;
    unsigned long long  _primitiveDataStride;
}

@property (nonatomic) <MTLBuffer> *maskBuffer;
@property (nonatomic) unsigned long long maskBufferOffset;
@property (nonatomic) unsigned long long primitiveCount;
@property (nonatomic) <MTLBuffer> *primitiveDataBuffer;
@property (nonatomic) unsigned long long primitiveDataBufferOffset;
@property (nonatomic) unsigned long long primitiveDataElementSize;
@property (nonatomic) unsigned long long primitiveDataStride;
@property (nonatomic, readonly) unsigned long long primitiveType;

- (void).cxx_destruct;
- (id)maskBuffer;
- (unsigned long long)maskBufferOffset;
- (unsigned long long)primitiveCount;
- (id)primitiveDataBuffer;
- (unsigned long long)primitiveDataBufferOffset;
- (unsigned long long)primitiveDataElementSize;
- (unsigned long long)primitiveDataStride;
- (unsigned long long)primitiveType;
- (void)setMaskBuffer:(id)arg1;
- (void)setMaskBufferOffset:(unsigned long long)arg1;
- (void)setPrimitiveCount:(unsigned long long)arg1;
- (void)setPrimitiveDataBuffer:(id)arg1;
- (void)setPrimitiveDataBufferOffset:(unsigned long long)arg1;
- (void)setPrimitiveDataElementSize:(unsigned long long)arg1;
- (void)setPrimitiveDataStride:(unsigned long long)arg1;

@end
