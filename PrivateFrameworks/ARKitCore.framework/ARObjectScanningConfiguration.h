
@interface ARObjectScanningConfiguration : ARConfiguration {
    bool  _deliverRawSceneUnderstandingResults;
    bool  _lowQosSchedulingEnabled;
    bool  _mlModelEnabled;
    unsigned long long  _planeDetection;
}

@property (getter=isAutoFocusEnabled, nonatomic) bool autoFocusEnabled;
@property (nonatomic) bool deliverRawSceneUnderstandingResults;
@property (getter=isLowQosSchedulingEnabled, nonatomic) bool lowQosSchedulingEnabled;
@property (getter=isMLModelEnabled, nonatomic) bool mlModelEnabled;
@property (nonatomic) unsigned long long planeDetection;

+ (bool)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;
+ (bool)supportsFrameSemantics:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createTechniques:(id)arg1;
- (bool)deliverRawSceneUnderstandingResults;
- (id)description;
- (id)imageSensorSettings;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isLowQosSchedulingEnabled;
- (bool)isMLModelEnabled;
- (unsigned long long)planeDetection;
- (void)setDeliverRawSceneUnderstandingResults:(bool)arg1;
- (void)setLowQosSchedulingEnabled:(bool)arg1;
- (void)setMlModelEnabled:(bool)arg1;
- (void)setPlaneDetection:(unsigned long long)arg1;

@end
