
@interface MTLAccelerationStructureMotionCurveGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor {
    NSArray * _controlPointBuffers;
    unsigned long long  _controlPointCount;
    unsigned long long  _controlPointFormat;
    unsigned long long  _controlPointStride;
    long long  _curveBasis;
    long long  _curveType;
    long long  _endCaps;
    <MTLBuffer> * _indexBuffer;
    unsigned long long  _indexBufferOffset;
    unsigned long long  _indexType;
    NSArray * _radiusBuffers;
    unsigned long long  _radiusFormat;
    unsigned long long  _radiusStride;
    unsigned long long  _segmentControlPointCount;
    unsigned long long  _segmentCount;
}

@property (nonatomic, copy) NSArray *controlPointBuffers;
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
@property (nonatomic, copy) NSArray *radiusBuffers;
@property (nonatomic) unsigned long long radiusFormat;
@property (nonatomic) unsigned long long radiusStride;
@property (nonatomic) unsigned long long segmentControlPointCount;
@property (nonatomic) unsigned long long segmentCount;

+ (id)descriptor;

- (id)controlPointBuffers;
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
- (id)radiusBuffers;
- (unsigned long long)radiusFormat;
- (unsigned long long)radiusStride;
- (unsigned long long)segmentControlPointCount;
- (unsigned long long)segmentCount;
- (void)setControlPointBuffers:(id)arg1;
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
- (void)setRadiusBuffers:(id)arg1;
- (void)setRadiusFormat:(unsigned long long)arg1;
- (void)setRadiusStride:(unsigned long long)arg1;
- (void)setSegmentControlPointCount:(unsigned long long)arg1;
- (void)setSegmentCount:(unsigned long long)arg1;

@end
