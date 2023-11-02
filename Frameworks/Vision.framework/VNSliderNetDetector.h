
@interface VNSliderNetDetector : VNImageAnalyzerBasedDetector

+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;
+ (id)inputImageBlobNameForConfiguration:(id)arg1;
+ (id)modelPathForConfiguration:(id)arg1 error:(id*)arg2;
+ (id)supportedAdjustmentKeys;

- (unsigned int)analysisTypesForProcessOptions:(id)arg1;
- (bool)configureImageAnalyzerOptions:(void*)arg1 error:(id*)arg2;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void*)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id*)arg5;

@end
