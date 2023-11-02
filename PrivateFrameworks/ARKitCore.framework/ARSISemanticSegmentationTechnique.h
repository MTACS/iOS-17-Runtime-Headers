
@interface ARSISemanticSegmentationTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState> {
    ARImageRotationTechnique * _confidenceUncertaintyRotationTechnique;
    bool  _isLegacyModel;
    double  _lastResultPushTimestamp;
    ARImageRotationTechnique * _normalsRotationTechnique;
    int  _numClasses;
    struct __CVPixelBufferPool { } * _outputConfidencePixelBufferPool;
    struct __CVPixelBufferPool { } * _outputNormalPixelBufferPool;
    struct __CVPixelBufferPool { } * _outputSegmentationPixelBufferPool;
    struct __CVPixelBufferPool { } * _outputUncertaintyPixelBufferPool;
    struct __CVPixelBufferPool { } * _scaledConfidencePixelBufferPool;
    struct __CVPixelBufferPool { } * _scaledNormalsPixelBufferPool;
    struct __CVPixelBufferPool { } * _scaledSegmentationOutputPixelBufferPool;
    SISceneSegmentationAlgorithm * _sceneSegmentationAlgorithm;
    SISceneUnderstandingAlgorithm * _sceneUnderstandingAlgorithm;
    ARImageRotationTechnique * _segmentationRotationTechnique;
    bool  _shouldUseSynchronizedUltraWide;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBusy;
@property (nonatomic, readonly) bool shouldUseSynchronizedUltraWide;
@property (readonly) Class superclass;

+ (void)createUncertaintyMaskedSegmentationBuffer:(struct __CVBuffer { }*)arg1 fromSegmentationBuffer:(struct __CVBuffer { }*)arg2 uncertaintyBuffer:(struct __CVBuffer { }*)arg3 maskValue:(unsigned char)arg4;

- (void).cxx_destruct;
- (void)_captureMLRunNetworkInputImageData:(double)arg1 cameraType:(long long)arg2 imageWidth:(unsigned long long)arg3 imageHeight:(unsigned long long)arg4;
- (void)_endLoadingMLModelSignpost;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)arg1;
- (void)_endMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (long long)_mapUIDeviceOrientation:(long long)arg1;
- (void)_prepareOnce:(bool)arg1;
- (id)_rotateImageData:(id)arg1 withRotationTechnique:(id)arg2 rotationNeeded:(long long)arg3;
- (bool)_scaleOutputBuffersIfNeededForTargetResolution:(struct CGSize { double x1; double x2; })arg1 segmentationPixelBuffer:(struct __CVBuffer {}**)arg2 confidencePixelBuffer:(struct __CVBuffer {}**)arg3 normalPixelBuffer:(struct __CVBuffer {}**)arg4 uncertaintyPixelBuffer:(struct __CVBuffer {}**)arg5;
- (bool)_scalePixelOutputBuffer:(struct __CVBuffer {}**)arg1 toTargetResolution:(struct CGSize { double x1; double x2; })arg2 description:(id)arg3;
- (void)_startLoadingMLModelSignpost;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_startMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)changeEspressoConfig:(id)arg1;
- (id)createResultDataFromOutputSegmentation:(struct __CVBuffer { }*)arg1 outputConfidence:(struct __CVBuffer { }*)arg2 outputNormalize:(struct __CVBuffer { }*)arg3 outputUncertainty:(struct __CVBuffer { }*)arg4 inputImageData:(id)arg5 originalData:(id)arg6 rotationNeeded:(long long)arg7 regionOfInterest:(struct CGSize { double x1; double x2; })arg8;
- (void)dealloc;
- (id)init;
- (id)initLegacyAlgorithmUsingSynchronizedUltrawideWhenAvailable:(bool)arg1;
- (id)initUsingSynchronizedUltrawideWhenAvailable:(bool)arg1;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (id)runNeuralNetworkWithImageData:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(struct CGSize { double x1; double x2; })arg3 rotationOfResultTensor:(long long)arg4;
- (bool)shouldUseSynchronizedUltraWide;

@end
