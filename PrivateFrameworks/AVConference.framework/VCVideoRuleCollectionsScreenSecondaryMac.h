
@interface VCVideoRuleCollectionsScreenSecondaryMac : VCVideoRuleCollectionsScreenSecondary {
    <VCHardwareSettingsMacProtocol> * _hardwareSettings;
}

+ (id)sharedInstance;

- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)arg1;
- (bool)setupH264Rules;
- (bool)setupHEVCRules;
- (bool)setupRules;
- (unsigned int)tilesPerFrame:(int)arg1;

@end
