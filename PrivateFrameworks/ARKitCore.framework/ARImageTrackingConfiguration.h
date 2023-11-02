
@interface ARImageTrackingConfiguration : ARConfiguration {
    long long  _maximumNumberOfTrackedImages;
    NSSet * _trackingImages;
}

@property (getter=isAutoFocusEnabled, nonatomic) bool autoFocusEnabled;
@property (nonatomic) long long maximumNumberOfTrackedImages;
@property (nonatomic, copy) NSSet *trackingImages;

+ (bool)isSupported;
+ (id)new;
+ (id)recommendedVideoFormatFor4KResolution;
+ (id)recommendedVideoFormatForHighResolutionFrameCapturing;
+ (id)supportedVideoFormats;
+ (bool)supportsFrameSemantics:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createTechniques:(id)arg1;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)maximumNumberOfTrackedImages;
- (void)setMaximumNumberOfTrackedImages:(long long)arg1;
- (void)setTrackingImages:(id)arg1;
- (id)trackingImages;

@end
