
@interface VGEarPoseDetector : NSObject {
    float  _bboxVisibility;
    void _earNormalAvg;
    float  _earPresenceConfidence;
    float  _earVisibility;
    struct unique_ptr<cv3d::visage::ear_frame_selection::EarDetector, std::default_delete<cv3d::visage::ear_frame_selection::EarDetector>> { 
        struct __compressed_pair<cv3d::visage::ear_frame_selection::EarDetector *, std::default_delete<cv3d::visage::ear_frame_selection::EarDetector>> { 
            struct EarDetector {} *__value_; 
        } __ptr_; 
    }  _ear_detector;
    float  _expAvgWeight;
    float  _landmarkVisibility;
    float  _percentileDetectionConfidence;
    int  _prevSide;
    unsigned int  _sameSideFrameCount;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)_calculateFaceYawWithRotationMatrix:(const struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1;
- (int)checkEarQualityForFrame:(id)arg1 detections:(const void*)arg2;
- (void)computeEarPlaneNormal:(const float*)arg1 side:(int)arg2 captureData:(id)arg3;
- (int)detectPose:(void*)arg1 FromCaptureData:(id)arg2;
- (struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>=^^{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>=^ {})findROIPoints:(const float*)arg1 side:(int)arg2 captureData:(id)arg3;
- (id)initWithCaptureOptions:(id)arg1;

@end
