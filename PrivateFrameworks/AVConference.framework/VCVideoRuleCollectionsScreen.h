
@interface VCVideoRuleCollectionsScreen : VCVideoRuleCollections {
    <VCHardwareSettingsEmbeddedProtocol> * _hardwareSettings;
}

+ (id)sharedInstance;

- (id)initForMacDecodingOnly;
- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)arg1;
- (void)selectPreferredRule:(id)arg1 screenSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)setupH264Rules;
- (bool)setupMacDecodingOnlyRules;

@end
