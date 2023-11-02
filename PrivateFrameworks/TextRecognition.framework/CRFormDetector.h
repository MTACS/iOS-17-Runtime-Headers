
@interface CRFormDetector : NSObject {
    CRFormAnalyzerConfiguration * _configuration;
    CRFormDetectorModel * _model;
}

@property (readonly) CRFormAnalyzerConfiguration *configuration;
@property (readonly) CRFormDetectorModel *model;

+ (id)_detectorResultsFromSortedResults:(const void*)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 originalImageSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)_multiArrayFromPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (void)_saveDebugImage:(id)arg1 byOverlayingResults:(const void*)arg2;

- (void).cxx_destruct;
- (void)_denormalizeResults:(void*)arg1 imageSize:(struct CGSize { double x1; double x2; }*)arg2 translation:(struct CGVector { double x1; double x2; }*)arg3;
- (id)configuration;
- (id)detectFormFieldsInImage:(id)arg1 outputCandidateResults:(id*)arg2;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)model;

@end
