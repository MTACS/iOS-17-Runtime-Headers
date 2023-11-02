
@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsCache : NSObject {
    VisionCoreSceneNetInferenceNetworkDescriptor * _inferenceNetworkDescriptor;
    NSMutableDictionary * _originatingRequestSpecifierToOperationPoints;
}

- (void).cxx_destruct;
- (id)initWithInferenceNetworkDescriptor:(id)arg1;
- (id)sceneLabelOperationPointsForOriginatingRequestSpecifier:(id)arg1 error:(id*)arg2;

@end
