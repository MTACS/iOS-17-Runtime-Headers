
@interface VNRecognizeObjectsRequestConfiguration : VNImageBasedRequestConfiguration {
    unsigned long long  _imageCropAndScaleOption;
    float  _modelMinimumDetectionConfidence;
    float  _modelNonMaximumSuppressionThreshold;
    bool  _useImageAnalyzerScaling;
}

@property unsigned long long imageCropAndScaleOption;
@property float modelMinimumDetectionConfidence;
@property float modelNonMaximumSuppressionThreshold;
@property bool useImageAnalyzerScaling;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)imageCropAndScaleOption;
- (id)initWithRequestClass:(Class)arg1;
- (float)modelMinimumDetectionConfidence;
- (float)modelNonMaximumSuppressionThreshold;
- (void)setImageCropAndScaleOption:(unsigned long long)arg1;
- (void)setModelMinimumDetectionConfidence:(float)arg1;
- (void)setModelNonMaximumSuppressionThreshold:(float)arg1;
- (void)setUseImageAnalyzerScaling:(bool)arg1;
- (bool)useImageAnalyzerScaling;

@end
