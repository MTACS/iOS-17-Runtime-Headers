
@interface VNCoreSceneUnderstandingCompoundRequestDetectorConfiguration : NSObject {
    NSMutableDictionary * _detectorConfigurationOptions;
    <MLComputeDeviceProtocol> * _mainStageComputeDevice;
    NSMutableArray * _originalRequests;
}

- (void).cxx_destruct;
- (id)addCityNatureConfigurationForOriginalRequest:(id)arg1;
- (id)addEntityNetClassificationConfigurationForOriginalRequest:(id)arg1;
- (id)addImageAestheticsConfigurationForOriginalRequest:(id)arg1;
- (id)addImageClassificationConfigurationForOriginalRequest:(id)arg1;
- (id)addImageFingerprintsConfigurationForOriginalRequest:(id)arg1;
- (id)addImageSaliencyAConfigurationForOriginalRequest:(id)arg1;
- (id)addImageSaliencyOConfigurationForOriginalRequest:(id)arg1;
- (id)addJunkConfigurationForOriginalRequest:(id)arg1;
- (void)addOriginalRequest:(id)arg1;
- (id)addRecognizeObjectsConfigurationForOriginalRequest:(id)arg1;
- (id)addSceneprintConfigurationForOriginalRequest:(id)arg1;
- (id)addSignificantEventConfigurationForOriginalRequest:(id)arg1;
- (id)addVN5kJNH3eYuyaLxNpZr5Z7ziConfigurationForOriginalRequest:(id)arg1;
- (void)cacheResultsInRequestPerformingContext:(id)arg1;
- (id)detectorConfigurationOptions;
- (id)initWithMainStageComputeDevice:(id)arg1;
- (id)mainStageComputeDevice;
- (id)originalRequests;
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;

@end
