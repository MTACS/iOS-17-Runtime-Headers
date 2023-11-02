
@interface VNMemeClassifier : VNImageAnalyzerBasedDetector {
    int  _modelDrop;
}

+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)inputImageBlobNameForConfiguration:(id)arg1;
+ (id)modelPathForConfiguration:(id)arg1 error:(id*)arg2;
+ (bool)providesSceneLabelsForConfiguration:(id)arg1;
+ (id)sceneLabelsFilePathForConfiguration:(id)arg1 error:(id*)arg2;

- (unsigned int)analysisTypesForProcessOptions:(id)arg1;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)configureImageAnalyzerOptions:(void*)arg1 error:(id*)arg2;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void*)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id*)arg5;
- (id)supportedIdentifiersWithOptions:(id)arg1 error:(id*)arg2;

@end
