
@interface AVCMediaStreamNegotiatorSettingsCoreDeviceScreenSharing : AVCMediaStreamNegotiatorSettings

- (long long)captureSource;
- (int)connectionType;
- (id)featureListString;
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id*)arg3;
- (unsigned int)jitterBufferMode;
- (unsigned long long)maxBandwidth;
- (unsigned long long)minBandwidth;
- (int)operatingMode;
- (long long)videoStreamMode;

@end
