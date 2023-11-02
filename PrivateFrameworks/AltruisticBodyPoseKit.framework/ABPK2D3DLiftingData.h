
@interface ABPK2D3DLiftingData : NSObject <NSSecureCoding> {
    struct array<float, 32UL> { 
        float __elems_[32]; 
    }  _multiArray;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {}  _rawJointsUsedForLifting;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {}  _rotatedJointsUsedForLifting;
    long long  _rotationNeeded;
    struct array<float, 32UL> { 
        float __elems_[32]; 
    }  _unnormalizedMultiArray;
}

@property (nonatomic, readonly) unsigned long long jointCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**joints;
@property (nonatomic, readonly) const float*liftingData3D;
@property (nonatomic, readonly) unsigned long long liftingData3DElementCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**rotatedJoints;
@property (nonatomic, readonly) const float*unnormalizedLiftingData3D;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_rotateAndUndoCroppingFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHumanForLifting:(const void*)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 rotation:(long long)arg3 croppedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)initWithJoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 numberOfJoints:(unsigned long long)arg2;
- (id)initWithJoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 numberOfJoints:(unsigned long long)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3;
- (id)initWithJoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 numberOfJoints:(unsigned long long)arg2 liftingData3D:(const float*)arg3 liftingData3DElementCount:(unsigned long long)arg4;
- (id)initWithJoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 numberOfJoints:(unsigned long long)arg2 rotation:(long long)arg3 croppedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 liftingData3D:(const float*)arg5 liftingData3DElementCount:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (unsigned long long)jointCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)joints;
- (const float*)liftingData3D;
- (unsigned long long)liftingData3DElementCount;
- (void)prepareLiftingInput:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 pUnnormalizedMultiArray:(float*)arg3 pMultiArray:(float*)arg4;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)rotatedJoints;
- (const float*)unnormalizedLiftingData3D;

@end
