
@interface ARFaceGeometry : NSObject <NSCopying, NSSecureCoding> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _customVertices;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _normals;
    NSObject<OS_dispatch_semaphore> * _normalsSemaphore;
    <ARFaceTrackingDataProtocol> * _trackingData;
}

@property (nonatomic, readonly) unsigned long long textureCoordinateCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**textureCoordinates;
@property (nonatomic, readonly) unsigned long long triangleCount;
@property (nonatomic, readonly) const short*triangleIndices;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**vertices;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (short)closestVertexIndexToLabeledFacePosition:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initPrivate;
- (id)initWithBlendShapes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomVertices:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 verticesCount:(unsigned long long)arg2;
- (id)initWithFaceTrackingData:(id)arg1;
- (id)initWithFaceTrackingDataProtocol:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)normalCount;
- (void)normalForLabeledFacePosition:(id)arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)normals;
- (void)positionForLabeledFacePosition:(id)arg1;
- (unsigned long long)textureCoordinateCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)textureCoordinates;
- (unsigned long long)triangleCount;
- (const short*)triangleIndices;
- (unsigned long long)vertexCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)vertices;

@end
