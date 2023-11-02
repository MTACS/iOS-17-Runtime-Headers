
@interface NUVisionSegmentationJob : NURenderJob {
    <NUImageBuffer> * _confidenceMap;
    NUVisionSegmentationRequest * _confidenceMapRequest;
    <NUImageBuffer> * _segmentedMatte;
}

@property (nonatomic, retain) <NUImageBuffer> *confidenceMap;
@property (nonatomic, readonly) NUVisionSegmentationRequest *confidenceMapRequest;
@property (nonatomic, readonly) NUVisionSegmentationRequest *segmentationRequest;
@property (nonatomic, retain) <NUImageBuffer> *segmentedMatte;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)_combineMultipleObservations:(id)arg1 context:(id)arg2 error:(out id*)arg3;
- (void)cleanUp;
- (id)confidenceMap;
- (id)confidenceMapRequest;
- (id)initWithRequest:(id)arg1;
- (id)initWithVisionSegmentationRequest:(id)arg1;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (id)segmentationRequest;
- (id)segmentedMatte;
- (void)setConfidenceMap:(id)arg1;
- (void)setSegmentedMatte:(id)arg1;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;

@end
