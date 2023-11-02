
@interface MTLAccelerationStructureTriangleGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor {
    <MTLBuffer> * _indexBuffer;
    unsigned long long  _indexBufferOffset;
    unsigned long long  _indexType;
    <MTLBuffer> * _transformationMatrixBuffer;
    unsigned long long  _transformationMatrixBufferOffset;
    unsigned long long  _triangleCount;
    <MTLBuffer> * _vertexBuffer;
    unsigned long long  _vertexBufferOffset;
    unsigned long long  _vertexFormat;
    unsigned long long  _vertexStride;
}

@property (nonatomic, retain) <MTLBuffer> *indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic, retain) <MTLBuffer> *transformationMatrixBuffer;
@property (nonatomic) unsigned long long transformationMatrixBufferOffset;
@property (nonatomic) unsigned long long triangleCount;
@property (nonatomic, retain) <MTLBuffer> *vertexBuffer;
@property (nonatomic) unsigned long long vertexBufferOffset;
@property (nonatomic) unsigned long long vertexFormat;
@property (nonatomic) unsigned long long vertexStride;

+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)indexBuffer;
- (unsigned long long)indexBufferOffset;
- (unsigned long long)indexType;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setIndexBuffer:(id)arg1;
- (void)setIndexBufferOffset:(unsigned long long)arg1;
- (void)setIndexType:(unsigned long long)arg1;
- (void)setTransformationMatrixBuffer:(id)arg1;
- (void)setTransformationMatrixBufferOffset:(unsigned long long)arg1;
- (void)setTriangleCount:(unsigned long long)arg1;
- (void)setVertexBuffer:(id)arg1;
- (void)setVertexBufferOffset:(unsigned long long)arg1;
- (void)setVertexFormat:(unsigned long long)arg1;
- (void)setVertexStride:(unsigned long long)arg1;
- (id)transformationMatrixBuffer;
- (unsigned long long)transformationMatrixBufferOffset;
- (unsigned long long)triangleCount;
- (id)vertexBuffer;
- (unsigned long long)vertexBufferOffset;
- (unsigned long long)vertexFormat;
- (unsigned long long)vertexStride;

@end
