
@interface ABPKDepthBasedScaleEstimation : NSObject {
    struct array<float, 2UL> { 
        float __elems_[2]; 
    }  _depth_scaler_num_den;
    unsigned long long  _depth_scaler_observation_count;
    double  _last_detection_timestamp;
}

- (float)estimateScaleFromDepthData:(struct __CVBuffer { }*)arg1 depthConfidenceData:(struct __CVBuffer { }*)arg2 timestamp:(double)arg3 imageResolution:(struct CGSize { double x1; double x2; })arg4 imageIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg5 cameraFromBodyPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg6 liftingResult:(id)arg7;
- (float)estimateScaleFromJasperCloud:(id)arg1 cameraFromBodyPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 liftingResult:(id)arg3;
- (id)init;
- (void)resetState;

@end
