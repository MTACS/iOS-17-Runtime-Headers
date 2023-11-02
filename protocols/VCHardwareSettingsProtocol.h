
@protocol VCHardwareSettingsProtocol <NSObject>

@required

- (bool)isCaptionsSupported;
- (bool)isDeviceLargeScreen;
- (bool)isExternalCameraSupported;
- (bool)isMLEnhanceOneToOneSupported;
- (bool)isMediaRecordingSupported;
- (bool)isPixelFormatAvailable;
- (bool)isSiriVoicePlayoutSupported;
- (bool)isSiriVoiceTapSupported;
- (bool)isSmartBrakeSupported;
- (bool)isSpatialAudioSupported;
- (bool)isViewPointCorrectionSupported;
- (unsigned int)maxActiveVideoDecoders;
- (unsigned int)maxActiveVideoEncoders;
- (unsigned int)maxDisplayRefreshRate;
- (bool)supportHEVC;
- (NSArray *)supportedVideoPayloads;
- (bool)supportsHEIFEncoding;
- (bool)supportsMultiway1080pStream;
- (bool)supportsMultiway720pStream;
- (bool)useSoftFramerateSwitching;
- (bool)vcpSupportsHEVCEncoder;

@end
