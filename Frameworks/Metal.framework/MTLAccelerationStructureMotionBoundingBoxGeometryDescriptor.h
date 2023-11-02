
@interface MTLAccelerationStructureMotionBoundingBoxGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor {
    NSArray * _boundingBoxBuffers;
    unsigned long long  _boundingBoxCount;
    unsigned long long  _boundingBoxStride;
}

@property (nonatomic, copy) NSArray *boundingBoxBuffers;
@property (nonatomic) unsigned long long boundingBoxCount;
@property (nonatomic) unsigned long long boundingBoxStride;

+ (id)descriptor;

- (id)boundingBoxBuffers;
- (unsigned long long)boundingBoxCount;
- (unsigned long long)boundingBoxStride;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setBoundingBoxBuffers:(id)arg1;
- (void)setBoundingBoxCount:(unsigned long long)arg1;
- (void)setBoundingBoxStride:(unsigned long long)arg1;

@end
