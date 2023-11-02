
@interface AR2DSkeletonDetectionTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState> {
    ABPK2DDetection * _algorithm;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBusy;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })inputDimensionsForMLModel;

- (void).cxx_destruct;
- (void)_endLoadingMLModelSignpost;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)arg1;
- (void)_endMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_prepareOnce:(bool)arg1;
- (void)_startLoadingMLModelSignpost;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_startMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (id)init;
- (id)processImageDataThroughNeuralNetwork:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(struct CGSize { double x1; double x2; })arg3 rotationOfResultTensor:(long long)arg4;
- (double)requiredTimeInterval;
- (id)runNeuralNetworkWithImageData:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(struct CGSize { double x1; double x2; })arg3 rotationOfResultTensor:(long long)arg4;

@end
