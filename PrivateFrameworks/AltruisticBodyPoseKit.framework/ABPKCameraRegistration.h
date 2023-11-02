
@interface ABPKCameraRegistration : NSObject {
    struct BodyRegistration { 
        struct BodyRegistrationInfo { 
            int status; 
            struct CameraPoseInfo { 
                struct Matrix<double, 3U, 3U, false> { 
                    double m_data[9]; 
                } camera_matrix; 
                struct SE3GroupStorage<double, cva::Matrix<double, 4, 4>> { 
                    double m_data[16]; 
                } transform; 
                struct { 
                    /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
                } pose; 
            } camera_from_body; 
        } m_last_result; 
    }  _body_registration;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {}  _imagePoints;
    ABPKResultRegistration * _regResult;
    double  _tot_avg_err;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _v3d_body;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _v3d_cam;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_endRunCameraRegistrationSignpost;
- (void)_startRunCameraRegistrationSignpost;
- (id)estimateCameraPoseFromMatchingwithImageIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 imageResolution:(struct CGSize { double x1; double x2; })arg2 joints2d:(const /* Warning: Unrecognized filer type: '8' using 'void*' */ void**)arg3 jointsLifted3D:(const /* Warning: Unrecognized filer type: '8' using 'void*' */ void**)arg4 jointsLifted3DCount:(unsigned long long)arg5;
- (id)init;
- (id)runCameraRegistrationWithImageIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 imageResolution:(struct CGSize { double x1; double x2; })arg2 liftingResult:(id)arg3;

@end
