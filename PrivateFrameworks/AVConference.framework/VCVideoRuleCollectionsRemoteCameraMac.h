
@interface VCVideoRuleCollectionsRemoteCameraMac : VCVideoRuleCollectionsRemoteCamera {
    <VCHardwareSettingsMacProtocol> * _hardwareSettings;
}

+ (id)sharedInstance;

- (bool)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)arg1;

@end
