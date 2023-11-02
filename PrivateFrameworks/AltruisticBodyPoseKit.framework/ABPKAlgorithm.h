
@interface ABPKAlgorithm : NSObject {
    ABPKAlgorithmParams * _algParams;
    ABPKCameraRegistration * _bodyRegistration;
    long long  _exitPoint;
    ABPK3DLifting * _liftingAlgorithm;
    ABPK2DPoseEstimation * _poseEstimation2D;
    ABPK2DDetectionPostprocess * _postprocess2d;
    float  _previousValidScale;
    ABPKRetargeting * _retargeting;
    ABPKDepthBasedScaleEstimation * _scaleEstimation;
}

- (void).cxx_destruct;
- (void)_endABPKRunWithInputSignpostWithTimestamp:(double)arg1;
- (void)_endInitABPKSignpost;
- (void)_endRetargettingSignpostWithTimestamp:(double)arg1;
- (void)_endScaleEstimationSignpostWithTimestamp:(double)arg1;
- (void)_startABPKRunWithInputSignpostWithTimestamp:(double)arg1;
- (void)_startInitABPKSignpost;
- (void)_startRetargettingSignpostWithTimestamp:(double)arg1;
- (void)_startScaleEstimationSignpostWithTimestamp:(double)arg1;
- (id)initWithParams:(id)arg1;
- (int)runWithInput:(id)arg1 andGetOutput:(id)arg2;
- (void)setExitPoint:(long long)arg1;

@end
