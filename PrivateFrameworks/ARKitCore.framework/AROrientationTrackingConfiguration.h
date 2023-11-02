
@interface AROrientationTrackingConfiguration : ARConfiguration

@property (getter=isAutoFocusEnabled, nonatomic) bool autoFocusEnabled;

+ (id)_querySupportedVideoFormats;
+ (id)new;
+ (id)recommendedVideoFormatFor4KResolution;
+ (id)recommendedVideoFormatForHighResolutionFrameCapturing;
+ (id)supportedVideoFormats;
+ (bool)supportsFrameSemantics:(unsigned long long)arg1;

- (id)description;
- (id)init;

@end
