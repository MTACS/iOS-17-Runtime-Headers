
@interface AVCMediaStreamNegotiatorSettingsRemoteCamera : AVCMediaStreamNegotiatorSettings {
    long long  _captureSource;
    bool  _isDisparityPixelFormat;
}

+ (bool)isOfferSupported;

- (long long)captureSource;
- (unsigned char)featureListStringType;
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id*)arg3;
- (unsigned long long)maxBandwidth;
- (unsigned long long)minBandwidth;
- (int)operatingMode;
- (long long)videoStreamMode;

@end
