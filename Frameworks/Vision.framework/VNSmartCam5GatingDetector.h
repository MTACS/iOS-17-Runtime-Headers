
@interface VNSmartCam5GatingDetector : VNImageAnalyzerBasedDetector {
    VNSaliencyOHeatmapBoundingBoxGenerator * _boundingBoxGenerator;
    NSDictionary * _documentIdentifierToSceneLabels;
    VisionCoreSmartCam5InferenceNetworkDescriptor * _inferenceNetworkDescriptor;
}

@property (readonly, copy) NSArray *supportedDocumentElementIdentifiers;

+ (id)_inferenceNetworkDescriptorForConfiguration:(id)arg1 error:(id*)arg2;
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;
+ (id)inputImageBlobNameForConfiguration:(id)arg1;
+ (id)modelPathForConfiguration:(id)arg1 error:(id*)arg2;
+ (bool)providesSceneLabelsForConfiguration:(id)arg1;
+ (bool)providesSegmentationLabelsForConfiguration:(id)arg1;
+ (id)sceneLabelsFilePathForConfiguration:(id)arg1 error:(id*)arg2;
+ (id)segmentationLabelsFilePathForConfiguration:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)configureImageAnalyzerOptions:(void*)arg1 error:(id*)arg2;
- (unsigned long long)defaultImageCropAndScaleOption;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void*)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id*)arg5;
- (id)supportedClassificationIdentifiersWithOptions:(id)arg1 error:(id*)arg2;
- (id)supportedDocumentElementIdentifiers;

@end
