
@interface ARMeshAnchor : ARAnchor {
    void _corner;
    void _extent;
    ARMeshGeometry * _geometry;
    double  _maxExtentError;
    double  _timestamp;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionTransform;
}

@property (nonatomic, readonly) void corner;
@property (nonatomic, readonly) void extent;
@property (nonatomic, readonly) ARMeshGeometry *geometry;
@property (nonatomic) double maxExtentError;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionTransform;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)corner;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)extent;
- (id)geometry;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeometry:(id)arg1 atTimestamp:(double)arg2 identifier:(id)arg3;
- (id)initWithGeometry:(id)arg1 atTimestamp:(double)arg2 identifier:(id)arg3 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4;
- (id)initWithGeometry:(id)arg1 atTimestamp:(double)arg2 identifier:(id)arg3 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4;
- (id)initWithGeometry:(id)arg1 atTimestamp:(double)arg2 identifier:(id)arg3 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 voxelSize:(double)arg5;
- (id)initWithGeometry:(id)arg1 atTimestamp:(double)arg2 identifier:(id)arg3 visionTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg5;
- (double)maxExtentError;
- (void)setMaxExtentError:(double)arg1;
- (double)timestamp;
- (id)tracingEntry;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionTransform;

@end
