
@interface ABPK2DPoseEstimation : NSObject {
    ABPK2DDetectionConfiguration * _config2D;
    ABPK2DDetection * _detection2dAlgorithm;
    ABPK2DDetectionPostprocess * _postprocess2d;
}

- (void).cxx_destruct;
- (void)getRawTrackedHumanForLiftingSkeleton:(id)arg1;
- (void)getRawTrackedHumanSkeleton:(id)arg1;
- (void)getRawTrackedHumanSkeletonVector:(id)arg1;
- (void)getTrackedHumanForLiftingSkeleton:(id)arg1;
- (void)getTrackedHumanSkeleton:(id)arg1;
- (id)initWith2DDetectionConfig:(id)arg1 use3DSkeletonForExtrapolation:(bool)arg2 shouldPush3DSupportSkeleton:(bool)arg3;
- (int)runWithMLImageData:(id)arg1 rotationOfResultTensor:(long long)arg2;

@end
