
@protocol BWAdaptiveBracketingDigitalFlashTotalIntegrationTimesProvider <NSObject>

@required

- (<BWAdaptiveBracketingParameters> *)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 sphereOffsetEnabled:(bool)arg2;
- (double)totalIntegrationTimeForDigitalFlashMode:(int)arg1 frameStatistics:(BWFrameStatistics *)arg2 stationary:(bool)arg3 detectedObjects:(NSDictionary *)arg4;

@end
