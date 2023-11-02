
@interface ABPKMultiPerson2DTracking : NSObject {
    ABPKPersonIDTracker * _abpkPersonIDTracker;
    ABPK2DDetectionConfiguration * _config2D;
    unsigned long long  _lastTrackingId;
    ABPK2DPoseEstimation * _poseEstimation2D;
    NSMutableArray * _previousMultiPerson2DResult;
    NSMutableArray * _trackedBodies;
}

- (void).cxx_destruct;
- (void)_endInitABPKSignpost;
- (void)_endMultiPerson2DTracking2DDetectionMLSignpostWithTimestamp:(double)arg1;
- (void)_endMultiPerson2DTracking2DDetectionPostProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endMultiPerson2DTrackingImagePreProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endMultiPerson2DTrackingPersonTrackingSignpostWithTimestamp:(double)arg1;
- (void)_endMultiPerson2DTrackingRunWithInputSignpostWithTimestamp:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rotateBoundingBoxToPortrait:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withImageRes:(struct CGSize { double x1; double x2; })arg2;
- (void)_startInitABPKSignpost;
- (void)_startMultiPerson2DTracking2DDetectionMLSignpostWithTimestamp:(double)arg1;
- (void)_startMultiPerson2DTracking2DDetectionPostProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMultiPerson2DTrackingImagePreProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMultiPerson2DTrackingPersonTrackingSignpostWithTimestamp:(double)arg1;
- (void)_startMultiPerson2DTrackingRunWithInputSignpostWithTimestamp:(double)arg1;
- (id)init;
- (bool)overlayResult:(id)arg1 OnImage:(struct __CVBuffer { }*)arg2 andGenerateOverlayImage:(struct __CVBuffer { }*)arg3;
- (bool)overlayTrackedBodiesOnImage:(struct __CVBuffer { }*)arg1 andGenerateOverlayImage:(struct __CVBuffer { }*)arg2;
- (int)runPoseEstimationWithInput:(struct __CVBuffer { }*)arg1 abpkDeviceOrientation:(long long)arg2 atTimeStamp:(double)arg3 andOutput:(id)arg4;
- (int)runWithInput:(struct __CVBuffer { }*)arg1 abpkDeviceOrientation:(long long)arg2 atTimeStamp:(double)arg3 andOutput:(id)arg4;

@end
