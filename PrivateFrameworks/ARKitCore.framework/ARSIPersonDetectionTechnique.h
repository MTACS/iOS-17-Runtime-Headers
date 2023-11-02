
@interface ARSIPersonDetectionTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState> {
    SIPersonDetectorAlgorithm * _algorithm;
    struct __CVPixelBufferPool { } * _depthPixelBufferPool;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageNetworkSize;
    double  _lastTimestamp;
    ARPersonDetectionData * _latestResult;
    bool  _mergeLargelyOverlappingBoxes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBusy;
@property (retain) ARPersonDetectionData *latestResult;
@property (readonly) Class superclass;

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
- (void)changeEspressoConfig:(id)arg1;
- (id)createResultDataFromAlgorithmOutput:(id)arg1 imageDataForNeuralNetwork:(id)arg2 inputImageData:(id)arg3 rotationNeeded:(long long)arg4 regionOfInterest:(struct CGSize { double x1; double x2; })arg5;
- (void)dealloc;
- (id)init;
- (bool)isLoadedModelVersionCorrect:(id)arg1;
- (id)latestResult;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (id)runNeuralNetworkWithImageData:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(struct CGSize { double x1; double x2; })arg3 rotationOfResultTensor:(long long)arg4;
- (void)setLatestResult:(id)arg1;

@end
