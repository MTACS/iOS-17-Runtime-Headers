
@interface ARPositionalTrackingConfiguration : ARConfiguration {
    ARWorldMap * _initialWorldMap;
    unsigned long long  _planeDetection;
    bool  _relocalizationEnabled;
    bool  _vioFusionEnabled;
}

@property (nonatomic, retain) ARWorldMap *initialWorldMap;
@property (nonatomic) unsigned long long planeDetection;
@property (getter=isRelocalizationEnabled, nonatomic) bool relocalizationEnabled;
@property (getter=isVIOFusionEnabled, nonatomic) bool vioFusionEnabled;

+ (id)_querySupportedVideoFormats;
+ (bool)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createTechniques:(id)arg1;
- (id)description;
- (id)imageSensorSettings;
- (id)init;
- (id)initialWorldMap;
- (bool)isEqual:(id)arg1;
- (bool)isRelocalizationEnabled;
- (bool)isVIOFusionEnabled;
- (unsigned long long)planeDetection;
- (void)setInitialWorldMap:(id)arg1;
- (void)setPlaneDetection:(unsigned long long)arg1;
- (void)setRelocalizationEnabled:(bool)arg1;
- (void)setVioFusionEnabled:(bool)arg1;
- (id)worldTrackingOptions;

@end
