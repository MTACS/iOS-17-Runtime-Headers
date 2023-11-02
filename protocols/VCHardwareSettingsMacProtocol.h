
@protocol VCHardwareSettingsMacProtocol <VCHardwareSettingsProtocol>

@required

- (bool)canDoHEVC;
- (bool)canDoHiDefDecoding;
- (bool)canDoHiDefEncoding;
- (int)hardwareScore;
- (unsigned int)hwEncoderEnterBitrate;
- (unsigned int)hwEncoderExitBitrate;
- (bool)isIMac;
- (bool)isMacBookWVGA;
- (bool)isMacPro;
- (bool)isMacmini;
- (NSString *)machineName;
- (bool)supports1080pDecoding;
- (bool)supports1080pEncoding;
- (bool)supportsAVFCapture;

@end
