
@interface MTLAccelerationStructureCurveGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor {
    <MTLBuffer> * _controlPointBuffer;
    unsigned long long  _controlPointBufferOffset;
    unsigned long long  _controlPointCount;
    unsigned long long  _controlPointFormat;
    unsigned long long  _controlPointStride;
    long long  _curveBasis;
    long long  _curveType;
    long long  _endCaps;
    <MTLBuffer> * _indexBuffer;
    unsigned long long  _indexBufferOffset;
    unsigned long long  _indexType;
    <MTLBuffer> * _radiusBuffer;
    unsigned long long  _radiusBufferOffset;
    unsigned long long  _radiusFormat;
    unsigned long long  _radiusStride;
    unsigned long long  _segmentControlPointCount;
    unsigned long long  _segmentCount;
}

@property (nonatomic, retain) <MTLBuffer> *controlPointBuffer;
@property (nonatomic) unsigned long long controlPointBufferOffset;
@property (nonatomic) unsigned long long controlPointCount;
@property (nonatomic) unsigned long long controlPointFormat;
@property (nonatomic) unsigned long long controlPointStride;
@property (nonatomic) long long curveBasis;
@property (nonatomic) long long curveEndCaps;
@property (nonatomic) long long curveType;
@property (nonatomic) long long endCaps;
@property (nonatomic, retain) <MTLBuffer> *indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic, retain) <MTLBuffer> *radiusBuffer;
@property (nonatomic) unsigned long long radiusBufferOffset;
@property (nonatomic) unsigned long long radiusFormat;
@property (nonatomic) unsigned long long radiusStride;
@property (nonatomic) unsigned long long segmentControlPointCount;
@property (nonatomic) unsigned long long segmentCount;

+ (id)descriptor;

- (id)controlPointBuffer;
- (unsigned long long)controlPointBufferOffset;
- (unsigned long long)controlPointCount;
- (unsigned long long)controlPointFormat;
- (unsigned long long)controlPointStride;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)curveBasis;
- (long long)curveEndCaps;
- (long long)curveType;
- (void)dealloc;
- (long long)endCaps;
- (unsigned long long)hash;
- (id)indexBuffer;
- (unsigned long long)indexBufferOffset;
- (unsigned long long)indexType;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)radiusBuffer;
- (unsigned long long)radiusBufferOffset;
- (unsigned long long)radiusFormat;
- (unsigned long long)radiusStride;
- (unsigned long long)segmentControlPointCount;
- (unsigned long long)segmentCount;
- (void)setControlPointBuffer:(id)arg1;
- (void)setControlPointBufferOffset:(unsigned long long)arg1;
- (void)setControlPointCount:(unsigned long long)arg1;
- (void)setControlPointFormat:(unsigned long long)arg1;
- (void)setControlPointStride:(unsigned long long)arg1;
- (void)setCurveBasis:(long long)arg1;
- (void)setCurveEndCaps:(long long)arg1;
- (void)setCurveType:(long long)arg1;
- (void)setEndCaps:(long long)arg1;
- (void)setIndexBuffer:(id)arg1;
- (void)setIndexBufferOffset:(unsigned long long)arg1;
- (void)setIndexType:(unsigned long long)arg1;
- (void)setRadiusBuffer:(id)arg1;
- (void)setRadiusBufferOffset:(unsigned long long)arg1;
- (void)setRadiusFormat:(unsigned long long)arg1;
- (void)setRadiusStride:(unsigned long long)arg1;
- (void)setSegmentControlPointCount:(unsigned long long)arg1;
- (void)setSegmentCount:(unsigned long long)arg1;

@end
