
@interface VNVideoProcessorFrameRateCadence : VNVideoProcessorCadence {
    long long  _frameRate;
}

@property (readonly) long long frameRate;

- (long long)frameRate;
- (unsigned long long)hash;
- (id)initWithFrameRate:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)populateVCPVideoProcessorRequestConfiguration:(id)arg1;

@end
