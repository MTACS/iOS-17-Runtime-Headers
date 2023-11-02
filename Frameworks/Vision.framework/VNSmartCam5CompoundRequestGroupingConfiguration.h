
@interface VNSmartCam5CompoundRequestGroupingConfiguration : NSObject {
    NSMutableDictionary * _detectorConfigurationOptions;
    unsigned long long  _imageCropAndScaleOption;
    NSMutableSet * _originalRequests;
}

- (void).cxx_destruct;
- (void)addOriginalRequest:(id)arg1;
- (id)detectorConfigurationOptions;
- (unsigned long long)imageCropAndScaleOption;
- (id)initWithImageCropAndScaleOption:(unsigned long long)arg1;
- (id)originalRequests;
- (bool)preferBackgroundProcessing;
- (id)processingDevice;
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;

@end
