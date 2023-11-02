
@interface ABPKRegistrationData : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraFromBodyPose;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _cameraIntrinsics;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageDimensions;
    unsigned long long  _imagePointsCount;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {}  _imagePointsVector;
    unsigned long long  _jointsLifted3DCount;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _jointsLifted3DVector;
    bool  _registrationValid;
}

@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraFromBodyPose;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsics;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageDimensions;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**imagePoints;
@property (nonatomic, readonly) unsigned long long imagePointsCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**jointsLifted3D;
@property (nonatomic, readonly) unsigned long long jointsLifted3DCount;
@property (nonatomic, readonly) bool registrationValid;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraFromBodyPose;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsics;
- (struct CGSize { double x1; double x2; })imageDimensions;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)imagePoints;
- (unsigned long long)imagePointsCount;
- (id)initWithImagePoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 imagePointsCount:(unsigned long long)arg2 jointsLifted3D:(const /* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 jointsLifted3DCount:(unsigned long long)arg4 cameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg5 imageDimensions:(struct CGSize { double x1; double x2; })arg6 cameraFromBodyPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg7 registrationValid:(bool)arg8;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)jointsLifted3D;
- (unsigned long long)jointsLifted3DCount;
- (bool)registrationValid;

@end
