
@interface AVCMediaStreamNegotiatorSettingsRemoteDesktopScreenSharing : AVCMediaStreamNegotiatorSettings

- (long long)captureSource;
- (int)connectionType;
- (unsigned char)featureListStringType;
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id*)arg3;
- (unsigned int)jitterBufferMode;
- (unsigned long long)maxBandwidth;
- (unsigned long long)minBandwidth;
- (int)operatingMode;
- (double)rtcpSendInterval;
- (bool)rtcpTimeOutEnabled;
- (double)rtcpTimeOutInterval;
- (long long)videoStreamMode;

@end
