
@interface ABPK3DLiftingResult : NSObject {
    float  _estimatedScale;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _jointsVector;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _rawNetworkOutputJointsVector;
    ABPK2DDetectionResult * _skeletonDetectionResult2D;
}

@property (nonatomic) float estimatedScale;
@property (nonatomic, readonly) unsigned long long jointCount;
@property (nonatomic, readonly) /* Warning: Unrecognized filer type: '' using 'void*' */ void**joints;
@property (nonatomic, readonly) /* Warning: Unrecognized filer type: '' using 'void*' */ void**rawNetworkOutputJoints;
@property (nonatomic, readonly) ABPK2DDetectionResult *skeletonDetectionResult2D;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createResultScaledByFactor:(float)arg1;
- (float)estimatedScale;
- (id)init;
- (id)initWithJoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 numberOfJoints:(unsigned long long)arg2;
- (id)initWithJoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 numberOfJoints:(unsigned long long)arg2 rawNetworkOutputs:(const /* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 referenceDetectionResult:(id)arg4;
- (id)initWithJoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 numberOfJoints:(unsigned long long)arg2 referenceDetectionResult:(id)arg3;
- (id)initWithJoints:(struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>=^^{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>=^ {})arg1 rawNetworkOutputs:(struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>=^^{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>=^ {})arg2 referenceDetectionResult:(id)arg3;
- (bool)isJointTracked:(long long)arg1;
- (unsigned long long)jointCount;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)joints;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)rawNetworkOutputJoints;
- (void)setEstimatedScale:(float)arg1;
- (id)skeletonDetectionResult2D;

@end
