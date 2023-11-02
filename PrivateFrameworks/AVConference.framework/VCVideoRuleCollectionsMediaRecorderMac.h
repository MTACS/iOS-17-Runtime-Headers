
@interface VCVideoRuleCollectionsMediaRecorderMac : VCVideoRuleCollectionsMediaRecorder {
    <VCHardwareSettingsMacProtocol> * _hardwareSettings;
}

+ (id)sharedInstance;

- (id)initWithHardwareSettings:(id)arg1;
- (unsigned char)mediaRecorderCapabilities;
- (id)mediaRecorderImageTypes;
- (id)mediaRecorderVideoCodecs;

@end
