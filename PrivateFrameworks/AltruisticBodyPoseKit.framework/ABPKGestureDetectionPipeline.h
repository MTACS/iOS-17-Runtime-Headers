
@interface ABPKGestureDetectionPipeline : NSObject {
    ABPK2DDetectionConfiguration * _config2D;
    unsigned int  _fps;
    NSMutableDictionary * _joints2DBufferDict;
    unsigned long long  _lastTrackingId;
    unsigned int  _maxPreviousPoses;
    ABPK2DPoseEstimation * _poseEstimation2D;
    NSMutableArray * _previousGestureDetectionResult;
    unsigned int  _raisingMaxPreviousPoses;
    unsigned int  _wavingAngleChangeLastFrames;
    unsigned int  _wavingMinPeriodicFrames;
}

- (void).cxx_destruct;
- (void)_endGestureDetection2DDetectionMLSignpostWithTimestamp:(double)arg1;
- (void)_endGestureDetection2DDetectionPostProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endGestureDetectionAlgorithmSignpostWithTimestamp:(double)arg1;
- (void)_endGestureDetectionImagePreProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endGestureDetectionPersonTrackingSignpostWithTimestamp:(double)arg1;
- (void)_endGestureDetectionRunWithInputSignpostWithTimestamp:(double)arg1;
- (void)_endInitABPKSignpost;
- (void)_startGestureDetection2DDetectionMLSignpostWithTimestamp:(double)arg1;
- (void)_startGestureDetection2DDetectionPostProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startGestureDetectionAlgorithmSignpostWithTimestamp:(double)arg1;
- (void)_startGestureDetectionImagePreProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startGestureDetectionPersonTrackingSignpostWithTimestamp:(double)arg1;
- (void)_startGestureDetectionRunWithInputSignpostWithTimestamp:(double)arg1;
- (void)_startInitABPKSignpost;
- (struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>=^ {})extractDataForJointIdx:(unsigned long long)arg1 fromPoseTimeArray:(id)arg2;
- (id)init;
- (id)initWithFrequency:(unsigned int)arg1;
- (bool)overlayResult:(id)arg1 OnImage:(struct __CVBuffer { }*)arg2 andGenerateOverlayImage:(struct __CVBuffer { }*)arg3;
- (void)runGestureDetection:(id)arg1 withTrackingId:(unsigned int)arg2 andResult:(id)arg3;
- (int)runPoseEstimationWithInput:(struct __CVBuffer { }*)arg1 abpkDeviceOrientation:(long long)arg2 atTimeStamp:(double)arg3 andOutput:(id)arg4;
- (int)runWithInput:(struct __CVBuffer { }*)arg1 abpkDeviceOrientation:(long long)arg2 atTimeStamp:(double)arg3 andOutput:(id)arg4;

@end
