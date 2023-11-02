
@protocol BWAdaptiveBracketingController <NSObject>

@required

- (<BWAdaptiveBracketingDigitalFlashTotalIntegrationTimesProvider> *)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(NSString *)arg1 wait:(bool)arg2;
- (<BWAdaptiveBracketingParameters> *)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(BWFrameStatistics *)arg2 stationary:(bool)arg3 sphereOffsetEnabled:(bool)arg4 detectedObjects:(NSDictionary *)arg5;
- (void)stopAdaptiveBracketingForSettings:(BWStillImageCaptureSettings *)arg1 withGroup:(int)arg2;

@end
