
@interface ABPK2DDetectionResult : NSObject <NSSecureCoding> {
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _jointTrackingStates;
    ABPK2D3DLiftingData * _liftingData;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {}  _rawJoints;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {}  _rotatedJoints;
    long long  _rotation;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic, readonly) unsigned long long jointCount;
@property (nonatomic, readonly) const unsigned int*jointTrackingStates;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**joints;
@property (nonatomic, readonly) ABPK2D3DLiftingData *liftingData;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**rawJointsOutput;
@property (nonatomic, readonly) long long rotation;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)alignSkeleton:(id)arg1 rotationNeeded:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)initWithCoder:(id)arg1;
- (id)initWithJoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 trackingStates:(const unsigned int*)arg2 numberOfJoints:(unsigned long long)arg3 aligningPreviousSkeleton:(id)arg4 rotation:(long long)arg5;
- (id)initWithJoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 trackingStates:(const unsigned int*)arg2 numberOfJoints:(unsigned long long)arg3 imageResolution:(struct CGSize { double x1; double x2; })arg4 rotation:(long long)arg5 croppedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 liftingData:(id)arg7;
- (id)initWithJoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 trackingStates:(const unsigned int*)arg2 numberOfJoints:(unsigned long long)arg3 rotation:(long long)arg4 croppedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 liftingData:(id)arg6;
- (bool)isEqual:(id)arg1;
- (unsigned long long)jointCount;
- (const unsigned int*)jointTrackingStates;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)joints;
- (id)liftingData;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)rawJointsOutput;
- (long long)rotation;
- (unsigned long long)trackedJointCount;

@end
