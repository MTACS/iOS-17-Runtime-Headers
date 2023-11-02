
@protocol VCHardwareSettingsEmbeddedProtocol <VCHardwareSettingsProtocol>

@required

- (long long)chipId;
- (long long)deviceClass;
- (bool)hasAppleNeuralEngine;
- (bool)isHEVC444DecodeSupported;
- (bool)isSecondDisplaySupportEnabled;
- (bool)isVoiceProcessingAt24KSupported;
- (unsigned int)maxHighTierMLEnhanceParticipants;
- (unsigned int)screenHeight;
- (unsigned int)screenWidth;
- (long long)videoEncoderType;

@end
