
@interface MTLBVHCurveGeometryDescriptor : MTLBVHGeometryDescriptor {
    NSArray * _controlPointBuffers;
    unsigned long long  _controlPointCount;
    unsigned long long  _controlPointFormat;
    unsigned long long  _controlPointStride;
    long long  _curveBasis;
    long long  _curveEndCaps;
    long long  _curveType;
    <MTLBuffer> * _indexBuffer;
    unsigned long long  _indexBufferOffset;
    unsigned long long  _indexType;
    NSArray * _radiusBuffers;
    unsigned long long  _radiusFormat;
    unsigned long long  _radiusStride;
    unsigned long long  _segmentControlPointCount;
}

@property (nonatomic) NSArray *controlPointBuffers;
@property (nonatomic) unsigned long long controlPointCount;
@property (nonatomic) unsigned long long controlPointFormat;
@property (nonatomic) unsigned long long controlPointStride;
@property (nonatomic) long long curveBasis;
@property (nonatomic) long long curveEndCaps;
@property (nonatomic) long long curveType;
@property (nonatomic) <MTLBuffer> *indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) NSArray *radiusBuffers;
@property (nonatomic) unsigned long long radiusFormat;
@property (nonatomic) unsigned long long radiusStride;
@property (nonatomic) unsigned long long segmentControlPointCount;

- (void).cxx_destruct;
- (id)controlPointBuffers;
- (unsigned long long)controlPointCount;
- (unsigned long long)controlPointFormat;
- (unsigned long long)controlPointStride;
- (long long)curveBasis;
- (long long)curveEndCaps;
- (long long)curveType;
- (id)indexBuffer;
- (unsigned long long)indexBufferOffset;
- (unsigned long long)indexType;
- (unsigned long long)primitiveType;
- (id)radiusBuffers;
- (unsigned long long)radiusFormat;
- (unsigned long long)radiusStride;
- (unsigned long long)segmentControlPointCount;
- (void)setControlPointBuffers:(id)arg1;
- (void)setControlPointCount:(unsigned long long)arg1;
- (void)setControlPointFormat:(unsigned long long)arg1;
- (void)setControlPointStride:(unsigned long long)arg1;
- (void)setCurveBasis:(long long)arg1;
- (void)setCurveEndCaps:(long long)arg1;
- (void)setCurveType:(long long)arg1;
- (void)setIndexBuffer:(id)arg1;
- (void)setIndexBufferOffset:(unsigned long long)arg1;
- (void)setIndexType:(unsigned long long)arg1;
- (void)setRadiusBuffers:(id)arg1;
- (void)setRadiusFormat:(unsigned long long)arg1;
- (void)setRadiusStride:(unsigned long long)arg1;
- (void)setSegmentControlPointCount:(unsigned long long)arg1;

@end
