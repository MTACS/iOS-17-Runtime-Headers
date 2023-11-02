
@interface MTLAccelerationStructureBoundingBoxGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor {
    <MTLBuffer> * _boundingBoxBuffer;
    unsigned long long  _boundingBoxBufferOffset;
    unsigned long long  _boundingBoxCount;
    unsigned long long  _boundingBoxStride;
}

@property (nonatomic, retain) <MTLBuffer> *boundingBoxBuffer;
@property (nonatomic) unsigned long long boundingBoxBufferOffset;
@property (nonatomic) unsigned long long boundingBoxCount;
@property (nonatomic) unsigned long long boundingBoxStride;

+ (id)descriptor;

- (id)boundingBoxBuffer;
- (unsigned long long)boundingBoxBufferOffset;
- (unsigned long long)boundingBoxCount;
- (unsigned long long)boundingBoxStride;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setBoundingBoxBuffer:(id)arg1;
- (void)setBoundingBoxBufferOffset:(unsigned long long)arg1;
- (void)setBoundingBoxCount:(unsigned long long)arg1;
- (void)setBoundingBoxStride:(unsigned long long)arg1;

@end
