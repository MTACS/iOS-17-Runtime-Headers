
@interface VCVideoRuleCollectionsMediaRecorderEmbeded : VCVideoRuleCollectionsMediaRecorder {
    <VCHardwareSettingsEmbeddedProtocol> * _hardwareSettings;
}

+ (id)sharedInstance;

- (id)initWithHardwareSettings:(id)arg1;
- (bool)isSupportedChipID;
- (bool)isSupportedDeviceClass;
- (unsigned char)mediaRecorderCapabilities;
- (id)mediaRecorderImageTypes;
- (id)mediaRecorderVideoCodecs;

@end
