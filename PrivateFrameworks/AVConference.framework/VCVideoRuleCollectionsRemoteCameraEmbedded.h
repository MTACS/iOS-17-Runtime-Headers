
@interface VCVideoRuleCollectionsRemoteCameraEmbedded : VCVideoRuleCollectionsRemoteCamera {
    <VCHardwareSettingsEmbeddedProtocol> * _hardwareSettings;
}

+ (id)sharedInstance;

- (bool)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)arg1;

@end
