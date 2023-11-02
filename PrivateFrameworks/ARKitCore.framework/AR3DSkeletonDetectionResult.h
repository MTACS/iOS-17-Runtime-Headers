
@interface AR3DSkeletonDetectionResult : NSObject <NSCopying, NSSecureCoding> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _jointsVector;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _jointsVectorLocalSpace;
    ABPK2DDetectionResult * _skeletonDetectionResult2D;
}

@property (nonatomic, readonly) unsigned long long jointCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**joints;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**jointsLocalSpace;
@property (nonatomic, readonly) ABPK2DDetectionResult *skeletonDetectionResult2D;

+ (id)childrenIndices;
+ (id)jointNames;
+ (id)parentIndices;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createResultScaledByFactor:(float)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 numberOfJoints:(unsigned long long)arg2 referenceDetectionResult:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isJointTracked:(long long)arg1;
- (unsigned long long)jointCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)joints;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)jointsLocalSpace;
- (id)skeletonDetectionResult2D;

@end
