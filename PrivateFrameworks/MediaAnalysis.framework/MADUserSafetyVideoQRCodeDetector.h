
@interface MADUserSafetyVideoQRCodeDetector : MADUserSafetyQRCodeDetector

+ (int)generateDecoderSettings:(id)arg1 decoderConfig:(id)arg2 withRequest:(id)arg3 videoDuration:(double)arg4;

- (id)sensitivityFromQRCodeInVideo:(id)arg1 request:(id)arg2 signpostPayload:(id)arg3 progressHandler:(id /* block */)arg4;

@end
