
@interface CRNeuralTextDetector : NSObject {
    CRDetectorConfiguration * _configuration;
    CRPerformanceStatistics * _detectorStats;
    CRPerformanceStatistics * _inferenceStats;
    CRPerformanceStatistics * _postProcStats;
    bool  _shouldCancel;
}

@property (retain) CRDetectorConfiguration *configuration;
@property (retain) CRPerformanceStatistics *detectorStats;
@property (retain) CRPerformanceStatistics *inferenceStats;
@property (retain) CRPerformanceStatistics *postProcStats;
@property bool shouldCancel;

+ (id)_lineRegionFromLineTextFeature:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)_supportsFragmentedLines;
+ (id)detectorForRevision:(unsigned long long)arg1 imageReaderOptions:(id)arg2 error:(id*)arg3;
+ (struct CGSize { double x1; double x2; })scaledImageSizeForOptions:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)textFeaturesFromPolygons:(void*)arg1 withScale:(const float*)arg2 withNMSOutputScale:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)cancel;
- (id)configuration;
- (id)detectInImage:(id)arg1 error:(id*)arg2;
- (id)detectInImage:(id)arg1 trackingSession:(id)arg2 error:(id*)arg3;
- (id)detectorStats;
- (id)enumerateTilesForImage:(id)arg1 block:(id /* block */)arg2;
- (id)inferenceStats;
- (id)init;
- (id)postProcStats;
- (bool)preheatWithError:(id*)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDetectorStats:(id)arg1;
- (void)setInferenceStats:(id)arg1;
- (void)setPostProcStats:(id)arg1;
- (void)setShouldCancel:(bool)arg1;
- (bool)shouldCancel;
- (struct CGSize { double x1; double x2; })smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(struct CGSize { double x1; double x2; })arg2;

@end
