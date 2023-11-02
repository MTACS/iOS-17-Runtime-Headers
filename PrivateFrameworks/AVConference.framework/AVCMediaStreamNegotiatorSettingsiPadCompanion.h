
@interface AVCMediaStreamNegotiatorSettingsiPadCompanion : AVCMediaStreamNegotiatorSettings

- (long long)captureSource;
- (void)dealloc;
- (unsigned char)featureListStringType;
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id*)arg3;
- (unsigned long long)maxBandwidth;
- (int)operatingMode;
- (long long)videoStreamMode;

@end
