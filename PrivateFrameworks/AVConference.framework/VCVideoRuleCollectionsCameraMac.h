
@interface VCVideoRuleCollectionsCameraMac : VCVideoRuleCollectionsCamera {
    unsigned int  _decodeScore;
    unsigned int  _encodeScore;
    <VCHardwareSettingsMacProtocol> * _hardwareSettings;
}

+ (id)sharedInstance;

- (void)_addWVGAEncodingRules;
- (void)_removeRulesGreaterThan720p;
- (void)_removeRulesGreaterThanVGA;
- (void)_resetJ92EncodingRulesForCameraIsHD:(bool)arg1 isWVGA:(bool)arg2 is1080:(bool)arg3;
- (void)computeDecodingScore;
- (void)computeEncodingScore;
- (void)dealloc;
- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)arg1;
- (double)preferredAspectRatio;
- (void)resetEncodingRulesForCameraIsHD:(bool)arg1 isWVGA:(bool)arg2 is1080:(bool)arg3;
- (bool)setUp1080pRules:(int)arg1;
- (bool)setupH264Rules;
- (bool)setupH264WifiRules;
- (bool)setupHEVCRules;
- (bool)setupRules;
- (bool)useSoftFramerateSwitching;

@end
