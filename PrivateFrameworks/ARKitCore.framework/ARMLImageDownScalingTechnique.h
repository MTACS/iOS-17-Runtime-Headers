
@interface ARMLImageDownScalingTechnique : ARImageBasedTechnique {
    struct __CVPixelBufferPool { } * _bgraPixelBufferPool;
    bool  _centerCropImage;
    struct vImageCVImageFormat { } * _cvImageFormatRef;
    bool  _deterministic;
    ARMLImageDownScalingResultData * _downSamplingResultData;
    bool  _enableDoubleMLResolutionForIPad;
    ARMLImageTransform * _fastPassImageScaler;
    ARMLImageTransform * _fastPassUltraWideImageScaler;
    ARImageCroppingTechnique * _imageCroppingTechnique;
    ARImageRotationTechnique * _imageRotationTechnique;
    ARImageScalingTechnique * _imageScalingTechnique;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    ARMLIntermediateDownScalingResultData * _intermediateDownSamplingResultData;
    int  _lockedOrientation;
    NSObject<OS_dispatch_queue> * _processingQueue;
    bool  _resizeUltraWideImage;
    double  _resultLatency;
    bool  _saveIntermediateScaleResultData;
    bool  _shouldOperateOnHighResolutionImages;
    id /* block */  _ultrawideRotationStrategy;
    id /* block */  _wideRotationStrategy;
}

@property (nonatomic) bool centerCropImage;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) bool resizeUltraWideImage;
@property (nonatomic) bool saveIntermediateScaleResultData;
@property (nonatomic) bool shouldOperateOnHighResolutionImages;
@property (nonatomic, copy) id /* block */ ultrawideRotationStrategy;
@property (nonatomic, copy) id /* block */ wideRotationStrategy;

- (void).cxx_destruct;
- (id)_fastPassDownscaledResultDataFromImageData:(id)arg1 croppedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fastPassScaler:(id)arg3;
- (id)_fullDescription;
- (void)_processImageDataInBackground:(id)arg1;
- (id)_rotateImageDataForNeuralNetwork:(id)arg1 deviceOrientation:(long long)arg2 pRegionOfInterest:(struct CGSize { double x1; double x2; }*)arg3 pRotationOfResultTensor:(long long*)arg4;
- (id)_scaleImageDataForNeuralNetwork:(id)arg1 scaledSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_twoPassDownscaledResultDataFromImageData:(id)arg1 croppedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)centerCropImage;
- (void)dealloc;
- (id /* block */)defaultRotationStrategy;
- (long long)getDeviceOrientationFromImageData:(id)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 requiredTimeInterval:(double)arg2;
- (bool)isEqual:(id)arg1;
- (void)lockOrientation:(long long)arg1;
- (void)prepare:(bool)arg1;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (double)requiredTimeInterval;
- (bool)resizeUltraWideImage;
- (id)resultDataClasses;
- (bool)saveIntermediateScaleResultData;
- (void)setCenterCropImage:(bool)arg1;
- (void)setResizeUltraWideImage:(bool)arg1;
- (void)setSaveIntermediateScaleResultData:(bool)arg1;
- (void)setShouldOperateOnHighResolutionImages:(bool)arg1;
- (void)setUltrawideRotationStrategy:(id /* block */)arg1;
- (void)setWideRotationStrategy:(id /* block */)arg1;
- (bool)shouldOperateOnHighResolutionImages;
- (id /* block */)ultrawideRotationStrategy;
- (id /* block */)wideRotationStrategy;

@end
