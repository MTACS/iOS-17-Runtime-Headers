
@interface ABPK2DDetectionPostprocessHeatmapAffinitymap : ABPK2DDetectionPostprocess {
    ABPK2DExtrapolationFiltering * _extrapolationFiltering;
    bool  _humansDetected;
    ABPKImagePreProcessingParams * _imagePreProcessingParams;
    unsigned long long  _numberOfInputJoints;
    unsigned long long  _numberOfOutputJoints;
    ABPK2DDetectionPostprocessGPU * _postprocessorGPU;
}

- (void).cxx_destruct;
- (void)_endExtract2DSkeletonSignpostWithTimestamp:(double)arg1;
- (void)_endExtractHumanSignpostWithTimestamp:(double)arg1;
- (void)_endExtrapolationSignpostWithTimestamp:(double)arg1;
- (void)_endMaxFilterSignpostWithTimestamp:(double)arg1;
- (void)_startExtract2DSkeletonSignpostWithTimestamp:(double)arg1;
- (void)_startExtractHumanSignpostWithTimestamp:(double)arg1;
- (void)_startExtrapolationSignpostWithTimestamp:(double)arg1;
- (void)_startMaxFilterSignpostWithTimestamp:(double)arg1;
- (int)extract2DSkeletonfromBuffers:(id)arg1 withImagePreProcessingParams:(id)arg2 atTimestamp:(double)arg3 previousSkeleton3D:(id)arg4;
- (id)get2DDetectionResultforRotation:(long long)arg1 croppedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)getAligned3DSkeleton;
- (id)getRaw2DDetectionResultforRotation:(long long)arg1 croppedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)getRawTrackedHumanForLiftingSkeleton:(id)arg1;
- (void)getRawTrackedHumanSkeleton:(id)arg1;
- (void)getRawTrackedHumanSkeletonVector:(id)arg1;
- (void)getTrackedHumanForLiftingSkeleton:(id)arg1;
- (void)getTrackedHumanSkeleton:(id)arg1;
- (id)initWithInputJoints:(unsigned long long)arg1 andOutputJoints:(unsigned long long)arg2 use3DSkeletonForExtrapolation:(bool)arg3 shouldPush3DSupportSkeleton:(bool)arg4 withExtrapolationTime:(double)arg5;
- (const void*)rawTrackedHuman;
- (const void*)rawTrackedHumanVector;
- (const void*)trackedHuman;
- (const void*)trackedHumanForLifting;

@end
