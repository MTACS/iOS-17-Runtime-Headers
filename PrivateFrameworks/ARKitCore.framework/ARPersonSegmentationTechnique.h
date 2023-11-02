
@interface ARPersonSegmentationTechnique : ARMLImageProcessingTechnique {
    SIPeopleSegmentationAlgorithm * _algorithm;
    SIImageInputData * _imageInputData;
    struct __CVPixelBufferPool { } * _outputSegmentationPixelBufferPool;
    SIPeopleSegmentationData * _peopleSegmentationOutputLandscape;
    SIPeopleSegmentationData * _peopleSegmentationOutputPortrait;
    struct __CVPixelBufferPool { } * _scaledSegmentationOutputPixelBufferPool;
    ARImageRotationTechnique * _segmentationRotationTechnique;
    bool  _shouldOperateOnHighResolutionImages;
    int  frameCount;
}

@property (nonatomic) bool shouldOperateOnHighResolutionImages;

- (void).cxx_destruct;
- (void)_prepareOnce:(bool)arg1;
- (void)dealloc;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isLoadedModelVersionCorrect:(id)arg1;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (id)runNeuralNetworkWithImageData:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(struct CGSize { double x1; double x2; })arg3 rotationOfResultTensor:(long long)arg4;
- (void)setShouldOperateOnHighResolutionImages:(bool)arg1;
- (bool)shouldOperateOnHighResolutionImages;

@end
