
@interface VCPayloadUtils : NSObject

+ (id)allowedBitratesForPayload:(int)arg1 supportedBitrates:(id)arg2 supportedBandwidths:(id)arg3;
+ (int)audioCodecBandwidthForVCAudioCodecBandwidth:(int)arg1;
+ (unsigned int)audioCodecTypeForPayload:(int)arg1;
+ (unsigned int)bitrateForAMRCodecMode:(int)arg1;
+ (unsigned int)bitrateForAMRWBCodecMode:(int)arg1;
+ (unsigned int)bitrateForCodecType:(long long)arg1 mode:(int)arg2;
+ (unsigned int)bitrateForEVSCodecMode:(int)arg1;
+ (double)blockSizeForPayload:(int)arg1 sampleRate:(unsigned int)arg2;
+ (bool)canBundleExternallyForPayload:(int)arg1 forBundlingScheme:(int)arg2 operatingMode:(int)arg3;
+ (bool)canSetBitrateForPayload:(int)arg1;
+ (int)codecBandwidthForPayload:(int)arg1;
+ (id)codecModesForAMR16kHz;
+ (id)codecModesForAMR8kHz;
+ (id)codecModesForEVS16kHz;
+ (id)codecModesForEVS32kHz;
+ (id)codecModesForEVS8kHz;
+ (int)codecRateModeForDesiredANBR:(unsigned int)arg1 payload:(int)arg2 supportedBitrates:(id)arg3 supportedBandwidths:(id)arg4;
+ (unsigned int)codecSamplesPerFrameForPayload:(int)arg1 blockSize:(double)arg2;
+ (unsigned int)codecSamplesPerFrameForPayload:(int)arg1 blockSize:(double)arg2 sampleRate:(unsigned int)arg3;
+ (long long)codecTypeForPayload:(int)arg1;
+ (long long)ctAudioCodecEVSBandwidthForAudioCodecBandwidth:(int)arg1;
+ (long long)ctAudioCodecEVSBitrateForBitrate:(unsigned int)arg1;
+ (long long)ctAudioCodecTypeForMediaStreamCodec:(long long)arg1;
+ (unsigned int)internalBundleFactorForPayload:(int)arg1;
+ (bool)isAMRCodecModeSupported:(int)arg1 forBandwidth:(int)arg2;
+ (bool)isCodecModeSupported:(int)arg1 forBandwidth:(int)arg2 withPayload:(int)arg3;
+ (bool)isEVSCodecModeSupported:(int)arg1 forBandwidth:(int)arg2;
+ (bool)isEVSPayload:(int)arg1;
+ (bool)isFormatAACELDNonSBR48KHzStereo:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
+ (bool)isOpus4Channel48KhzPayload:(int)arg1 outFormat:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg2;
+ (bool)isPayloadSupportedInFaceTime:(int)arg1;
+ (bool)isUseCaseWatchContinuity:(int)arg1 primaryPayload:(int)arg2;
+ (double)opusSamplesPerFrameForSampleRate:(unsigned int)arg1 blockSize:(double)arg2;
+ (int)payloadForCodecType:(long long)arg1;
+ (float)qualityForPayload:(int)arg1 forBitrate:(unsigned int)arg2;
+ (unsigned int)sampleRateForCodecBandwidth:(int)arg1;
+ (unsigned int)sampleRateForPayload:(int)arg1;
+ (bool)shouldEnablePacketSizeLimitForAudioFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
+ (bool)shouldUseCookieForPayload:(int)arg1;
+ (bool)skipBandWidthCheckForCodecRateModes:(int)arg1 supportedBitrates:(id)arg2;
+ (id)supportedCodecModesForBandwidth:(int)arg1 payload:(int)arg2;
+ (bool)supportsCodecBandwidthUpdateForCodecType:(long long)arg1;
+ (bool)supportsCodecRateModesForCodecType:(long long)arg1;
+ (int)vcAudioCodecBandwidthForAudioCodecBandwidth:(int)arg1;

@end
