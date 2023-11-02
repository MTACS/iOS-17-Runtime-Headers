
@interface MTLBVHPolygonGeometryDescriptor : MTLBVHGeometryDescriptor {
    <MTLBuffer> * _indexBuffer;
    unsigned long long  _indexBufferOffset;
    unsigned long long  _indexType;
    unsigned long long  _polygonType;
    <MTLBuffer> * _transformationMatrixBuffer;
    unsigned long long  _transformationMatrixOffsetBuffer;
    NSArray * _vertexBuffers;
    unsigned long long  _vertexFormat;
    unsigned long long  _vertexStride;
}

@property (nonatomic) <MTLBuffer> *indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long polygonType;
@property (nonatomic) <MTLBuffer> *transformationMatrixBuffer;
@property (nonatomic) unsigned long long transformationMatrixBufferOffset;
@property (nonatomic) NSArray *vertexBuffers;
@property (nonatomic) unsigned long long vertexFormat;
@property (nonatomic) unsigned long long vertexStride;

- (void).cxx_destruct;
- (id)indexBuffer;
- (unsigned long long)indexBufferOffset;
- (unsigned long long)indexType;
- (unsigned long long)polygonType;
- (unsigned long long)primitiveType;
- (void)setIndexBuffer:(id)arg1;
- (void)setIndexBufferOffset:(unsigned long long)arg1;
- (void)setIndexType:(unsigned long long)arg1;
- (void)setPolygonType:(unsigned long long)arg1;
- (void)setTransformationMatrixBuffer:(id)arg1;
- (void)setTransformationMatrixBufferOffset:(unsigned long long)arg1;
- (void)setVertexBuffers:(id)arg1;
- (void)setVertexFormat:(unsigned long long)arg1;
- (void)setVertexStride:(unsigned long long)arg1;
- (id)transformationMatrixBuffer;
- (unsigned long long)transformationMatrixBufferOffset;
- (id)vertexBuffers;
- (unsigned long long)vertexFormat;
- (unsigned long long)vertexStride;

@end
