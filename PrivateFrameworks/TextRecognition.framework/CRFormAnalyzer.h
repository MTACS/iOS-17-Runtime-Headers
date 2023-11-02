
@interface CRFormAnalyzer : NSObject {
    CRFormAnalyzerConfiguration * _configuration;
    CRFormContourBasedDetector * _contourBasedDetector;
    CRFormDetector * _modelDetector;
    CRFormPostProcessingManager * _postProcessingManager;
    CRFormTextBasedDetector * _textBasedDetector;
}

@property (nonatomic, readonly) CRFormAnalyzerConfiguration *configuration;
@property (nonatomic, readonly) CRFormContourBasedDetector *contourBasedDetector;
@property (nonatomic, readonly) CRFormDetector *modelDetector;
@property (nonatomic, readonly) CRFormPostProcessingManager *postProcessingManager;
@property (nonatomic, readonly) CRFormTextBasedDetector *textBasedDetector;

+ (void)_saveDebugImageForRegions:(id)arg1 image:(id)arg2 suffix:(id)arg3 displayTypes:(bool)arg4;

- (void).cxx_destruct;
- (void)analyzeImage:(id)arg1 outputRegion:(id)arg2;
- (id)configuration;
- (id)contourBasedDetector;
- (void)exportSerializedResults:(id)arg1 forImage:(id)arg2;
- (id)fetchSerializedResultsForImage:(id)arg1;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)modelDetector;
- (id)postProcessingManager;
- (bool)shouldRunDetectionForDocument:(id)arg1;
- (id)textBasedDetector;

@end
