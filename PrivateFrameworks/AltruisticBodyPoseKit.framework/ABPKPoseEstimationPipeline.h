
@interface ABPKPoseEstimationPipeline : NSObject {
    ABPKCameraRegistration * _bodyRegistration;
    ABPK2DDetectionConfiguration * _config2D;
    int  _consistent2DSkeletonMissing;
    ABPK2dSkeleton * _detection2dSkeleton;
    bool  _deviceANEVersionPriorOrEqualToH12;
    long long  _exitPoint;
    ABPKImagePreProcessingParams * _imagePreProcessingParams;
    ABPKImagePreProcessing * _imagePreprocessor;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputResolution;
    ABPK3DLifting * _liftingAlgorithm;
    ABPK3DLiftingLSTM * _liftingAlgorithmLSTM;
    ABPK3DLiftingSequence * _liftingAlgorithmSequence;
    ABPKSkeleton * _liftingSkeleton;
    struct __CVBuffer { } * _mlImage;
    ABPK2DPoseEstimation * _poseEstimation2D;
    ABPK2DDetectionPostprocess * _postprocess2d;
    float  _previousValidScale;
    ABPK2dSkeleton * _rawDetection2dSkeleton;
    NSMutableArray * _rawDetection2dSkeletonArray;
    ABPK2dSkeleton * _registered2dSkeleton;
    ABPKSkeleton * _retargetedSkeleton;
    ABPKRetargeting * _retargeting;
    NSString * _saveDirectory;
    ABPKDepthBasedScaleEstimation * _scaleEstimation;
    bool  _useLSTM3D;
}

- (void).cxx_destruct;
- (void)_endExecuteAlgorithmSignpost;
- (void)_endImagePreprocessingSignpost;
- (void)_endInitABPKOutputSignpost;
- (void)_endInitABPKSignpost;
- (void)_endRetargettingSignpostWithTimestamp:(double)arg1;
- (void)_endScaleEstimationSignpostWithTimestamp:(double)arg1;
- (void)_startExecuteAlgorithmSignpost;
- (void)_startImagePreprocessingSignpost;
- (void)_startInitABPKOutputSignpost;
- (void)_startInitABPKSignpost;
- (void)_startRetargettingSignpostWithTimestamp:(double)arg1;
- (void)_startScaleEstimationSignpostWithTimestamp:(double)arg1;
- (void)computeRootTransforms:(id)arg1 withCameraExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 withVioPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 withVioPoseValidity:(bool)arg4;
- (void)dealloc;
- (id)init;
- (bool)initAlgorithmModules;
- (void)initializeOutput;
- (void)runABPKAlgorithmWithInputData:(id)arg1 andGetOutput:(id)arg2;
- (int)runABPKPoseEstimationWithInputData:(id)arg1 andGetOutput:(id)arg2;
- (void)saveInputData:(id)arg1 andOutputData:(id)arg2 ToDir:(id)arg3 withFileNamePrefix:(id)arg4;
- (void)setExitPoint:(long long)arg1;

@end
