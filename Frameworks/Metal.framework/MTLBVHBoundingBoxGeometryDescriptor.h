
@interface MTLBVHBoundingBoxGeometryDescriptor : MTLBVHGeometryDescriptor {
    NSArray * _boundingBoxBuffers;
    unsigned long long  _boundingBoxStride;
}

@property (nonatomic) NSArray *boundingBoxBuffers;
@property (nonatomic) unsigned long long boundingBoxStride;

- (void).cxx_destruct;
- (id)boundingBoxBuffers;
- (unsigned long long)boundingBoxStride;
- (unsigned long long)primitiveType;
- (void)setBoundingBoxBuffers:(id)arg1;
- (void)setBoundingBoxStride:(unsigned long long)arg1;

@end
