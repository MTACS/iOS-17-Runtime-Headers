
@interface VNImageAnalyzerCompoundRequestGroupingConfiguration : NSObject {
    NSMutableDictionary * _computeStageDeviceAssignments;
    NSMutableDictionary * _detectorConfigurationOptions;
    unsigned long long  _detectorModel;
    NSMutableDictionary * _kindToOriginalRequestsMapping;
    NSMutableArray * _originalRequests;
}

- (void).cxx_destruct;
- (void)addOriginalRequest:(id)arg1 forKind:(unsigned long long)arg2;
- (id)addSceneConfigurationForOriginalRequest:(id)arg1;
- (void)addTilingWarningRecorder:(id)arg1;
- (id)computeStageDeviceAssignments;
- (id)detectorConfigurationOptions;
- (void)enumerateOriginalRequestsByKindUsingBlock:(id /* block */)arg1;
- (id)originalRequests;
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;

@end
